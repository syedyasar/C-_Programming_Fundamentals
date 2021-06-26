
// friend  class  demo  program
#include <iostream>
using namespace std;
class  c1
{
		int x = 10 , y = 20;
		friend class  c2;  // c2  is  a  friend  class  to  class  c1
};				
class  c2
{
		public:
				void   f1();
				void   f2();
};
void c2 :: f1()
{	
		c1  obj1;
		cout << "x : " << obj1 . x << "\n";  //  10
		cout << "y : " << obj1 . y << "\n";  //  20
} // obj1  is  lost
void c2 :: f2()
{	
		c1  obj1;
		cout << "x : " << obj1 . x << "\n"; //  10
		cout << "y : " << obj1 . y << "\n"; //  20
} // obj1  is  lost
main()
{
	c2  obj2;
	obj2 .  f1();
	obj2 .  f2();
}


/*
friend   class
--------------------
1) private  members  of  class  c1  can  be used by  a  different  class   c2   becoz   c2  is  a   friend  class  to   c1

2)  All  the   functions  of  class   c2    can  use  private  members   of  class  c1

3) friend  function  is  a  bad  programming  but  not   friend  class

4) c2  is  friend  to   class  c1  but  not  vice-versa
    
5) Functions  of  class c1  can  not  use  private  members  of  class c2 

6)  Let   f3  be   a  friend   function   to  class  c2  and  c2  is  a  friend  class  to  c1,  it  does  not  imply   that
     f3  is  a  friend  function  to  class  c1
*/


