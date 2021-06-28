// Multipath  inheritance  demo  program
#include <iostream>
using  namespace  std;
class  c1
{
	protected:
		int  a = 10 , b = 20;
};
class  c2 : public   virtual   c1
{
	protected:
		int  c = 30 , d = 40;
};	
class  c3 : public   virtual  c1
{
	protected:
		int  e = 50 , f = 60;
};	
class  c4 : public   c2, public   c3
{
	protected:
		int  g = 70 , h = 80;
	public:
		void  disp()
		{
			cout << a << "\n"; //  10
			cout << b << "\n"; //  20
			cout << c << "\n"; // 30
			cout << d << "\n"; // 40
			cout << e << "\n"; // 50
			cout << f << "\n"; //  60
			cout << g << "\n"; //  70
			cout << h << "\n"; // 80
		}
};	

main()
{
	c4  obj; // object  is  created  with  8 members  a , b , c , d , e , f , g , h 
	obj . disp();
}


/*
1) If  there  is  more  than one  path   between   classses,  it  is  known  as  multipath inheritance

2) There  is  more  than  one  path  between  classes  c1  and  c4

3) class  c1   contains   'a'  and  'b' , 
    class  c2   contains   a , b , c  and  d,
    class  c3   contains   a , b , e  and  f,
    class  c4   contains   a , b , c ,  d ,  a ,  b  ,  e , f , g , h

4) Members   of   class   c1   are  inherited  to   class  c4  twice
    i.e.  Data   members   a  and  b  are  inherited   to  class   c4  twice

5) Ambiguity  error   when   class   c4   uses   'a'  and   'b'   becoz   there   are  2  a's  and  b's

6) Virtual  Base  Class   is  used   to  over come  this  problem

Virtual  Base  Class(VBC)
------------------------------------------
1) Members  of  VBC   are   inherited   only  once   irrespective  of  number  of  paths  between   classes

2) c1  is  VBC   becoz   there   is  more  than  one  path  between  classes  c1  and  c4

3) Members  of  class  c1   are  inherited   only   once  becoz   it  is  VBC

4) class  c4  contains   a , b , c , d, e , f , g , h

5) virtual  is  a  keyword  and  is  used   at  the  time  of   deriving  the  class

*/


