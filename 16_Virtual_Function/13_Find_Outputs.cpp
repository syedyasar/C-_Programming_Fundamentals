// Find outputs
#include <iostream>
using  namespace  std;
class  Parent
{
	public:
		virtual  void  f1() = 0;
		virtual  void  f2() = 0;
		virtual  void  f3() = 0;
};
class  Child  : public  Parent
{
	public:
		void f1()
		{
			cout << "Function  f1   is implemented by child class\n";
		}
};
class  Gc  : public  Child
{
	public:
		void f2()
		{
			cout << "Function  f2   is implemented by  Gc class\n";
		}
};
class  Ggc  : public  Gc
{
	public:
		void f3()
		{
			cout << "Function  f3   is implemented by  Ggc  class\n";
		}
};
main()
{
	Parent  *p = new  Ggc();
	p -> f1(); //  Inherited  Ggc   function  is   executed  becoz  p  points  to  Ggc  object
	p -> f2(); //  Inherited  Ggc   function  is   executed  becoz  p  points  to  Ggc  object
	p -> f3();  //  Ggc   function  is   executed  becoz  p  points  to  Ggc  object
	//Parent   a;  //  Error   becoz   there  are   3    PVF's  in  Parent  class
	//Child  b; //  Error   becoz   there  are   2    PVF's  in  Child  class
	//Gc  c; //  Error   becoz   there  is    PVF   f3    in    Gc  class
}
