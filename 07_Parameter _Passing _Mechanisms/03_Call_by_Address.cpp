// call  by  address  demo  program
#include <iostream>
using  namespace  std;
main()
{
	int  a = 10 , b = 20;
	void  change(int* , int*);
	change(&a , &b);
	cout << "a : " << a << "\n"; //  15
	cout << "b : " << b << "\n";  //  27
}
void  change(int* x , int* y)
{
		*x += 5;  // a = 15
		*y += 7;  // b = 27
}


/*
1) Sending   address   to  the function is known as  call-by-address
    Eg: f1(&a);  --->   Address  of   Variable  'a'   is  sent  to f1  function

2) Formal  parameter  is   pointer  i.e. int   *x
    Eg :  void  f1(int*  x)
			{
		    }

3) int  a = 25;
    f1(&a);  ---> f1  function can  modify  value  of  'a'  thru   pointer

Advantage: CBA  function can  return more than one value without using  return  statement.
The  above  change  function is  returning 2 values  indirectly. They  are  returned  to  main  function  variables  'a'  and  'b'
thru   pointers  'x'  and  'y'

Note:  CBR  and  CBA   are  almost  same
*/