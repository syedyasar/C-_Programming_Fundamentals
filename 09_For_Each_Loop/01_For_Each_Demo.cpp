// for .. each  loop  demo  program
#include <iostream>
using  namespace std;
main()
{
	int  a[] = {10 , 20 , 15 , 18};
	for(int  x :  a)  // x  is  each  element  of  array  'a'
			cout << x << "\n";  // 10   20   15    18
}