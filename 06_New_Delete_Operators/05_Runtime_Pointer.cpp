//  Runtime  pointer
#include <iostream>
using  namespace  std;
main()
{
		int**  p  =  new   int*;  //  p  points  to  runtime  pointer
		cout << p << "\n";  //  address  of  the  pointer
		cout << *p << "\n"; // contents  of  the  pointer (garbage address)
}



/*
1)  new  int ---> Runtime  variable  is   created

2)  new  int[5]  ---> Runtime  array  is   created


3) new  int *  ---> Runtime  pointer  is  created
*/