//  Function  overloading  demo  program
#include <iostream>
using  namespace  std;
int  add(int  x  , int  y)
{
		return x + y;
}
int  add(int  x  , int  y , int  z)
{
		return x + y + z;
}
float  add(float  x  , float  y)
{
		return x + y;
}
string  add(string  x , string  y)
{
		return  x + y;  // +  means  concatenation
}
double   add(double  x  , double  y)
{
		return x + y;
}
main()
{
	cout << add(10.8 , 20.6) << "\n";  //  add(double , double)  is  executed ---> 31.4
	cout << add(30 , 40) << "\n"; //  add(int , int)  is  executed --->  70
	cout << add("Hyder"  ,  "abad") << "\n"; //  add(string ,  string)  is  executed --->  Hyderabad
	cout << add(10 , 20 , 30) << "\n"; //  add(int , int , int )  is  executed --->   60
	cout << add(70.2f , 80.6f) << "\n";  //  add(float ,  float)  is  executed --->  150.8
}


/*
Function  Overloading
-------------------------------------
1) If  same  function  does  different operations,  it  is  known  as  Function  Overloading.
    Eg  :   add(10 , 20)  is  30
              add("10" , "20")  is  "1020"

2) Arguments  play  a  key  role  in  execution  of  function.
    Eg : If  numbers  are  sent  to  add  function,  it  returns  sum  of  2  numbers.
	       On the otherhand,  if  strings  are  sent  to   add  function , it  returns  join  of  the   2  strings.
           Thus  same  add  function   returns    sum   or  join   result   based  on  arguments

3) Adding  another  functionality  to  same   function  without  losing  existing  functionality   is  known  as  function  overloading.

4) Function  overloading  is  nothing  but  code  refinement

5) Function  overloading  is  also  called  static  polymorphism  or  Compile  time  polymorphism
    (Polymorphim  means  Many  Forms)
    i.e.  add   function  has  5   different  forms  in  the  avove  program  ---> add(int , int) , add(float , float) , add(string , string) ,
	add(double , double)  and  add(int , int , int)

Rules
----------
1) Multiple  functions  can  have  same  name

2) Functions  can  have  same  name  but  not  same  signature
    (Number  of  parameters  and  parameter  types form  signature).
	i.e.  Either number  of  parameters  must  be  different  or  parameter  types.
	                     
If  2   functions have  same  name  and  signature , it  leads  to  ambiguity  error.
*/