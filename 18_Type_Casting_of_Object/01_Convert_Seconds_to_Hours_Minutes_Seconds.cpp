// Convert  seconds  to  hours , minutes  and  seconds

#include <iostream>
using  namespace  std;
class  Time
{
	private:
			int  h , m , s;
	public:
			Time(int  sec)
			{
					h = sec / 3600;  //  2
					sec =  sec % 3600;  //  2452
					m =  sec / 60;  // 40
					s = sec % 60;  //  52
			}
			void  disp()
			{
				cout << h << " hours " << m << " minutes " << s << " seconds \n";
			}
};
main()
{
	int  sec;
	cout << "Enter seconds : ";
	cin >> sec; // 9652
	Time  t = sec;  // int  to  Time  conversion  i.e.  constructor  converts  variable  to   object
	t . disp();
}
