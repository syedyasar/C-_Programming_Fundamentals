// Reading  an  integer  input
#include <iostream>
using  namespace   std;
main()
{
	int  x;
	cout << "Enter an  integer number  :  ";
	cin >> x;  //  25
	cout<<"x : " << x << "\n";
	cout << "Enter an integer  number :  ";
	cin . operator >> (x); 
	cout<<"x : " << x << "\n";
}



/*
1) operator  >>  function   reads input  from  console (like  scanf)

2) It  is  a  function  of  istream  class  and  istream  class  is  defined  in <iostream>  file

3) operator >> function must be called  wrt  istream  class  object  cin

4)  class   istream
     {
		 		operator  >>(parameters)
				{
						.....
						return cin
				}
	 };

5)  istream  cin;

6) cin  >> x  is  same  as  cin . operator >>(x)

7) Which  function  is   called  ?  ----> operator  >>   function  of   istream  class

8)  Function  is  called  wrt  which  object  ?  ----> istream  class  object  cin

9) Which  parameter is  sent to  the  function ?  ----> Parameter 'x'

10) How  many  parameters  can  be  sent to  the function ? ---> only  one

*/