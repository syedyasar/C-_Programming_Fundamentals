// MF  main  can  be  overloaded
#include <iostream>
using  namespace  std;
class  Test
{
	public:
		void  main()
		{
			cout << "main  function without  arguments \n";
		}
		void  main(int  x)
		{
			cout << "main  function  with  int  argument :  " << x  << "\n";
		}
		void  main(float  x)
		{
			cout << "main  function  with  float  argument :  " << x  << "\n";
		}
		void  main(char  x)
		{
			cout << "main  function  with  char  argument :  " << x  << "\n";
		}
		void  main(string  x)
		{
			cout << "main  function  with  string argument :  " << x  << "\n";
		}
		void  main(int   a[])
		{
			cout << "main  function  with   int  array   argument :  " << "\n";
			for(int  i = 0 ; i <= 3 ; i++)
					cout << a[i] << "\n";
		}
};
main()
{
		Test  t;
		t . main();
		t . main(25);
		t . main(10.8f);
		t . main('g');
		t . main("Hyd");
		int  a[] = {10 , 20 , 15 , 18};
		t . main(a);
}

// NMF  main  can  not  be overloaded  but  MF  main  can  be  overloaded