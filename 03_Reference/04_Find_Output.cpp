// Find Output

#include <iostream>
using  namespace   std;
main()
{
	int  a = 25;
	int*  b = &a;
	int*  &x = b;
	int &y= *b;
	cout << a << "\n";
	cout << y << "\n";
	cout << *b << "\n";
	cout << *x << "\n";
}

/*

1)  reference  means  variable alias , object  alias and  pointer alias

2)  int   &x  =  b;  ---->  Error  due  to  mismatch  becoz  RHS  type  is  int  *  but  LHS   type  is  int

3)  int*   x  =  b;   --->  'x'  points  to  same  variable  where  'b'  points  i.e. another  pointer is  created 

*/

