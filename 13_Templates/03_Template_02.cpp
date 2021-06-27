#include <iostream>
using  namespace  std;
template  <class T>  // It  is  unnecessary becoz  both  x  and  y  are  not  of  type  'T'
class  Test
{
	private:
			int   x;
			float  y;
	public:
			Test(int   x1 , float  y1)
			{
				x = x1;
				y = y1;
			}
			void   disp()
			{
					cout <<  x << "\t" << y << "\n";
			}
};
main()
{
		Test<int>  a(25 , 10.8f); //  T  is  int   and  it  is  ignored
		Test<float> b(37 , 74.5f); // T  is  float  and it  is  ignored
		//Test   c(10 , 20.8f);  // Error becoz  <>  are  missing
		//Test<>   d(10 , 20.8f); // Error  becoz  there is  no  default  type  for  T
		a . disp(); 
		b . disp();
}
