//  Identify  Error
#include <iostream>
using  namespace  std;
class  c1
{
	public:
		c1(c1&  a)
		{
			cout << "CC\n";
		}
//		c1(c  a)  //  Error  becoz  &  is  mandatory  as  it  is  treated  as   CC
//		{
//		}
};
main()
{
}
