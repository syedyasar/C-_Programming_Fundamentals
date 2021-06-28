// Find outputs
#include <iostream>
using  namespace  std;

void  f3()
{
		cout << "NMF\n";
}

class c1
{
	public:
		void  f1()
		{
			cout << "f1  function  of  class  c1\n";
		}
};

class c2
{
	public:
		void  f1()
		{
			cout << "f1  function  of  class  c2\n";
		}
};

class c3
{
	public:
		static  void f1()
		{
			cout << "f1  function  of  class  c3\n";
		}
};

class c4 :  public  c1 
{
	public:
		void  f1()
		{
			cout << "f1  function  of  class  c4\n";
		}
		void  f2()
		{
			f1();
			c1 :: f1();
			c2    b;
			b . f1();
			c3 :: f1();
			f3();
	    }
};


main()
{
		c4    a;
		a . f2();
}

// main calls  f2  function  and  f2  inturn  calls  5  different   functions

/*
1) How  to  call  function  of  same  class ?  ----->  function();

2) How to call function of  parent class from child class ?  ---> parent :: function();

3) How to call function of some other class ? ----->   object . function();

4) How to call static function of some other class ---->  classname ::  function();

5) How  to  call  NMF ?   ---->  function();

6) OS  searches  for  function  in  what  order ?
    a) Same  class  function  has  highest  priority
	b) Parent class  function  has  next  highest  priority
	c) NMF has  lowest  priority

7) NMF   can  not  be  called  when   function  with  same  name  exists  in  the  class
*/