// private  constructor
#include <iostream>
using  namespace  std;
class  c1
{
	private:
			c1()
			{
			}
	public:
			void  f1();
};
class  c2
{
	public:
			c2()
			{
			}
			void  f1()
			{
					//c1  obj1; //  Error  becoz  c2  can  not  call  private  constructor  of  c1
					c2  obj2; // okay  becoz  same  class   can  call  public  constructor
			}
};
void   c1 :: f1()
{
		c1  obj1;  // okay  becoz  class  c1  can  call  private  constructor  of  c1
		c2  obj2;  // okay  becoz class  c1  can  call  public  constructor of  class  c2
}
main()
{
		//c1  obj1; //  Error  becoz  NMF   can  not  call  private  constructor  of  c1
		c2  obj2;  // okay  becoz  NMF  can  call  public  constructor of  class  c2
}

/*
Private  Constructor
---------------------------------
1) If  a  class  contains  private  constructor,  object  can  be  instantiated(i.e.  created)  only  inside  the  same 
    class   but  not    in  other    classes and  non-member  functions

2) This  is  because    a    class  can  not  call  private  constructor  of  a  different  class

3) Similarly, NMF  can  not  call  private constructor  
    
4) However  a  class  can  call  private  constructor  of  same  class.

5) If  a  class  contains  public  constructor,  object  can  be  instantiated(i.e.  created)  by    every  class  and  
    function

6) This  is  because  a  class  can    call  public    constructor  of  a  different  class.

7) Similarly, NMF  can   call  pubic  constructor   of  a  class

8) Advantage  of  public  constructor   is   that   every  class    and   function   can  create  class  object

9) Therefore  usage  of  private  constructor  must  be  discouraged
*/
