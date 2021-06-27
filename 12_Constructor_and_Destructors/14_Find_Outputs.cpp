//  Find  outputs
#include <iostream>
using  namespace  std;
class  Date
{
	private:
		int  dd = 15 , mm = 8 , yy = 1947;
	public:
		Date(Date  a , Date  b , Date  c)
		{
			dd = a . dd;
			mm = b . mm;
			yy = c . yy;
		}
		void  disp()
		{
			cout << dd << " - " << mm  <<  " -  " << yy <<  "\n";
		}
		Date()
		{
		}
};
main()
{
	Date  a , b , c; // NAC   is   executed  3  times  and  each  object  contains 15 , 8  and 1947
	Date  d(a , b , c); // a.dd , b.mm  and c.yy  are  copied  to   object  'd'  by  pc
	d . disp(); // 15 - 8 - 1947
}
