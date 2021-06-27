// Find  outputs
#include <iostream>
using  namespace  std;
class   c1
{
	public:
		static  int  x , y;
};
int  c1 ::  x = 25 , c1 :: y = 35;
main()
{
	cout << c1 :: x << "\n"; // 25
	cout << c1 :: y << "\n"; // 35
}
