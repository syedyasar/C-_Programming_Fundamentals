// Find  outputs
#include <iostream>
using  namespace  std;
class  Rat
{
	private:
		int  nr , dr ;
	public:
		Rat()
		{
			cout << "object is  created\n";
		}
};
main()
{
	Rat  a[5];  // NAC  is  executed  5  times  becoz  it  is   array  of  5  objects
}


// Each   object  contains  garbage  values  becoz nr  and  dr  are  not  initialized by  constructor