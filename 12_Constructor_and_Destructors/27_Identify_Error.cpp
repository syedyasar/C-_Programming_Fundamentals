// identify  error
#include <iostream>
using   namespace  std;
class  Test
{
	public:
		~Test()
		{
		}
		~Test()  //  Error  becoz  destructor  can  not  be  overloaded
		{
		}
};
main()
{
}
