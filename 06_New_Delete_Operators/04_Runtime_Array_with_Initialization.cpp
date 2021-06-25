//  Runtime  array  with  initialization
#include <iostream>
using  namespace  std;
main()
{
		int*   a =  new   int  [5] {10 , 20 , 30 , 40 ,50}; // Array  is  created   with  5  elements 
		for(int  i = 0 ; i <= 4 ; i++)  //  Array is  printed
				cout << a[i] << "\n"; // 10  20  30  40   50
		delete  []   a; // Array   is  deleted
		cout << a[0] << "\n"; // garbage  value  becoz  array  is  already  deleted
}


/*
1)  new  int[5];  ---> Array  is  created  with  garbage  value

2)  new  int[5]  {10 , 20 , 30 , 40 , 50}  ;  ---> Array  is  created  with  5 elements

3) new  int [] {10 , 20 , 30 , 40 , 50}  ---> Error  becoz  []  can not  be empty in new operator

4) delete [5]  a ---> Error  becoz  []  must be  empty  in  delete  operator
*/