// Find outputs
#include <iostream>
using  namespace  std;
class  Test
{
	public:
		void  f1()
		{
			cout << this  << "\n";  //  Address  of  object  't'
		}
		static  void  f2()
		{
			//cout << this  << "\n"; //  Error  becoz  static  function  can  never   this  pointer
		}
};
main()
{
	Test ::  f2();
	Test  t;
	t . f1();
	t . f2();
}


/*
1)  cout  << variable;   ----> Ok

2)  cout  <<  member;   ----> Ok

3) cout  <<  object;  --->  Error
*/