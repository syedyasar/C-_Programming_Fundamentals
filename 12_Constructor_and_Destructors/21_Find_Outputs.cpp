// Find  outputs
#include <iostream>
using  namespace  std;
class  Date
{
	private:
		int dd = 15 , mm = 8 , yy = 1947;
	public:
		Date(Date&  a)
		{
			dd = a . dd;
			mm = a . mm;
			yy = a . yy;
			cout << "CC\n";
		}
		void  disp()
		{
				cout << dd << "-" << mm << "-" << yy << "\n";
		}
		Date()
		{
			cout << "NAC\n";
		}
		void  f1()
		{
			yy = 1948;
		}		

};
main()
{
		Date  a; // object  'a'  contains 15 , 8  and  1947  becoz  NAC is initializing  them
		Date  b =  a; // contents  of  object   'a'  are  copied  to   object  'b'  by  CC
		Date  c; // object  'C'  contains 15 , 8  and  1947  becoz  NAC is initializing  them
		c = a; // contents  of  object   'a'  are  copied  to   object  'c'  without  any  constructor
		a . f1();
		a . disp(); // 15-8-1948
		b . disp(); // 15-8-1947
		c . disp(); // 15-8-1947
}
