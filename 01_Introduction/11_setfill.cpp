

#include <iostream>
#include <iomanip>  //  in  view  of  setw  and setfill  functions
using  namespace   std;
main()
{
	double   a = 123.9274;
	cout << setw(10) <<  a << "\n"; // <3spaces>123.927
	cout << setw(10) << setfill('*') << a << "\n"; // ***123.927
	cout << setw(10) << setfill('$') << a << "\n"; //  $$$123.927
	cout << setw(12) <<   a << "\n"; //  $$$$$123.927
}

// 3  digits  after decimal  point  by  default



