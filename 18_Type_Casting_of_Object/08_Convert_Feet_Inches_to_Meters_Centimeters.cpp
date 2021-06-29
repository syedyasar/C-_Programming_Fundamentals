// Convert   feet  and  inches  to  Meters and  centimeters
#include <iostream>
using  namespace  std;
class  c1
{
	private:
			int f , i;
	public:
			void  get()
			{
				cout << "Enter Feet : ";
				cin >> f;  // 7
				cout << "Enter  Inches : ";
				cin >> i; //  8
			}

			int  getf()
			{
					return f;
			}

			int  geti()
			{
					return i;
			}
};

class  c2
{
	private:
			int  m , cm;
	public:
			c2(c1  a)
			{
				float  inch = a . getf() * 12 + a . geti(); // Conversion  feet  and  inches  to  inches
				float  centi = inch * 2.54;  // conversion  inches  to  centimeters
				m = centi / 100;  // conversion   centimeters  to  meters
				cm = (int)centi % 100;  // Remaining  centimeters
			}

			void   disp()
			{
				cout << m << " meters " << cm << " centimeters \n";
			}
};

main()
{
	c1   a;
	a . get();
	c2  b = a;  // Conversion   of  c1   class   object   'a'    to  c2   class  object  'b'
	b . disp();
}
