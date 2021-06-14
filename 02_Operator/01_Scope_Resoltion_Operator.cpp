// Scope  resolution  operator (::)  demo  program
#include <iostream>
using  namespace   std;
int  x  = 10;  // Global  variable
main()
{
	int  x = 20; // Local  variable 
	cout << x  << "\n";  // 20
	cout << ::x  << "\n"; // 10
}


/*
1) If  LV  and  GV  have  same name ,  they  are  distinguished  by  ::  operator  

2) LV  is  accessed  by   'x'  and  GV  is  accessed  by  ::x

3) ::  is  unary  operator  becoz  it  has  only  one  operand
*/
