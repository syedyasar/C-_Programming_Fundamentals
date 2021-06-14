//Identify Error

#include <iostream>
using  namespace std;
main()
{
	const  int  a = 25;
	int  &b = a;  //  Error  due  to mismatch  becoz  RHS  type  is  const  int  but  LHS  type  is  int
	cout << &a << "\n";
	cout << &b << "\n";
}



//  const   int  &b = a;  ---> okay  due to perfect  match
