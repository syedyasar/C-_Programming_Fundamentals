// How   to  distinguish   members  when   they  have  same name ?
#include <iostream>
using  namespace std;
class  Parent
{
		protected:
			int  x = 10;
};
class  Child : public  Parent  // data member  'x'  is  inherited
{
	protected:
			int  x = 20;
	public:
			void  disp()
			{
				int x = 30;
				cout << x << "\n";  //  Lv  is  printed  ---> 30
				cout << Parent :: x << "\n"; // data member  of  Parent  class   ---> 10
				cout << Child ::  x << "\n"; // data member  of  Child  class   ---> 20
				cout << this ->  x << "\n"; // data member  of  same   class   ---> 20
			}
};

main()
{
	Child    c;  //  object  contains x = 10 and x  = 20
	c . disp();
	cout << sizeof(c) << "\n"; // 4 + 4 = 8B
}




/*
1) Parent  class  contains  data  member   'x'  and  child  class  also  contains  data   member  'x'.
      
2) Child  class  on  the  whole  contains  2   data  members  with  same  name.
      
3) Inherited  member   is  denoted  by   parent :: x  and    new  member  is  denoted  by   Child :: x  (or)  this -> x

4) If  there  is   no   Local  variable  'x' in disp  function , 
    cout << x  ---->  prints    data  member  of   Child  class  ---> 20
*/
