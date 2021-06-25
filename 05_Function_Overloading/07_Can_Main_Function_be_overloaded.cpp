// Can main be overloaded? 

#include <iostream>
using  namespace  std;
main()
{
	main(25);
}
main(int  x) // Error  becoz  main  function can not  be overloaded
{
	cout << x << "\n";
}


// Every c++  function  can be overloaded  except  main 
