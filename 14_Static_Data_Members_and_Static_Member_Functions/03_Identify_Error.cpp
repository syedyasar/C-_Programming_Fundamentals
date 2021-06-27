// Identify  error
#include <iostream>
using  namespace  std;
class   c1
{
	public:
		static  int  x;
};
main()
{
	cout << c1 :: x << "\n";  //  Error  becoz  it  is   not  created  i.e.  Memory  is  not  allocated  to  member  'x'
}
