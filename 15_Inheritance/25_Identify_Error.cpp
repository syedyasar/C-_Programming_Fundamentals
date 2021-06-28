// Identify  error  in  the  program
#include <iostream>
using  namespace  std;
class  Parent
{
	public:
		Parent(int x)
		{
		}
};

class  Child : public Parent
{
};

main()
{
		Child   c; //  Error
}

/*
1)  Since  there   is  no   constructor  in  Child   class,  C++   compiler  adds   empty  NAC   to   Child   class

2) Child   c;   executes   Child  classs  NAC

3) OS  executes  Parent  class  NAC  before  execution  of  Child   class  NAC

4)  Error  becoz  there   is  no   NAC  in  Parent  class

5) When  class contains PC  or  CC ,  It  is  better  to  define  NAC   also,  at  least  Empty  NAC
*/
