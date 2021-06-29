// Find  total  and  avg  of  student   and  gross pay and net pay of employee

#include  <iostream>
#include <string.h>
using  namespace  std;
#pragma  pack (1)
struct 	Person  
{
	protected:
			int	num;  
			string	name;
			int	age;
			char gender;
			
	public:
			string type; // It  is  used   to  distinguish   Teacher  and  Student
			virtual   void	 get()  // It   can  be  overridden  by  Child  classes
			{
					cout << "Enter Number   :  ";
					cin >> num; 
					cin . get();
					cout << "Enter Name :  ";
					getline(cin , name) ;
					cout << "Enter  Age : ";
					cin  >> age; 
					cout << "Enter  Gender (m or f)  : ";
					cin >> gender; 
			}
	
			virtual  void	 display()  // It   can  be  overridden  by  Child  classes
			{
					cout <<  num << "\t" << name << " \t" << age << "\t" << gender << "\t";
			}
	
			virtual  void	compute() = 0; // Nothing  to   compute  and  hence  PVF
};

class	Stud  :  public  Person 
{
	protected:
				int   m[3]; // marks   of  3  subjects
				int	tot;
				float   avg;
	public:
				void	 get()  
				{
						Person ::  get(); // Parent   function   reads  number , name , age  and  gender
						type = "Student";
						cout << "Enter Marks of 3 subjects\n";
						cin >> m[0] >> m[1] >> m[2];	
				}
	
				void	compute() 
				{
						tot = m[0] + m[1] + m[2];
						avg = tot / 3.0;
			
				}

				void	 display()
				{
						Person ::  display(); // Parent   function   prints  number , name , age  and  gender
						cout <<  tot << "\t" << avg << "\n";
				}
}; 

class	Teacher  :  public  Person 
{
	protected:
				string  sub;
				float  sal , gp , np;
	public:
				void	 get()  
				{
						Person ::  get(); // Parent   function   reads  number , name , age  and  gender
						type = "Teacher";
						cout << "Enter  subject :  ";
						cin . ignore();
						getline(cin , sub);
						cout << "Enter Salary  : ";
						cin >> sal;
				}
	
				void	compute() 
				{
			
						float   tax;
						float  da  =   0.50  *  sal;
						float  hra  =   0.20  *  sal;
						gp = sal + da + hra;
						float  pf = 0.08 * gp;
						if(pf > 400)
								pf  = 400;
						if(gp < 10000)
							tax = 0.10 * gp;
						else
							tax = 0.15 * gp;
						np = gp - pf - tax;						
				}

				void	 display()
				{
						Person ::  display(); // Parent   function   prints  number , name , age  and  gender
						cout <<  sub << "\t" << sal << "\t" << gp  << "\t" << np << "\n";
				}
}; 

void  menu()
{
		cout << "1 . Teacher \n";
		cout << "2 . Student\n";
		cout << "3 . Exit\n";
}

main()
{
	Person*   a[100];  //  Array  of  100  parent  pointers
    int	ch , i = 0; // starting  subscript
	menu();
	cout << "Enter	 choice :  ";
	cin >> ch; // 2
	while(ch < 3) 
	{
			switch(ch)
			{
				case  1 :	a[i] = new	Teacher; 
								break;					      
				case  2 :	a[i] = new	Stud;
								break;   	     
			}
			a[i] -> get(); 
			a[i] -> compute();  
			i++; // i = 4
			if(i == 100)	
					break;  // goes  out  of  loop  after creation  of   100   objects (becoz  array  size  is  100)
			menu();
			cout << " Enter  choice : ";
			cin >> ch; // 3
		} // while
		//  variable   'i'  represents  number  of   objects
		cout << "Students\n";
        for(int  j = 0; j <= i - 1; j++)
		{
				if (a[j] -> type ==  "Student")
							a[j] -> display();
		}
		cout << "Teachers\n";
		for(int  j = 0; j <= i - 1; j++)
		{
				if (a[j] -> type ==  "Teacher")
							a[j] -> display();
		}
		for(int j = 0 ; j <= i -1 ; j++)  //  deletes  all   'i'   objects
					delete  a[j]; // deletes  that  object  where  a[j]  points  
}


/*
1) sizeof(Teacher)  is  45 + 8 (virtual  pointer) = 53   

2)  virtual  pointer  points  to  virtual  table  and   virtual  table  contains  addresses  of  get , compute  and  display   functions

3) Person  a[100] ;  --->  Error   becoz  array   of  object   is  not  permitted  as   Person  is  an  abstract  class
*/
