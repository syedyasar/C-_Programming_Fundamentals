
// identify   eror
#include <iostream>
using  namespace   std;
main()
{
	int  x;
	cout >>  x;  //  Error  becoz  operator  >>  function must be called wrt  istream class  object  cin
	cin  <<  x;   //  Error  becoz  operator  <<  function must be called wrt  ostream class  object  cou
}
