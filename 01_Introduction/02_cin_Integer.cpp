#include <iostream>
using  namespace   std;
main()
{
	int  a , b , c;
	cout << "Enter any 3  integer numbers\n";
	cin >> a >> b >> c; // 10   20    15
	cout<<"a : " << a << "\n"; 
	cout<<"b : " << b << "\n";
	cout<<"c : " << c << "\n";
}

/*
1)  There  are  3  function calls  in   cin >> a >> b >> c  

2)  They  are  cin >> a , cin >> b  and  cin >> c

3) cin >> a >> b >> c  ---> cin >> b >> c ---> cin >> c ---> cin --->  ignored

4) operator  >> function can  read single input each  time it  is  called

5) Call  the  function  'n'  times on order  to  read  'n'  inputs.

6) Therefore  processor  time is wasted

7) Alternative  call   to  cin >> a >> b >> c  ----> cin . operator >>(a)  . operator >>(b) . operator >>(c)
*/
      
