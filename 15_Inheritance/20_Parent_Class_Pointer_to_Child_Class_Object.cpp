//  Parent  class  pointer  to  child  class  object
class Parent
{
};
class  Child : public  Parent
{
};
class  Gc : public  Child
{
};
main()
{
		Parent  *p = new  Parent;  //  Valid  and  p  points  to  Parent   object 
		p = new  Child; //  Valid  and  p   points  to  Child  object
		p = new  Gc;  //  Valid  and  p   points  to  Gc  object
		Child*   c =  new  Child;  //  Valid  and  c   points  to  Child  object
		c  =  new  Gc; //  Valid  and  c   points  to  Gc  object
		c  =  new  Parent; //  invalid  becoz  child  pointer  can  not  point   to Parent  object
		Gc   *g = new  Gc; //  Valid  and  g   points  to   Gc object
		g = new  Child;  //  Invalid  and  g   can  not   point  to  Child  object
		g = new Parent;  //  Invalid  and  g   can  not   point  to Parent object
}



/*
Parent pointer to Child object
--------------------------------------------------
1) Parent  class  pointer  can  point  to  Child  class  object  but  Child  class  pointer  can   not   point  to  Parent   class  object

2) Parent  pointer   'p'   can  point  to  Parent  object , Child  object  or  Gc  object.
    Child  pointer  'c'   can  point  to  Child  object  or  Gc  object  but  not  to  Parent  object.
    Gc  class  pointer  'g'   can  point  to  Gc  class  object  but  not  to  Parent  object  nor  Child  object

3) A  class  pointer  can  not  point   to   different  class  object.

4) Advantage  of  inheritance  is  that   Parent  pointer  can  point  to  Child  class  object
*/
