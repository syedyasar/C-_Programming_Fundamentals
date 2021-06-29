//  Find  outputs
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
		void  disp()  //  It  is   automatically   virtual   becoz  function  is  same
		{
			cout << "Child function\n";
		}
};

class  Gc  :  public  Child
{
	public:
		 void  disp()   //  It  is   automatically   virtual   becoz  function  is  same
		{
			cout << "Grand  Child function\n";
		}
};


main()
{
	Child*  p;
	//p= new  Parent; //  Error  becoz  Child  pointer  can  not  point  to Parent  object
	p = new  Child;
	p -> disp(); // Child  function  is  executed  becoz  'p'    points  to   child   object
	p = new Gc;
	p -> disp(); //  Gc  function  is  executed  becoz  'p'  points  to  Gc   object
}
