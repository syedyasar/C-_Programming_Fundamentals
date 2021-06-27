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
	int  x  =  35;
	cout << c1 :: x << "\n"; //  25
	cout << x << "\n"; //  35

}
