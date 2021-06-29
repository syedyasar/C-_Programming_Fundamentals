// Convert   hours , minutes , seconds   to  seconds
#include <iostream>
using  namespace  std;
class  Time
{
	private:
			int  h , m , s;
	public:
			void  get()
			{
				cout << "Enter Hours : ";
				cin >> h;
				cout << "Enter Minutes : ";
				cin >> m;
				cout << "Enter Seconds : ";
				cin >> s;
			}
			operator  int ()
			{
					return  h * 3600 + m * 60 + s;
			}
};

main()
{
	Time  t;
	t . get();
	cout << "Equivalent  Seconds : " << (int) t << "\n";  // operator  int   function  is  executed  wrt  object  't'
}


/*
operator  datatype()   function
-----------------------------------------------------
1) It  is  used  to  typecast  an  object  to  standard  type

2) (int)object  executes  operator  int()  function  which  converts  object  to   int  and  alternative  call  is  object . operator int()
    (float)object  executes  operator  float()  function  which  converts  object  to  float  and  alternative  call  is
     object . operator  float()
    (string)object  executes  operator  string()  function  which  converts  object  to    string  and  alternative  call  is
     object . operator  string()

3) It  has to be a MF  to  the  class  but  not  friend  function

4) Function  name  itself  contains  return type
     i.e.  int  is  the  return  type  in  operator  int()  function

5) It  can  not  have  any  parameters

6) It  must  contain  return  statement
*/
