// Identify  error
#include <iostream>
using  namespace  std;
int  add(int  x  , int  y)
{
		return x + y;
}
float  add(int   a  , int   b)  //  Error   becoz  same  function  already   exists
{
		return a + b;
}
main()
{
}


/*
1) Both  the  functions  have  same  name  and  signature  and  hence   It  leads  to  ambiguity  error.

2) Return  type  is  not  a  part  of  the  signature

3) Parameter  names  are  also  not  a  part  of  signature

4) Signature  means  number  of  parameters  and  their  types
*/

