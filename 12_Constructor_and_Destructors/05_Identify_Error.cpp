//  Identify  error
#include <iostream>
using  namespace  std;
class  Rat
{
	private:
		Rat()
		{
		}
};
main()
{
	Rat  a;  //   Error  becoz  main   can  not  call   private  constructor
}
