// Find  output
#include <iostream>
using  namespace  std;
class   c1
{
	public:
		static  int  x;
};
int  c1 ::  x = 25;
main()
{
	c1  a , b , c;
	cout << c1 :: x << "\n";  //  25
	a . x = 35;
	cout << b . x << "\n";  //   35
	b . x = 45;
	cout << c . x << "\n";  // 45
	c . x = 50;
	cout << a . x << "\n";  // 50
}


