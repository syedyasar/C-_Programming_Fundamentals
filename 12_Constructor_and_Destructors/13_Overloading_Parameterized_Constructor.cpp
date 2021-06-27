//  Overloading  PC
#include <iostream>
using  namespace  std;
class  Date
{
	private:
		int  dd = 15 , mm = 8 , yy = 1947;
	public:
		Date(int   dd1)
		{
			dd = dd1;
		}
		Date(int   dd1 , int mm1)
		{
			dd = dd1;
			mm = mm1;
		}
		Date(int   dd1 , int mm1, int  yy1)
		{
			dd = dd1;
			mm = mm1;
			yy = yy1;
		}
		void  disp()
		{
			cout << dd << " - " << mm  <<  " -  " << yy <<  "\n";
		}
		Date()
		{
				cout << "NAC\n";
		}
};
main()
{
	Date  a(26 , 7 , 2015); // object  is   intialized with 26 , 7 , 2015  by  3 - param PC
	a . disp(); // 26 - 7 - 2015
	Date  b(9 , 2); // object  is   intialized with 9 , 2 , 1947 by  2 - param PC
	b . disp(); // 9 - 2 - 1947
	Date  c(31); //object  is   intialized with  31 , 8 , 1947  by  1 - param PC
	c . disp(); // 31 - 8 - 1947
	Date  d; // object  is   intialized with  15 , 8 , 1947  by  NAC
	d . disp(); // 15 - 8 - 1947
}



/*
PC
-----
1) class   c1
    {
	public:
	            c1(Parameters  declaration)  ---->  It  is  pc
	            {
	            }
    }

2) If  a  constructor  has  at  least  one  parameter,  it  is  known  as  PC

3) Class  can  contain  multiple  PC's.
    i.e.  PC  can  be  overloaded(1-parameter  PC , 2-parameter  PC , 3-parameter  PC , .....).

4) a)  classname  object(values)  ---> object  is  initialized  with  the  specified  values by  PC
    b)  new  classname(values)   ---> Run time  object  is  initialized  with  the  specified  values by  PC
         
5) PC  is  used  to  initialize  object  with  the   specified  values

6) C++  compiler  adds  empty  NAC  to  the  class  when   there  are  no  constructors  in   the  class
     i.e.  classname  object;  ---->  executes  empty  NAC

7) C++  compiler  does  not  interfere  when  there  is   at least  one  constructor  in the  class.

8) When  class  contains  pc  or  cc,  NAC  is  also  mandatory i.e. at  least  empty  NAC

9) Date   d;  --->  Error  when  there  is  no  NAC   in  the  class
*/