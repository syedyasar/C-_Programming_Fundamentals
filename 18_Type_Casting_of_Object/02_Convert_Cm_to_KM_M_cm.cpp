// 1) Convert  centimeters  to  kilometers , meters   and  centimeters
//    Eg :   input  :  200450
//   Output :  2  kilometers  4  meters  and  50  centimeter

#include <iostream>
using  namespace  std;
class  Dist
{
	private:
			int  km , m , cm;
	public:
			Dist(int  cm1)
			{
				km = cm1 / 100000;   
				int mm= (cm1 % 100000);
				m =  mm/ 100;  
				cm =  mm% 100; 
			}
			void  disp()
			{
				cout << km << " Kilometer " << m << " meter " << cm << " centimeters \n";
			}
};

main()
{
	int  cm;
	cout << "Enter value in centimeters : ";
	cin >> cm; 
	Dist  d = cm;  
	d . disp();
}


