// Destructor  demo  program
#include <iostream>
using   namespace  std;
class  Test
{
	public:
		~Test()  // It  is  destructor
		{
			cout << "object  is  lost\n";
		}
};
main()
{
	Test  a , b , c;
	Test*  p  = new  Test;
	delete  p; // destructor  is   executed  before  deletion  of   run time  object
	cout << "Bye\n";
	a . ~Test(); // calling  destructor  explicitly  and  object  is  not  lost  after  execution  of  destructor
}  // destrutcor  is  executed  3  times  in  the  order   c , b  and  a




/*
1)  Objects  are  lost  in  the reverse order of  creation i.e. Last  object  is  first  lost

2)  If  runtime  object  is  not  deleted, it   remains  in   memory  and  is  not  lost

3) Therefore  destructor  is   not  executed  for   runtime  object  after  program   terminates
*/
