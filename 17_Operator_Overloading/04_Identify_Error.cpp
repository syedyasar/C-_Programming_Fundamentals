//  Identify  error
#include  <iostream>
using  namespace  std;
int&   f1(int  x)  // It  is   RBR   function
{
	return    x;  //  Error  becoz  normal  parameter     can  not  be   returned
} //  'x'  is  lost
main()
{
	int  a = 25;
	cout << a << "\n"; // 25
	f1(a) = 35;  //  Error
	cout << a << "\n";
}