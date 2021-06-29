//  Return  By  Reference   demo program
#include  <iostream>
using  namespace  std;
int  x  = 25;
int&   f1()   // It  is   RBR   function  due  to  &  in the  return  type
{
	return  x; // variable   'x'   is   returned  but  not  value of  x
}
main()
{
	cout << f1() << "\n";  //  It  becomes  cout << x  --->  25
	f1()++;  // It  bceomes   x++  --->  global  variable  is  incremented
	cout << x << "\n"; // 26
	f1() = 100;  // It  becomes  x = 100
	cout << x << "\n";  // 100
}


/*
Return  By  Reference (RBR)
-------------------------------------------------
1) If  a  function  returns  variable  or  object , it  is  known  as  RBR   function

2) Returntype  must  contain  &

3) RBR   function  can   return  global  variable  but  not  local  variable

4) RBR   function  can   return  reference   parameter   but  not   normal  parameter

5) RBR   function  can   return  data member  of  the  object

Advantages  of  RBR
------------------------------------
1) Functioncall++  is  valid   becoz  function  returns   variable  and  variable++  is  okay

2) Function   can  be  called  on  LHS  of  =
    i.e. functioncall  =  something  --->  It  becomes  variable  =  something
*/