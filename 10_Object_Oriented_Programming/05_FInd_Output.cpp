#include <iostream>
using  namespace  std;
class  c1
{
	public:
		void  f1()
		{
			cout << "MF   f1   is  defined  inside  the class\n";
		}
		void  f2();
};
void  c1  ::  f2()  //  f2  is   a  function of  class  c1
{
		cout << "MF   f2   is  defined  outside  the class\n";
}


void   f3()
{
		cout << "NMF  f3 must be    defined  outside   the class  only\n";
}
main()
{
	c1  obj1;
	obj1 . f1();
	obj1 . f2();
	f3();
}

