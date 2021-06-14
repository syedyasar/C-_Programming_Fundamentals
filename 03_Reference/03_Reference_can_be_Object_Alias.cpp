#include <iostream>
using  namespace   std;
main()
{
	int  x;
	istream  &din = cin;  //  din   another  name  to  object   cin
	ostream  &dout = cout;  //  dout  is  another  name   to   object  cout
	dout<<"Enter any  number : ";
	din>>x;
	dout<<"x : " << x  << "\n";
}



//   reference  can  be  object  alias  also