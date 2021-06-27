// Find  outputs
#include <iostream>
#include <string.h>
using  namespace  std;
class  String
{
	private:
		char*  s;
		int  l;
	public:
		String(String&  c) // c  is  ref  to  object   'a'
		{
			l = c . l;
			s = new char[l + 1]; //  b . s  points   a  new  array  of  size  l+1
			strcpy(s , c . s);  // string  is  copied  from  array  c.s  to  b.s
		}
		void  disp()
		{
			cout << "String : " << s << "\n";
			cout << "Length  : " << l << "\n";
		}
		String()
		{
			s = new  char[9];
			strcpy(s , "Rama Rao");
			l = strlen(s);
		}
};
main()
{
	String  a; // object  is  initialized  with  s = "Rama Rao"  and l = 8 by  NAC
	a . disp();
	String  b  = a; // string held  by  object  'a'  is  copied  to  object  'b'  by  CC
	b . disp();
}


/*
CC
-----
1) class      c1
    {
           public:
					c1(c1&    a)      ---->  It  is  CC
					{
					}
    };


2) There  are  3  rules  to  CC
     a) It  can  have  only  one  parameter
     b) Parameter  type  must  be    same  as  classname.
     c)  It  must  be  reference  parameter  but  not  object  parameter

3) Class  can  contain  at  most  one    CC  i.e  one  or  none

4) CC  can  not  be  overloaded.

5) If  there  are  2  CC's  in  a  class,  they  will  have  same  name  and   signature  which  is  not    permitted.

6) a) classname  obj1(obj2);  --> Resources  held  by  obj2  are  copied  to  obj1  by  CC
    b) classname  obj1 = obj2;   --> Resources  held  by  obj2  are  copied  to  obj1  by  CC
    c) new  classname(obj2)  --> Resources  held  by  obj2  are  copied  to  runtime object  by  CC
   

*/
