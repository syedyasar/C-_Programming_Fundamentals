//  explicit  constructor
#include <iostream>
using  namespace  std;
class  Sample
{
	private:
			float  x;
	public:
			Sample()
			{
				x = 25;
				cout << "NAC\n";
			}
			explicit  Sample(float   y)
			{
					x = y;
					cout << "PC\n";
			}
			Sample(Sample&   a)
			{
					x = 1 / a . x;
					cout << "CC\n";
			}
			~Sample()
			{
				cout << "Object  is  lost\n";
			}

			void disp()
			{
					cout << x << "\n";
			}
};
main()
{
		Sample  a , b(25) ,  c = b;
		a . disp();
		b . disp();
		c . disp();
//		a = 35;  //  Error   due  to  mismatch  i.e. LHS  object  type  is  Sample  and  RHS  35  type  is  int
//		b = 45; //  Error   due  to  mismatch  i.e. LHS  object  type  is  Sample  and  RHS  35  type  is  int
		c = b;
		a . disp();
		b . disp();
		c . disp();
}

/*
1) a  = Sample(35)  is   okay  even though   Pc  is  explicit  constructor

2)  a = 35  leads  to  error  when pc   is   explicit  constructor
*/
