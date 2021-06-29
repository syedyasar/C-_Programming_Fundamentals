// pure  virtual  function  
#include <iostream>
using  namespace  std;

class  Parent 
{
	public:
		    virtual  void   f1() = 0;
};

class  Child :  public  Parent 
{
	public:
		void  f1()  
		{
			cout << "Implementation  function\n";
		}
};

main()
{
	Parent*   p  = new  Child;  
	p -> f1(); 
	//Parent   x;
}




/*
Pure  Virtual   Function(PVF)
-----------------------------------------------
1) It  can  not  have  body
    Eg:   virtual  void  f1() = 0;  --->  Error  becoz   { } are not allowed
            {
            }

2) =  0  means  that   f1   is  PVF

3) virtual  is  a  keyword

4) When  parent  class  does  not  know  how  to  implement  a   function , write  PVF  in   parent   class
    and  leave  the  implementation  to  child  class

5) Now ,  it  is  the  reponsibility  of  child  class  to  provide  implementation  to  PVF
     i.e.  Every  PVF   must  be  implemented  by  child  class

6) It  leads  to  error  when  child  class  does  not  implement  PVF   of  parent  class
    i.e. At  least  empty  function  is  required  in  child  class  in  case  child  class  does  not  wish  to  implement

7) class  is  abstract when the class contains PVF's

8) PVF  is not inherited to child class   when  child class implements the function
    In other words,  PVF  is inherited to child  class only when child class does not implement the   function

9)  parent  pointer  -> child function() ---->  To call child function through  parent pointer, same function must  be
																	  present  in parent class, either  VF   or   PVF
     Eg:  parent*   p = new  child;
            p -> f1();  ----> child function is executed provided parent class contains  f1 function.

10) It leads to error when same function does not exist in parent class
      Eg:  parent*  p = new  child;
             p -> f1() ---->  leads to compile time error when there is no  f1 function in parent class.
                                  This is because compiler searches for  f1 function in parent class  becoz type  of p is parent

11) In  general , if  child  class  contains  f1  function , Parent  class  also  must  contain f1 function, either
      VF  or  PVF  otherwise child function  f1  can not be  called thru parent pointer


abstract  class
------------------------
1) class c1
    {
          virtual  void  f1() = 0; 
    };

2) If a class contains  at  least  one  PVF,  it is called abstract class.

3) abstract class object can not be instantiated(i.e. created) becoz  it is not a fully defined class
    i.e.  PVF's  of the class are not defined
    Eg:  new   parent  leads to error when parent class is abstract
     
4) abstract class pointer  can be created but not object
     Eg:  parent*   p; ---> it is okay

5) Every abstract class must have child class becoz  PVF's  of   parent class   are   implemented  by child class

6) If child class  does not implement  PVF's  of parent class,  they are  inherited to child class  and  hence  
    child class  is  also  called   abstract.

7) Now, it is responsibility of  grand child class to implement  those  PVF's

8) Now, grand child object can be instantiated but not parent and child objects becoz they are abstrcat



					   Virtual   function												Pure   virtual   function
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
1) virtual  void  f1()													1) virtual   void  f1() = 0;
     {
     }

2) It must have body,  at least { }         				    2) It can not have body,  not even { and }

3) child class can override  VF  of						    3) child  class  must  implement  PVF  of  parent  class
     parent class															
*/
