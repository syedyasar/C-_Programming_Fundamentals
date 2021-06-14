#include <iostream>
using  namespace   std;
main()
{
	int  a = 10 , b = 20 , c = 15;
	cout << a << "\n" << b << "\n" << c << "\n";
}

/*
1)  There  are  3  function calls  in   cout << a << b << c  

2)  They  are  cout << a , cout << b  and  cout << c

3) cout << a << b << c  ---> cout << b << c ---> cout << c  ---> cout 

4) operator  <<  function can  write  single  value  each  time it  is  called

5) Call  the  function  'n'  times on order  to   write  'n'   values

6) Therefore  processor  time is wasted

7) Alternative  call   to  cout << a << b  <<  c  ---> cout . operator <<(a) . operator <<(b) . operator(c)
*/

