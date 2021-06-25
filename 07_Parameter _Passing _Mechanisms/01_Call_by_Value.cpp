// call  by  value  demo  program
#include <iostream>
using  namespace  std;
main()
{
	int  a = 10 , b = 20;
	void  change(int , int);
	change(a , b);
	cout << "a : " << a << "\n"; // 10
	cout << "b : " << b << "\n"; // 20
}
void  change(int  x , int   y)
{
		x += 5; // x  is   15
		y += 7;  // y  is   27
}



/*
1) Sending  value  to  the function is known as  call-by-value
    Eg: f1(25);  ---> Value  25  is  sent  to f1  function

2) Formal  parameter  is  variable i.e. int  x
    Eg :  void  f1(int  x)
			{
		    }

3) int  a = 25;
    f1(a);  ---> f1  function can  not  modify  value  of   'a'  becoz   &  is  missing  in  the  formal  parameter

4) In general, value sent to  the  function  can  not  be modiifed  by  called  function
*/