#include <iostream>
using  namespace  std;
class  c1
{
	public:
		void  f1()
		{
			cout << "f1  function  of  class c1\n";
		}
};
class  c2
{
	public:
		void  f1()
		{
			cout << "f1  function  of  class c2\n";
		}
};
void  f1()
{
	cout << "Non-member  function   f1  \n";
}

main()
{
	c1   obj1;
	c2   obj2;
	obj1 .  f1();
	obj2 .  f1();
	f1();
}

