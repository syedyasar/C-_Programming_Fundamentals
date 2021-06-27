// Generic  class  demo  progra,
#include <iostream>
using  namespace  std;
template  <class T = int>  // default  T is  int 
class  Test  // It  is generic  class  due  to  template 
{
	private:
			T   x , y;
			int  z;
	public:
			Test(T  x1 , T  y1 , int  z1)
			{
				x = x1;
				y = y1;
				z = z1;
			}
			void   disp()
			{
					cout <<  x << "\t" << y << "\t" << z << "\n";
			}
};
main()
{
		Test<int>  a(10 , 20 , 30);  //  object  is  initialized with x = 10 , y = 20 and z = 30  by  contsructor  and  T  is  int
		Test<float>  b(10.8 , 20.6 , 40);  //  object  is  initialized with x = 10.8 , y = 20.6 and z = 40  by  contsructor  and  T  is   float
		Test<>  c(100 , 200 , 300);  //  T  is  int
		//Test  d(1 ,2 , 3);  //  Error  becoz  <>  are  missing 
		a . disp(); //  
		b . disp();
		c . disp();
}
