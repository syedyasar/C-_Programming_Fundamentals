/*
Add  number  and  Join  strings
3  functions 
get()
add()
disp()

*/

#include  <iostream>
#include <string.h>
using  namespace  std;

struct 	Data
{
	public:

			virtual   void	 get()=0;
			virtual  void	 display()  =0;
			virtual  void	add(Data   *a,  Data  *b) = 0;
};

class	Num  :  public  Data
{
	protected:
				int   x;
	public:
				void   get()  
				{
					cout << "Enter any Number:   ";  	
					cin >> x;
				}
				void   add(Data * a , Data*   b) 	
				{	
						x = ((Num *)a) ->x  + ((Num *)b) ->x;
			 	}
				void   display()
				{ 
						cout << "Sum: " <<  x << "\n";	
				}
}; 

class	Str :  public  Data
{
	protected:
				string   x;
	public:
				void	 get()  
				{
					cout << "Enter any String:   ";  
					getline(cin , x);
					
				}
				void	add(Data*   a, Data  * b)
				{	
					x = ((Str *)a) ->x  + ((Str *)b) ->x;
				}
				void	 display()	
				{	
						cout << "Join : " << x << "\n";	
				}
}; 

void  menu()
{
		cout << "\n1 . Add Numbers \n";   cout << "2 . Join Strings\n";   	cout << "3 . Exit\n";
}

main()
{
	Data*   a[3]; 
    int	ch , i;
	menu();
	cout << "Enter  choice :  ";
	cin >> ch;
	cin . ignore();
	while(ch < 3) 
	{
			switch(ch)
			{
				case  1 :	for(int i = 0 ; i <= 2 ; i++)
										a[i] = new Num;
								break;					      
				case  2 :	for(int i = 0 ; i <= 2 ; i++)
										a[i] = new Str;
								break;   	     
			}
			a[0] -> get(); 
			a[1] -> get(); 
			a[2] -> add(a[0] , a[1]);  
			a[2] -> display();
			for(int  i = 0; i <= 2 ; i++)
						delete  a[i];
			menu();
			cout << "Enter  choice : ";
			cin >> ch; 
	        cin . ignore();
		} 
}


