#include <iostream>
using  namespace   std;
main()
{
	int  a = 25;
	int*    b = &a;  //  Address  of  variable  'a'  is  assigned  to   b  and  hence  'b'  points  to  variable  'a'
	(*b)++;  // variable  'a'  is  incremented  thru  pointer 'b'
	cout << a << "\n"; //  26
}


/*
1)  int  &b  =   a;   ---->   &  is   reference  becoz  it is on  LHS  of   =  operator   --->  b  and  a  are  names  of  same
     variable

2)  int  *b  =   &a;   ---->   &  is   address  becoz  it is on  RHS  of   =  operator   --->  b  and  a  are  2   different 
     variables


*/