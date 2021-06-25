// call  by   constant  reference  demo  program
#include <iostream>
using  namespace  std;
main()
{
	int  a = 10 , b = 20;
	void  change(const int& , const int&);
	change(a , b);
	cout << "a : " << a << "\n"; // 10
	cout << "b : " << b << "\n"; // 20
}
void  change(const int& x , const int& y)
{
		//x += 5; //  Error  becoz  'x'  can  not  be  modified 
		//y += 7;  //  Error  becoz  'x'  can  not  be  modified 
}



/*
1) Sending  variable   to  the function is known as  call-by-constant-reference
    Eg: f1(a);  ---> Variable  'a'   is  sent  to f1  function

2) Formal  parameter  is  constant   reference  i.e. const  int   &x
    Eg :  void  f1(const   int&  x)
			{
		    }

3) int  a = 25;
    f1(a);  ---> f1  function can  not   modify  value  of  'a'  thru  reference  becoz   it  is  a  constant   reference

Note: CBV  and  CBCR   are  almost  same
*/