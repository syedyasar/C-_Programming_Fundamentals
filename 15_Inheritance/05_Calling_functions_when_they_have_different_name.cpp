// How   to   call   functions  when   they  have  different  names ?
#include <iostream>
using  namespace std;
class  Parent
{
	public:
			void  f1()
	        {
				cout << "Parent  function\n";
			}
};
class  Child : public  Parent  // Function  f1  is  inherited
{
	public:
			void  f2()
	        {
				cout << "Child  function\n";
			}
			void  disp()
	        {
				 f1();
				 Parent :: f1();
				 this -> f1();
				 Child :: f1();
				 f2();
				 Child :: f2();
				 this -> f2();
			}
};

main()
{
	Child  c;
	c . disp();
}
