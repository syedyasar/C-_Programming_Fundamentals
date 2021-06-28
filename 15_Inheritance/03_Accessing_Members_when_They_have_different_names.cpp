// How  to  access  members  when   they  have  different   names ?
#include <iostream>
using  namespace std;
class  Parent
{
	protected:
			int  x = 10;
};
class  Child : public  Parent  // Data  member  'x' is  inherited
{
	protected:
			int  y = 20;
	public:
			void  disp()
			{
				cout << Parent :: x << "\n"; //  data member  of  Parent class ---> 10
				cout << x  << "\n"; //  data  member  of  Parent  class  becoz  there is  no  local  variable 'x' nor  child  class member 'x'  ---> 10
				cout << this -> x  << "\n"; //  Inherited  member  is  printed becoz  there  is  no  'x'  in same  class  --> 10
				cout << y << "\n"; //  member  of  same  class  ---> 20
				cout << Child :: y << "\n"; // 20
				cout << this -> y  << "\n"; // 20
			}
};

main()
{
	Child  c;
	c . disp();
}




/*
1) Parent  class  contains  data  member   'x'  and  child  class  contains  data   member  'y'.
      
2) Child  class  on  the  whole  contains  2   data  members  x  and  y
      
3) Inherited  member   is  denoted  by   x  and    new  member  is  denoted  by  'y'

4) Parent ::  x  is  not  required  to  access  inherited  member  becoz   there  is  no  name  conflict
*/