// virtual  static  function
#include <iostream>
using  namespace  std;
class parent
{
	public:
		virtual  static void f1() //  Error   becoz  virtual  static  is   illegal  combination
		{
			cout << "parent function\n";
		}
};
main()
{
}


/*
1) static  function  is   called  thru  classname 
    i.e. classname ::  function();

2) virtual   function  is  called  thru   pointer
    i.e. ptr -> function();

3) Thus  virtual  static  function is  not   supported
*/

