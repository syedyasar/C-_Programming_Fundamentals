//  Same  program  without  virtual
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
	p -> disp(); // Parent  function  is   executed  becoz    p   is   a   Parent  pointer 
	p = new  Child;
	p -> disp(); // Parent  function  is   executed  even  though  p   points  to   child  object
	p = new Gc;
	p -> disp(); // Parent  function  is   executed  even  though  p   points  to   Gc  object
}



