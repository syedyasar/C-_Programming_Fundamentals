//  Identify  error
#include <iostream>
using  namespace  std;
class  Rat
{
	public:
		Rat()
		{
		}
		Rat()  //  Error  becoz  NAC  already  exists
		{
		}				
};
main()
{
}




/*
NAC  (or)  DC
----------------------
1)  class   c1
     {
		pubic:
		      c1()
		      {
		      }
     };

2) If  a  constructor  has  no  parameters,  it  is  known  as  NAC  or  DC

3) class  can  contain  at  most  one  NAC  i.e  one  or  none

4) NAC    can  not  be  overloaded.  If  there  are  2  NAC's  in  a  class,  they  will  have  same  name  and  signature
    which   leads  to   ambiguity  error.

5) At  least   empty   NAC  is  mandatory   when   class  contains  PC  or  CC
 
6)  a)  classname   object;  ----> NAC  is  executed  
     b)  new  classname;   --->  NAC   is  executed
*/
