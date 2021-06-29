//  Return  By  Value  demo program
#include  <iostream>
using  namespace  std;
int  x  = 25;
int  f1()
{
	return  x; // value of  'x'  is  returned
}
main()
{
	cout << f1() << "\n"; // 25
	//f1()++;  //  25++  leads  to  error
	//f1() = 100; // 25 = 100  leads  to  error
}


/*
Return   By  Value(RBV)
------------------------------------------
1) If   a   function   returns  value  ,  It  is  known   as  RBV   function

2) functioncall++  leads  to  error   becoz  function  returns  value
variable++ is  valid  but  not  value++

3) function  can  not  be  called  on  LHS  of  =.
     LHS  of  =   must  be   variable  but  not  value
*/
