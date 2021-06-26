// Find  outputs
#include <iostream>
using namespace std;
class  c1
{
		private:
				int x = 10 , y = 20;
		public:
				void   f1();
};				
class  c2
{
		int  a = 30 , b = 40;
		friend  void   c1 :: f1();
};
void c1 :: f1()
{	
		cout << "x : " << x << "\n";
		cout << "y : " << y << "\n";
		c2  obj2;
		cout << "a : " <<  obj2 . a << "\n";
		cout << "b : " <<  obj2 . b << "\n";
}
main()
{
	c1  obj1;
	obj1 . f1();
}

