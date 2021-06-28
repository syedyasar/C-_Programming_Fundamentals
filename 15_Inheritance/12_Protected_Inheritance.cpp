// protetced  inheritance 
#include <iostream>
using  namespace  std;
class  Parent
{
	private:
		int  a = 10 , b = 20;
	protected:
		int c = 30 , d = 40;
	public:
		void  f1()
		{
			cout << "f1  function  of  Parent  class\n";
		}
		void  f2()
		{
			cout << "f2  function  of  Parent  class\n";
		}
};

class  Child : protected  Parent //  Scope  of  c , d , f1  and f2  is  protected  and  a and b   are  private
{	
	public:
		void  disp()
		{
			cout <<  c  << "\n";
			cout <<  d  << "\n";
		}
};

class  Gc : protected  Child //   //  Scope  of  c , d , f1  and f2  is  protected  and  a and b   are  private
{
	public:
		void  disp()
		{
			cout <<  c  << "\n";  //  30
			cout <<  d  << "\n"; // 40
			f1(); // okay
			f2(); // okay
		}
};

main()
{
		Gc  g; // object  is  created with a , b , c  and  d
		cout <<  sizeof(g) << "\n"; // 16B
		g . disp();
		//g . f1();  //  Error  becoz  they  are  protected  in  Gc  class
		//g . f2();
}


/*
protected  Inheritance
--------------------------------
1) class  Child :  protected  Parent
    {
	};

2) protected  and  public  members of  Parent  class  become  protected  members  of   child  class

3) private  members of  Parent  class  remains  unchanged 

4) c , d , f1  and  f2  of  Parent  class  become  protected  members  in  Child  class 
    a , b  are  private  in  Child   class

Advantage
------------------
Members  which  are  inherited  to  Child  class  can  be  used  by  Gc   class  becoz   they   are  protected  in
Child   class
Eg : Gc   class  can   use    c , d , f1  and  f2    becoz  they  are   protected  in  Child  class

Disadvantage
-----------------------
Functions  which  are  inherited  to  Child  class  can  not  be  called  from  outside  the   class   becoz  they  are  
protected   in  Child  class
Eg :  Child  c;
	    c . f1(); ---> Error
	    c . f2(); ---> Error
*/
