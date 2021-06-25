// Find  outputs
#include <iostream>
using  namespace  std;
void  f1(int  i , float  f)
{
		cout <<  "f1(int , float)  :  " <<  i << "\t"  << f  << "\n";
}
void  f1(float  f , int   i)
{
		cout <<  "f1(float , int)  :  " <<  f << "\t"  <<  i  << "\n";
}
main()
{
		f1(25 , 10.8f); 
		f1(30.4f , 37); 
		f1(25 , 30.2); 
		f1(45.6 , 65); 
		f1(45.6 , 65.2f); 
		f1(92.8f , 75.4); 
		//f1(10 , 20); //  Error   becoz   there   is  a   confusion  to  system   whether  to  execute  1st   function  or  2nd  function
		//f1(10.6f , 20.8f); //  Error   becoz   there   is  a   confusion  to  system   whether  to  execute  1st   function  or  2nd  function
		//f1(10.6 , 20.8);  //  Error  becoz  none  of   the  functions  have  double  parameter
}
