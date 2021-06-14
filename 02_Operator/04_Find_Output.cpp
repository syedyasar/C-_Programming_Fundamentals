#include <iostream>
using  namespace   std;
int  x = 10; //  GV
main()
{ // block  1
	cout << x << "\n"; // Gv is  printed  becoz  there  is  no  LV   ----> 10
	cout << ::x << "\n"; //  10
	x++; // Gv  is  incremented  i.e. 11
	::x++; //  12
	int x = 20;  // LV  of  block1
	cout << x  << "\n";  //  Lv  is  printed  ---> 20
	cout << ::x  << "\n"; //  Gv is  printed  ---->  12
	x++; //  21
	::x++; // 13
	{ //  block2 
		int x  = 30;  // LV  of  block  2
		cout << x  << "\n"; //  30
		cout << ::x  << "\n"; //  13
		x++; //  31
		::x++; // 14
		{ // Block 3
				cout << x  << "\n"; //  LV  of  block 2  ---> 31
				cout << ::x  << "\n"; //  14
				x++;  //  32
				::x++; //  15
		} // End  of  block  3
		cout << x  << "\n"; //  32
		cout << ::x  << "\n"; //  15
		x++; //  33
		::x++; //  16
	} // End  of  block  2
	cout << x  << "\n"; //  21
	cout << ::x  << "\n"; //  16
}


/*
1) Block  in  a  block is  called nested  block

2) LV of  block 2  is  accessed  by  block3  becoz  there  is  no  LV  in   block 3

3) Search  starts  from  inner  block  and  goes  towards  outer block

4) To  access  GV,  ::  operator  is  used 
*/

/*

Output:

GV -16
LV B1 - 21
LV B2 - 33

10
10
20
12
30
13
31
14
32
15
21
16

*/ 

