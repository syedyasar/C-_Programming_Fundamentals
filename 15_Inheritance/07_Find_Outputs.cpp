// Find outputs of the program
#include <iostream>
using  namespace std;
class  Parent
{
        protected:
				int  a , b; 
		public:
		        void  get()
				{
        				cout << "Enter any 2 numbers\n";
						cin >> a >> b;
				}
				void disp() 
				{
					cout << a << "\t" << b << "\t";
				}
};
class  Child  : public  Parent //  a , b , get  and disp  are  inherited
{
        protected:
				int   c , d , a; 
        public:
				void  get() 
				{
						Parent :: get();
        				cout << "Enter	 any 3  numbers\n";
						cin >> c >> d >> a;
				}
				void disp() 
				{
					Parent :: disp();
					cout << c << "\t" << d << "\t" << a << "\n";;
				}
				int  total()
				{
						return  Parent :: a +  b + c +  d + a; 
				}
};
main()
{
	Parent   p; // object  is  created with  members  'a'  and  'b'
    p . get();  // reading  inputss  to  object  'p'
	Child  c; // object  is  created with  members  a , b , c  ,  d   and  a
    c . get(); // reading  inputs  to  object  'c'
	cout  << "Parent object \n";
	p . disp(); // values  of  object  'p'  are  printed 
	cout << "\n";
	cout  << "Child  object \n";
	c . disp();  // values  of  object  'c'  are  printed 
	cout << "Sum :  " << c . total() << "\n";  // 
}
