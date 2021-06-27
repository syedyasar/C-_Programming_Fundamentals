// static   function  demo  program
#include <iostream>
using  namespace  std;
class   c1
{
	public:
		static   void  f1()
		{
			cout << "static  function\n";
		}	
};

main()
{
	c1 :: f1();  //  function  is  called   through  classname
	c1   a;
	a . f1();  //  function  is  called  wrt  object 
}
