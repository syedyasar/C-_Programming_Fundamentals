#include <iostream>
using  namespace  std;
template  <class  T1 , class  T2>  // It  is  not  required  becoz  no  parameter  of  f1  function  is  of  type  T1  or  T2
void  f1(int  x , float  y)
{
	cout << "f1  function\t" << x  << "\t" << y << "\n";
}
void   f1(string  x , char  y) // Not  executed 
{
		cout << "f2  function\t" << x  << "\t" << y << "\n";
}
main()
{
	//f1(25 , 10.8); // Error  becoz  datatypes  for  T1  and  T2  can  not  be  determined
	f1<int , float> (25 , 10.8); //  T1  is  int , T2  is  float
	f1<string , char> (72, 45.6f);  // T1 is  string  and  T2  is  char
}


/*
1)  templates  are  not  required  when  parameters  of  function  are  not  of   type  T

2) In case  function  is  using  templates,  call  the  function  by   f1<some datatype , some data type>(25 , 10.8);
*/
