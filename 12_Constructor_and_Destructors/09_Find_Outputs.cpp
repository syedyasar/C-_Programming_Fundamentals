// Find  outputs
#include <iostream>
using  namespace  std;
class  Test
{
	public:
		Test()
		{
			cout << "object is  created\n";
		}		
		void  f1(Test  b) // NAC  is  not  executed  becoz  'b'  is  parameter  object
		{
			 Test  c; // NAC  is  executed 
		}
};
Test   a;  // NAC  is  executed  for  global   object
main()
{
	Test d , e;  // NAC  is   executed 2   times
	d . f1(e);
}


