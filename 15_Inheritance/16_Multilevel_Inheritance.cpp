// Multilevel inheritance demo program
#include  <iostream>
using  namespace  std;
class Parent
{
	public:
		void  f1()
		{
			cout << "Parent  class  function\n";
		}
};
class  Child : public  Parent
{

	public:
		void  f1()
		{
			cout << "Child  class  function\n";
		}
};
class  Gc :  public  Child 
{
	public:
		void  f1()
		{
			cout << "Gc  class  function\n";
		}

};
class  Ggc : public  Gc 
{
	public:
		void  f1()
		{
			cout << "Ggc  class  function\n";
		}

		void  f2()
		{
			f1();
			Gc :: f1();
			Child :: f1();
			Parent :: f1();
		}
};
main()
{
	Ggc  g;
	g . f2(); 
}
