// virtual   function  demo  program
#include <iostream>
using  namespace  std;
class  Parent
{
	public:
		  virtual  void  disp()	
		 {
				cout << "Parent function\n";
		}	
};
class  Child  :  public  Parent 
{
	public:
		 void  disp()
		{
			cout << "Child function\n";
		}
};

class  Gc  :  public  Child
{
	public:
		void  disp()
		{
			cout << "Grand  Child function\n";
		}
};


main()
{
	Parent*  p = new  Parent; 
	p -> disp(); // Parent  function  is   executed  becoz    p   points  to Parent object
	p = new  Child;
	p -> disp(); //  Child   function  is   executed  becoz    p   points  to  Child object
	p = new Gc;
	p -> disp();  //  GC  function  is   executed  becoz    p   points  to   GC object
	Parent   a;
	Child  b;
	Gc   c;
	a . disp();
	b . disp();
	c . disp();
}

/*
Virtual   function  and  Function  Overriding
------------------------------------------------------------------------
1) Defining  the   same  function  in  child  class  with  a  different  code  is  known  as   function   overriding

2) Virtual   Function  can  be  overridden   by  child   classs   but  not  normal  function

3) Parent  class   function   is called  'overridden  function'  and  child  class   function   is  called   'overriding  function'

4) Override  parent  class  function  in  child  class  only  when  we  are  not  happy  with  it.
     i.e.  Modify  parent   class  function  in  child  class.
     This  modification  is  called   function  overriding.

5) Function  overriding  is  a  form  of  polymorphism (i.e. Many  Forms)
    Eg :  Parent  class  function  does  an  operation(may  be  addition)  and 
	        same  function  in  child  class  does  a  different  operation(may  be  subtraction)
            This  is  called  polymorphism
            i.e. Same  function  behaves  differently  in  parent  and  child  classes


Rule:
1)  Parent  class  function  and  child  class  function  must  have  same  name  and  signature
     (Number  of  parameters  and  parameter  types form signature)

2) VF  must  be  called  through  pointer   but  not  wrt   object.
    Static  Binding  is  made  when  VF  is  called  wrt  object

Advantage
------------------
Both  parent  class  function  and  child  class  function  are  executed  by  same  call
i.e.  p -> f1();
Parent  class  function  is  executed  when   p  points  to  Parent  object.
On  the  otherhand , Child  class  function  is  executed  when  'p'   points  to  Child   class   object
i.e. Where  p   points  plays  a  key  role  in  execution  of  function.
*/
