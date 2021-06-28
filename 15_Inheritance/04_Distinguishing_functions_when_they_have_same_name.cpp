// How   to  distinguish   functions  when   they  have  same name ?
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
class  Child : public  Parent // Function  f1  is  inherited
{
	public:
			void  f1()
	        {
				cout << "Child  function\n";
			}
			void  disp()
	        {
				 f1();
				 Child :: f1();
				 this  -> f1();
				 Parent :: f1();
			}
};

main()
{
	Child  c;
	c . disp();
	cout << sizeof(c) << "\n";  // size of  empty  class  object is  1B
}




/*
1) Parent  class  contains  member   function   f1  and  child  class  also  contains  member  function  f1.

2) Parent ::  f1()   in   child  class  executes  Parent  function 
      
3)  f1()  in  child  class   executes   same  class   function(i.e.  child  class   function)
*/
