
// NAC  or  DC  demo  program
#include <iostream>
using  namespace  std;
class  Rat
{
	private:
		int nr = 5, dr = 8;
	public:
		Rat() //  It   is  NAC  (or)  DC
		{
			nr = 22;
			dr = 7;
			cout << "NAC\n";
		}
		void  disp()
		{
			cout << nr << "/" << dr << "\n";
		}
};
main()
{
	Rat  a;  //  object   'a'   is  initialized  with nr = 22  and  dr  =  7   by   NAC  
	a . disp();
	Rat *p = new  Rat; //  Runtime  object     is  initialized  with nr = 22  and  dr  =  7   by   NAC  
	p -> disp();  //  is   same  as  (*p) . disp()
	//a . Rat();  //  Error  becoz  constructor  can  not  be  called
	//a . Rat :: Rat();   //  Error  becoz  constructor  can  not  be  called
}


