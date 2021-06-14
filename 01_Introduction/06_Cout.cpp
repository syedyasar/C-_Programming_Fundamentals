

#include <iostream>
using  namespace   std;
main()
{
	int  x = 25;
	cout << "x : " <<  x  << "\n";
	cout . operator <<(x)<<"\n";
}



/*
1) operator  <<   function   writes  values  to  console (like  printf)

2) It  is  a  function  of  ostream  class  and  ostream  class  is  defined  in <iostream>  file

3) operator  <<  function must be called  wrt  ostream  class  object  cout

4)  class   ostream
     {
		 		operator  <<(parameters)
				{
						.....
						return  cout;
				}
	 };

5) ostream  cout;

6) cout <<  x  is  same  as  cout . operator <<(x)

7) Which  function  is   called  ?  ----> operator  <<   function  of   ostream  class

8)  Function  is  called  wrt  which  object  ?  ---->  ostream  class  object  cout

9) Which  parameter is  sent to  the  function ?  ----> Parameter 'x'

10) How  many  parameters  can  be  sent to  the function ? ---> only  one

*/



