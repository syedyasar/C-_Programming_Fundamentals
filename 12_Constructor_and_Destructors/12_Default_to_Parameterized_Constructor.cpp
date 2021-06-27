//  Default  arguments  to  PC
#include <iostream>
using  namespace  std;
class  Date
{
	private:
		int  dd , mm , yy;
	public:
		Date(int   dd1 = 15  , int  mm1 = 8 , int  yy1 = 1947)
		{
			dd = dd1;
			mm = mm1;
			yy = yy1;
		}
		void  disp()
		{
			cout << dd << " - " << mm  <<  " -  " << yy <<  "\n";
		}
		/*Date()
		{
				cout << "NAC\n";
		}*/
};
main()
{
	Date  a; // object  is  initialized  with  dd = 15 , mm = 8 , yy = 1947  by  PC
	a . disp();  // 15 - 8 - 1947
	Date  b(26); // object  is  initialized  with  dd = 26 , mm = 8 , yy = 1947  by  PC
	b . disp(); // 26 - 8 - 1947
	Date  c(9 , 2); // object  is  initialized  with  dd = 9 , mm = 2 , yy = 1947  by  PC
	c . disp(); // 9 - 2 - 1947
	Date  d(31 , 12 , 1999); // object  is  initialized  with  dd = 31 , mm = 12 , yy = 1999  by  PC
	d . disp(); // 31 - 12 - 1999
	Date *p = new  Date(25 , 9 , 2015); // Runtime  object  is  initialized  with  dd = 25 , mm = 9 , yy = 2015  by  PC
	p -> disp();  // 25 - 9 - 2015
}


/*
1)  Date   a;   leads   to  ambiguity  error   when  class  contains  NAC  and  PC  with  default  arguments

2) There  is   a  confusion  to   system   whether  to   execute  NAC   or  PC   by  sending  default  values
*/
