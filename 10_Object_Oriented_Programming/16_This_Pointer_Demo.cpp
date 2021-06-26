// this  pointer  demo  program
#include <iostream>
using  namespace  std;
class  c1
{
	private:
		int x = 25;
	public:
		void  f1()
		{
			cout << x << "\n"; //  25
			cout << this -> x << "\n";	 // 25
			cout << (*this) . x << "\n"; // 25		
			//cout << a . x << "\n"; // Error  becoz   f1   function can  not  use  object   name  'a'  directly
			//this++;  // Error  becoz  it  is  a  constant pointer
		}  //  this  pointer  is  lost
};
main()
{
	c1   a; // object  contains  x  = 25
	a . f1();  //  this  points  to  object  'a'
	//cout << this;  //  Error  becoz  NMF  such  as  main  can  not  use  this  pointer
}				