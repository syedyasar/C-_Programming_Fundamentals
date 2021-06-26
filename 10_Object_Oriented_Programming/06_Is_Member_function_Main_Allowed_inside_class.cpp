//  Is  MF  main  allowed  in  the  class  ?
#include  <iostream>
using  namespace  std;
class   c1
{
	public:
		main()
		{
			cout << "main  function\n";
		}
};
main()
{
	cout << "NMF  main\n";
	c1  a;
	a . main();
}	

/*
1) MF  main  is  allowed  in  the  class

2) OS  calls  NMF   main  as  soon  as  program  but  not  MF  main

3) MF  main  must  be  called explicitly  by  programmer
*/