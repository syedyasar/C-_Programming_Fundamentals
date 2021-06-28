// public  inheritance 
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
			cout << "f1  function of  Parent  class\n";
		}
		void  f2()
		{
			cout << "f2  function of  Parent  class\n";
		}
};

class  Child : public  Parent
{	
	public:
		void  disp()
		{
			cout <<  c  << "\n";// 
			cout <<  d  << "\n";
		}
};

class  Gc : public  Child
{
	public:
		void  disp()
		{
			cout <<  c  << "\n"; // 30
			cout <<  d  << "\n"; // 40
			f1(); // okay
			f2(); // okay
		}
};

main()
{
		Gc  g;
		g . disp();
		g . f1(); // okay  becoz  it  is  public  function in  Gc  class
		g . f2(); // okay  becoz  it  is  public  function in  Gc  class
}


/*
public   Inheritance
--------------------------------
1) class  Child :  public  Parent
    {
	};

2) Scope  of   parent  class  member   remains  unchanged 
    i.e.  protected   members of  Parent  class   are   continued   to  be   protected  in  child  class ,
    public  members of  Parent  class   are   continued   to  be   public   in  child  class   and  
    private   members of  Parent  class   are   continued   to  be   private    in  child  class  

4) c  and  d  are  protected  in  Child  class and 
    f1  and  f2   are  public  in  Child  class
	a  and  b   are   private  in  Child   class

Advantages
--------------------
1)  Members  which  are  inherited  to  Child  class  can  be  used  by  Gc   class  becoz   they   are  protected  and  
     public  in   Child   class
	Eg : Gc   class  can   use    c , d , f1  and  f2    becoz  they  are   protected  and  public    in  Child  class

2) Functions  which  are  inherited  to  Child  class  can   be  called  from  outside  the   class    becoz  they  are  
    public   in  Child  class
    Eg :  Child  c;
	        c . f1(); ---> Okay
	        c . f2(); ---> Okay

Note :  public  inheritance  is   the   best
*/
