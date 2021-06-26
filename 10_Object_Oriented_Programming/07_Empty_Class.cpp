// Empty  class  demo   program
#include  <iostream>
using  namespace  std;
class   c1 // Empty  class  becoz  there are  no data  members
{
	public:
		void  f1()
		{
				cout << "f1  function\n";
		}
		void  f2()
		{
				cout << "f2  function\n";
		}
};
main()
{
		c1  a;
		a . f1();
		a . f2();
		cout << sizeof(a)  << "\n";  // size  of  empty  class  object  is  1B  but  not  0B
}


/*
Empty  class
---------------------
1) If  there  are  no  data  members  in  a  class,  it  is  called  empty  class.

2) Empty  class  may  contain  functions  but  not  data  members
*/