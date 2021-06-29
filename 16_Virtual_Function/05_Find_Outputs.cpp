#include  <iostream>
using  namespace  std;
class   Parent
{
	public:
		virtual  void   marriage()
		{
			cout << "Arranged  Marriage\n";
		}
		virtual  void   study()
		{
			cout << "Study  only\n";
		}
		void  property()
		{
			cout << "1  crore \n";
		}
};
class   Child   :  public  Parent
{
	public:
		void  marriage()
		{
			cout << "Love  Marriage\n";
		}
		void   study()
		{
			Parent :: study();
			cout  << " +  Entertainment  Also\n";
		}
};

main()
{
	Parent  *p;
	Parent  obj1;
	Child  obj2;
	p = &obj1;
	p -> marriage();  // Parent  function   is   executed  becoz  p  points  to  Parent  object
	p = &obj2;
	p -> marriage(); //  Child   function   is   executed  becoz  p  points  to   Child  object
	p = &obj1;
	p -> study(); // Parent  function   is   executed  becoz  p  points  to  Parent  object
	p = &obj2;
	p -> study(); //  Child   function   is   executed  becoz  p  points  to   Child  object
	p = &obj1;
	p -> property();  //  Parent  function   is   executed  becoz  p  is  a   Parent  pointer
	p = &obj2;
	p -> property(); //  Parent  function   is   executed  becoz  p  is  a   Parent  pointer
}
