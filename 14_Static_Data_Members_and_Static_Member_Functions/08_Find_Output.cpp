//  Find  outputs
#include <iostream>
using  namespace  std;
class  c1
{
	private:
			static  int   x;
			int y = 20;
	public:
			static  void  f1()
			{
				cout << x << "\n";  //  SMF  can  use  static  member   'x'
				c1  a;
				cout << a . y << "\n";  //  SMF  can  use  non-static  member   'y'
				a . f2();  //  SMF  calls  non-static  MF
			}
			void  f2()
			{
					cout << x << "\n";  //  Non-static   MF  can  use  static  member   'x'
					cout << y << "\n";  //  Non-static   MF  can  use  non-static  member   'y'
					f3(); // Non-static  MF  calls  SMF
			}
			static  void  f3()
			{
				cout << "static  function\n";
			}
};
int  c1 :: x = 10;
main()
{
			c1 :: f1();
}




/*

1) static  function  can  use  non-static  members

2) Similarly  non-static  function  can  use  static  members

3) static  function  can  call   non-static  function  and vice-versa

*/
