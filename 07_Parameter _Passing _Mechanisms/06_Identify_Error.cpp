// identify   error
#include  <iostream>
using  namespace  std;
void  f1(int  &x)
{
		cout << x  << "\n";
}
main()
{
		f1(25);  // Error   becoz  value  can  not  be  sent  due  to &  in the  function  header
}