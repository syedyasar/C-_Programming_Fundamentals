// Reference operator (&) 
#include <iostream>
using  namespace   std;
main()
{
	int  a = 25;
	int&   b =  a;  // 'b'  is  reference to  variable 'a'  ---> Variable  'a'  is  given  another name 'b'
	cout << &a << "\n"; // Address of  variable   'a'   --->  may  be  1000
	cout << &b << "\n";  // Address of  variable   'b'   --->  1000
	a++; // 25
	cout<< b << "\n"; // 26
}



/*
1)  Reference  is  variable  alias i.e. Existing variable can be given another name  and old  name is  not  lost

2)  int  b  =  a;   ----->  copy  operation
     int  &b  =  a;   ----->  reference operation
*/