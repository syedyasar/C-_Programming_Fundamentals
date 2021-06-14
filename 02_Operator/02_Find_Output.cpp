// Find  outputs
#include <iostream>
using  namespace   std;
int  x  = 10;
main()
{
	cout << x  << "\n"; // GV  is  printed  becoz  there  is  no  LV
	cout << ::x  << "\n"; //  Gv  is  printed 
}