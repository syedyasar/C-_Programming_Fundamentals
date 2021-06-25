//  Runtime  array
#include <iostream>
using  namespace  std;
main()
{
		int*   a =  new   int  [5];  //  An  int  array  array  of  size  5  is  created
		for(int  i = 0 ; i <= 4 ; i++)  // array  is  printed
				cout <<  *(a+i) << "\n"; // All  garbage values
		delete  []   a; // Array  is  deleted 
}


/*
1)  new  int [5]  ----> A  runtime  array  of  size  5  is  created

2) new   int (5)  ---> An  int  variable  with  value  5  is  created

3)  new   int;  ---> An  int  variable with  garbage  value  is  created
*/