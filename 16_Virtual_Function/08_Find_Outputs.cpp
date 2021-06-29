// Find outputs of the program
#include <iostream>
using  namespace  std;
class parent 
{
	public:
		void  f1() 
		{
			cout << "parent function\n";
		}
};
class child  : public parent  
{
	public:
		void f2() 
		{
			cout << "child function\n";
		}
};
main()
{
		parent*  p = new parent;
		p -> f1(); // Parent  function  is  executed becoz  'p'  is  Parent  pointer
		//p -> f2(); //  Error  becoz  there  is  no  f2   function  in  Parent  class
		child*  c = new child;
		c -> f1(); // Inherited  function  is  executed  becoz  there  is  no  f1   function in  Child  class
		c -> f2();  //  Child   function  is  executed becoz  'C'  is  Parent  pointer
		p = c; 
		p -> f1(); // Parent  function  is  executed becoz  'p'  is  Parent  pointer
		//p -> f2();  //  Error  becoz  there  is  no  f2   function  in  Parent  class
		((child *)p) -> f2();  // Child  function is  executed  becoz  'p'  is  converted  to  Child  pointer
}


