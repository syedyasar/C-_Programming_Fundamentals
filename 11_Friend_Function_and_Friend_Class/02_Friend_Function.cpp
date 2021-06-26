
// friend  function  demo  program
#include <iostream>
using namespace std;
class  c1
{	
		int x = 10 , y = 20;
		friend  int  main(); //  main  function  is  friend  to  class  c1
};
main()
{
	c1  a;
	cout << a . x << "\n";	
	cout << a . y << "\n";	
}

