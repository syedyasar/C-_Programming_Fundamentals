// Find  outputs of the program
#include <iostream>
using  namespace  std;
class 	Parent
{
	public:
			virtual  void   maruti() 
			{
				cout << "Parent	  Maruti\n";
	        }
	        void	fiat() 
	        {
		         cout << "Parent  Fiat\n";
	        }
	        virtual   void	 santro() 
			{
				cout << "Parent	 Santro\n";
	        }
			virtual  void lancer()
			{
			}
};

class	Child	 :  public 	 Parent 
{
	public:
			void  maruti() 
			{
					cout << "Child	maruti\n";
			}
			virtual   void  fiat() 
			{
					cout << "Child  Fiat\n";
			}
			void	 lancer()  
			{
				cout << "Child  lancer\n";
			}
			void 	scorpio() 
			{
				cout << "Child	scorpio\n";
			}
};

main()
{
			Parent  *p;
			Parent  obj1;
			Child   obj2;
			p = &obj1;
			p -> maruti(); // Parent  function  is  executed  bcoz  'p'  points  to  Parent   object
			p = &obj2; 
			p -> maruti();   // Child  function  is  executed  bcoz  'p'  points  to   Child  object
			p = &obj1;
			p -> fiat();   // Parent  function  is  executed  bcoz  'p'  is  a  Parent  pointer
			p = &obj2; 
			p -> fiat();   // Parent  function  is  executed  bcoz  'p'  is  a  Parent  pointer
			p = &obj1;
			p -> santro();  // Parent  function  is  executed  bcoz  'p'  points  to  Parent   object
			p = &obj2; 
			p -> santro();  //  Inherited   function  is  executed  bcoz   there  is  no   santro   function  in   Child  class
			p = &obj1;
			p -> lancer();  // Empty   Parent  function  is  executed  bcoz  'p'  points  to  Parent   object
			p = &obj2; 
			p -> lancer();   // Child  function  is  executed  bcoz  'p'  points  to   Child  object
			//p -> scorpio(); //  Error  becoz  there   is  no   virtual  scorpio  in  Parent  class
			((Child *)p) -> scorpio();  // Child  function  is   executed  becoz  it  is  called  thru  Child  pointer
			((Child *)p) -> fiat(); 
}





/*
1)  Similarity between child fiat and child scorpio methods is that they cannot be called thru parent ref
2) Difference is that 
    a)  When we try to call child fiat method thru parent ref, parent fiat method is executed
	b)  When we try to call child scorpio method thru parent ref, Error is raised
*/
