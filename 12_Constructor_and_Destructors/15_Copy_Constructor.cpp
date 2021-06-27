// CC demo  program
#include <iostream>
using  namespace  std;
class  Rat
{
	private:
		int nr = 5 , dr = 8;
	public:
		Rat(Rat&  c)  //  'c'  is  ref  to  object  'a'
		{
			nr = c . dr; // nr = 8
			dr = c . nr; // dr = 5
		}
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
	Rat  b =  a ;  //  contents of  object  'a'  are  copied to  'b'  in  reverse  order by  CC
	b . disp(); // 8 / 5
	Rat  c(b);  //  contents of  object  'b'  are  copied to  'c'  in  reverse  order by  CC
	c . disp(); // 5 / 8
	Rat *p = new  Rat(a);  //  contents of  object  'a'  are  copied to  runtime object   in  reverse  order by  CC
	p -> disp(); // 8 / 5
}
