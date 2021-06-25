// Identify  error
#include <iostream>
using  namespace  std;
int  add(int  x  , int  y)
{
		return x + y;
}
int  add(int  x  , int  y , int  z = 50)
{
		return x + y + z;
}
main()
{
	cout << add(30 , 40) << "\n"; //  Error  becoz  there  is  a  confusion  to  system  whether  to  execute  2-param  function   (or)  3-param  function  by sending default  value
}
