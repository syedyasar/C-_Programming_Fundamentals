// call  by  reference  demo  program
#include <iostream>
using  namespace  std;
main()
{
	int  a = 10 , b = 20;
	void  change(int& , int&);
	change(a , b);  // Variables  a  and  b  are sent  to  change   function
	cout << "a : " << a << "\n";  // 15
	cout << "b : " << b << "\n"; // 27
}
void  change(int& x , int& y)  // x  and  y  are  references  to  main  function  variables   a  and  b
{
		x += 5;
		y += 7;
}


/*
1) Sending  variable   to  the function is known as  call-by-reference
    Eg: f1(a);  ---> Variable  'a'   is  sent  to f1  function

2) Formal  parameter  is  reference  i.e. int   &x
    Eg :  void  f1(int&  x)
			{
		    }

3) int  a = 25;
    f1(a);  ---> f1  function can  modify  value  of  'a'  thru  reference  'x'

Advantage: CBR  function can  return more than one value without using  return  statement.
The  above  change  function is  returning 2 values  indirectly. They  are  returned  to  main  function  variables  'a'  and  'b'
thru   references  'x'  and  'y'
*/