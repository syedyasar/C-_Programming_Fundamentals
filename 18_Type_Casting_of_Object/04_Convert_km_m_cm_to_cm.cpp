// Convert   kilometers , meters , centimeters  to  centimeters
#include <iostream>
using  namespace  std;
class  Dist
{
	private:
			int  km , m , cm;
	public:
			void  get()
			{
				cout << "Enter Kilometers : ";
				cin >> km;
				cout << "Enter Meters : ";
				cin >> m;
				cout << "Enter Centimeters : ";
				cin >> cm;
			}
			operator  int ()
			{
					return  km * 100000 + m * 100+ cm;
			}
};

main()
{
	Dist  d;
	d . get();
	cout << "Equivalent  centimeters : " << (int) d << "\n"; 
}



