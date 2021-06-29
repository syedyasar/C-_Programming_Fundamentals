//  Find Outputs
#include  <iostream>
using  namespace  std;
int&   f1(int&  x)  //   'x'  is  reference  to  main  function  variable   'a'
{
	return    x;  // main  function  variable   'a'  is   returned
} //  Reference  'x'  is  lost
main()
{
	int  a = 25;
	cout <<  a  << "\n";  // 25
	f1(a) = 35;  //  It  becomes   a  = 35
	cout <<  a  << "\n"; // 35
}
