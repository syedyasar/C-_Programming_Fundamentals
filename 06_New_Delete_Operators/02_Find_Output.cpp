#include <iostream>
using  namespace  std;
main()
{
		int*  a = new int; //  variable is  created with  garbage value
		cout << "a :  "  << a << "\n"; // address of  int  variable
		cout << "*a : " << *a << "\n"; //   garbage  value
		delete  a;  // runtime  variable is  deleted
		cout << "*a  :  " <<  *a << "\n";
}