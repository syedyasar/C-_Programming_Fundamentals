
/*
 overload  []  operator  on  Employee   object
obj[empno]  ---> ename
obj[ename]  ---> empno
*/

#include  <iostream>
using  namespace  std;
class  Emp
{
			private:
					int  empno;
					string  ename;
			public:
					friend  istream&  operator  >> (istream&  din , Emp &e);
					
					int  getempno() //  accessor   function
					{
						return  empno;
					}
					string  getename() // accessor  function
					{
						return ename;
					}
};


istream&  operator  >> (istream&  din , Emp &e)
{
	cout << "Enter  Employee  Number :  ";
	din >> e . empno;
	cout << "Enter  Employee  Name :  ";
	din . ignore();
	getline(din , e . ename);
	return  din;
}

class   Employee
{
	private:
			int  n; //  n  is   array  size
			Emp   *a;  //  'a'  points  to  array  of  Emp  class  objects
	public:
			void  get()
			{
					cout  << "How  many  employess :  ";
					cin >> n;
					a = new  Emp[n];
					for(int  i = 0 ; i <=  n - 1 ; i++)
							cin >> a[i];
			}

			string   operator  [] (int  empno1)
			{
				for(int i = 0 ; i <= n - 1; i++)
				{
					if (a[i] . getempno() == empno1)
								return  a[i] . getename();
				}
				return   "Invalid  Emp  Number";
			}
			/*
            1)   e[15]  --->  ename  or  "invalid"
			2) e. operator [] (15)
			*/
			int   operator  [] (string  ename1)
			{
				for(int i = 0 ; i <= n - 1; i++)
				{
					if (a[i] . getename() == ename1)
								return  a[i] . getempno() ;
				}
				return   -1;
			}
			/*
            1)   e["Rajesh"]  --->  empno   or   -1
			2)   e. operator [] ("Rajesh)
			*/
};


void  menu()
{
	cout << "1. Retrieve emp name wrt  empno \n";
	cout << "2. Retrieve emp number wrt  ename \n";
	cout << "3. Exit\n";
}


main()
{
	Employee   e;
	e . get();
	int  ch , empno;
	string  ename;
	menu();
	cout << "Enter choice : ";
	cin >> ch;
	while (ch < 3)
	{
			switch(ch)
			{
				case 1: {
									cout << "Enter  Employee  Number   :  ";
									cin >> empno;
									string  ename = e[empno];
									if (ename == "Invalid  Emp  Number")
											cout << ename << "\n";
									else
											cout <<  "Employee  Name  :   " << ename << "\n";

									break;
							 }
				case 2: {
									cout << "Enter  Employee  Name  :  ";
									cin . ignore();
									getline(cin , ename);
									int  empno = e[ename];
									if (empno == -1)
												cout << "Invalid  Emp name\n";
									else
											cout <<  "Employee  Number  :   "  << empno << "\n";
									break;
							 }
			}
			menu();
			cout << "Enter choice : ";
			cin >> ch;
	}
}
