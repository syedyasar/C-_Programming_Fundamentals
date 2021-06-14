// Find  outputs
#include <iostream>
using  namespace   std;
main()
{
	int x = 25;
	cout << x  << "\n"; // LV  is  printed  ---> 25
	//cout << ::x  << "\n"; //  Error   becoz  there  is  no  GV  'x'
}


/*
1)  ::  operator  can  not  be  used  when  there  is  no  GV

2)  Gv  is   accessed  when  there  is  no  LV  but  not  vice-versa
     i.e. LV  is  not  accessed  when  there  is  no  GV
*/
