//  Runtime  array  of  pointers
#include <iostream>
using  namespace  std;
main()
{
		int**  a  =  new   int  * [5];// 'a'  points  to  array  of  pointers
		for(int  i = 0 ; i <= 4 ; i++) // array  is  printed
				cout << *a[i] << "\n";  //  garbage  addresses
}


/*
1) new  int [5]  ---> Array  of  values

2) new  int * [5] --> Array  of  pointers
*/
