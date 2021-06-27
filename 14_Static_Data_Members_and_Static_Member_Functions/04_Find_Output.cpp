// Find  output
#include <iostream>
using  namespace  std;
class   c1
{
	public:
		static  int  x;
};
int  c1 ::  x;  //  Memory  allocation  to  static  member   and   value  of  'x'  is  0  by  default
main()
{
	cout << c1 :: x << "\n"; // 0
}
