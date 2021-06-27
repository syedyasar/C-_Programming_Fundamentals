// Find   output
#include <iostream>
using  namespace  std;
class  Rat
{
	private:
		Rat()
		{
			cout << "NAC\n";
		}
		friend   int   main();
};
main()
{
	Rat  a;  // main  can  call  private  constructor  becoz  main  is   friend  function  to   class  Rat
}
