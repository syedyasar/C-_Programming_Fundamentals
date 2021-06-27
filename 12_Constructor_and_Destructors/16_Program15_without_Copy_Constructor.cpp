// same  program  without  cc
#include <iostream>
using  namespace  std;
class  Rat
{
	private:
		int nr = 5 , dr = 8;
	public:
		void  disp()
		{
			cout << nr << "/" << dr << "\n";
		}
		Rat()
		{
		}
};
main()
{
	Rat  a; // object  'a' contains  5  and  8  becoz  NAC  is   empty
	a . disp(); //  5 / 8
	Rat  b =  a ;  //  contents of  object  'a'  are  copied to  'b' 
	b . disp(); //  5 / 8
	Rat  c(b);  //  contents of  object  'b'  are  copied to  'c'  
	c . disp(); // 5 / 8
	Rat *p = new  Rat(a);  //  contents of  object  'a'  are  copied to  runtime object 
	p -> disp(); //  5 / 8
}
