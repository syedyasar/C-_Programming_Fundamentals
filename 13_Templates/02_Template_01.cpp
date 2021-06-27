#include <iostream>
using  namespace  std;
template  <class T1=int , class T2 = int>  // default  T1  and   T2  are  int
class  Test
{
	private:
			T1  x;
			T2  y;
			char  ch;
	public:
			Test(T1  x1 , T2  y1 , char  ch1)
			{
				x = x1;
				y = y1;
				ch = ch1;
			}
			void   disp()
			{
					cout <<  x << "\t" << y << "\t" << ch << "\n";
			}
};
main()
{
		Test<int,float>  a(25 , 10.8 , 'g'); // object  is  initialized with x = 25 , y = 10.8 , ch = 'g' by  constructor and   T1  is  int , T2  is  float
		Test<float , string>  b(45.2 , "Hyd" , 's'); // object  is  initialized with x = 45.2 , y = "Hyd"  , ch = 's' by  constructor and   T1  is  float , T2  is  String
		Test<int , int >  c(10 , 20 , 'h'); // object  is  initialized with x = 10 , y = 20 , ch = 'h' by  constructor and   T1  is  int , T2  is  also  int
		Test<int> d (10 , 20 , 'm'); // object  is  initialized with x = 10 , y = 20 , ch = 'm' by  constructor and   T1  is  int , T2  is  also  int
		Test<>  e(100 , 200 , 'k'); // T1  is int  and T2  is  also  int
		//Test  f(100 , 200 , 'k');  // Error  becoz <>  are missinf
		a . disp();
		b . disp();
		c . disp();
		d . disp();
		e . disp();
}
