//  Child  class   function  is  virtual
#include <iostream>
using  namespace  std;
class  Parent
{
	public:
		 void  disp()	
		 {
				cout << "Parent function\n";
		}	
};
class  Child  :  public  Parent 
{
	public:
		virtual    void  disp()
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
	Child*  p;
	//p= new  Parent;  //  Error  becoz  child  pointer  can  not  point  to  parent  object
	p = new  Child;
	p -> disp(); // Child  class  function is  executed  becoz  'p'  points  to  Child  object
	p = new Gc;
	p -> disp(); //  Gc  function is  executed  becoz  'p'  points  to   Gc  object
}
