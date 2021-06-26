// Find  outputs
#include <iostream>
using namespace std;
class  c1
{
		private:
				int x = 10 , y = 20;
		public:
				friend  void   f1();
};
class  c2
{
		int  a = 30 , b = 40;
		friend  void   f1();
		void  f1()
		{
				cout << "private  function f1 \n";
		}			
};

void  f1()
{
	c1  obj1;
	cout << "x : " << obj1 . x << "\n";
	cout << "y : " << obj1 . y << "\n";
	c2  obj2;
	cout << "a : " << obj2 . a << "\n";
	cout << "b : " << obj2 . b << "\n";
	obj2 . f1();
}
main()
{
	f1();
}
