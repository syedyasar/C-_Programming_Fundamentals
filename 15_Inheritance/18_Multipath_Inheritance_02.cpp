// Multipath  inheritance  demo  program
#include <iostream>
using  namespace  std;
class  c1
{
	public:
			void  f1()
			{
				 cout << "f1  function  of  class  c1\n";
			}
};
class  c2 : public   virtual   c1
{
	public:
			void  f2()
			{
				 cout << "f2  function  of  class  c2\n";
			}
};	
class  c3 : public  virtual  c1
{
	public:
			void  f3()
			{
				 cout << "f3  function  of  class  c3\n";
			}
};	
class  c4 : public  c2, public  c3
{
	public:
			void  f4()
			{
				 cout << "f4  function  of  class  c4\n";
			}
			void  disp()
			{
					f1(); //  f1  function  of  class  c1  is   executed
					f2(); //  f2  function  of  class  c2  is   executed
					f3(); //  f3  function  of  class  c3  is   executed
					f4(); //  same  class  function  is  executed
			}
};	

main()
{
	c4  obj;
	obj . disp();
}


/*
1) If  c1   is  not  VBC,  f1   function  is  inherited to  class  c4   2  times

2) f1()  in  class   c4  leads  to   ambiguity   error
*/
