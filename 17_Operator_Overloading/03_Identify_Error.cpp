//  Identify  error
#include  <iostream>
using  namespace  std;
int&   f1()  // It  is   RBR   function
{
	int   x  = 25;
	return    x;  //  Error  becoz  Local  variable   can  not  be   returned
}
main()
{
}