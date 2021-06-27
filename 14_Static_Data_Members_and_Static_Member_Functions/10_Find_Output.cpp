// Find outputs
#include <iostream>
using  namespace  std;
class  Test
{
	private:
			static  int  x ;
			int  y , z ;
	public:
			static  void  get1()
			{	
				cout << "Enter any number : ";
				cin >> x;
			}

			void  get2()  
			{
					cout << "Enter  any   2  numbers\n";
					cin >> y >> z;
			}

			void  compute()
			{
					x++;
					y++;
					z++;
			}

			void  disp()
			{
					cout << x  << "\t" << y << "\t" << z << "\n";
			}
};
int  Test :: x ;  // Memory  allocation  to  static  member

main()
{
		Test :: get1(); 
		Test  a , b , c;
		a . get2();
		b . get2();
		c . get2();
		a . compute();
		b . compute();
	    c . compute();
		a . disp();
		b . disp();
		c . disp();
}
