//  Identify  error
#include <iostream>
using  namespace  std;
class  c1
{
	public:
		c1()
		{
		}
};
class   c2
{
	friend  c1();  // Error  becoz  constructor  can  not  be  friend  to  any  class
};
main()
{
}
