// Identify  error
#include <iostream>
using  namespace  std;
int  add(int  x  , int  y)
{
		return x + y;
}
float  add(float   x  , float   y)
{
		return x + y;
}
main()
{
	cout << add(10.8 , 20.6) << "\n"; //  Error  becoz  there  is  a  confusion  to  system   whether  to  convert  double  to   int  (or)   float
}
