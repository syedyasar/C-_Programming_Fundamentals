//  NAC  and  PC  of  child  class
#include <iostream>
using  namespace  std;
class  Parent
{
	protected:
		 int  a , b;
	public:
		 Parent()
		 {
		        a = b = 0;
		 }
		 Parent(int  a1 , int b1) 
		 {
				a = a1;
		        b = b1;
				cout << a << "\t" << b << "\n";
	     }
		 void display()
	     {
		       cout << a << "\t" << b << "\t";
		 }
};
class  Child  :  public  Parent 
{
	protected:
			int  c , d;
	public:
			Child()  //  : Parent()   is   optional   becoz  OS   executes   Parent  class   NAC   before   execution   of  class  class  NAC
			{
				c = d = 0;
			}
	        Child(int  a2 , int  b2 , int  c2 , int  d2)    : Parent(a2 , b2)  // constructor  call  to  Parent  constructor
			{
				c = c2;
		        d = d2;
			}
		   void  display()
		   {
				Parent :: display();
				cout << c << "\t" << d << "\n";
		   }
};
main()
{
	Child   x;  //  object  is  initialized  with  four  0's  by   2  constructorss
	Child   y(10,20,30,40); //  object  is  initialized  with  10 , 20 , 30 ,  40  by   2  constructorss
    x . display();  //  0   0    0    0
	y . display();  //  10   20   30   40
}



/*
1) Child  x; 
    a) Child  class  object  is  created  and  Child  class  NAC  is  executed.
    b) Child  class  NAC  inturn  calls  Parent  class  NAC  
	c) Parent  class  NAC  initializes  inherited  members   a  and  b  to  0's.
    d) Child   class  NAC  initializes  new   members  c  and  d  to  0's.

2) Finally  object  'x'  is  initialized  to  four  0's  by  2  constructors

3) Child  y(10 , 20 , 30 , 40);
    a) Child  class  object  is  created  and  Child  class  PC  is  executed
	b) 10 , 20 , 30 , 40  are  sent  to  Child  class  PC.
    c) Child  class  PC   calls  Parent  class  PC  by  Parent(10 , 20)  in   child  class   constructor  header
    d) Parent  PC   initializes  inherited  members  a  and  b  to  10  and  20.
    e) Child   PC  initializes  new   members   c  and  d  to  30  and  40.

4) Finally  object  'y'   is  initialized  to  10 , 20 , 30 , 40   by  2 constructors

5) In  case  of  NAC , Child  class  constructor  automatically  calls  Parent  class  constructor  

6) But  in  case  of  PC ,  programmer  should  call   parent  class  PC   explicitly  by   Parent(10 , 20)  from  child  class  
    constructor  header

7) If  Parent(10 , 20)  is  missing  in  Child  class  constructor  header ,  OS   executes   Parent class NAC   but  not  PC

8) So,  object  'y'   is   initialized  to  0 , 0 , 30 , 40  even  though  10 , 20 , 30 , 40  are  sent  to  child  PC.

9) Therefore, Child  class  PC  must  call  Parent  class  PC  explicitly  by  Parent(10 , 20)
*/
