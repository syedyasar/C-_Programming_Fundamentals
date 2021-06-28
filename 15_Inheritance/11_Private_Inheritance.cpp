// private  inheritance 
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
		}
		void  f2()
		{
		}
};



class  Child : private  Parent  //   a , b , c , d , f1  and  f2   become    private  in Child  class
{	
	public:
		void  disp()
		{
			cout <<  c  << "\n"; // 30
			cout <<  d  << "\n"; // 40
		}
};

class  Gc : private  Child
{
	public:
		void  disp()
		{
			//cout <<   c  << "\n";  // Error  Gc   class  can  not  use  private members  of  Child  class
			//cout <<  d  << "\n"; // Error  Gc   class  can  not  use  private members  of  Child  class
			//f1(); //  Error  becoz  it   is  private  in  Child  class
			//f2(); //  Error  becoz  it   is  private  in  Child  class
		}
};

main()
{
		Child  c; //  object  is  created  with a = 10 , b = 20 , c = 30  and  d  =  40
		c . disp();
		//c . f1();  //  Error  becoz  it  is  private  in  Child  class
		//c . f2();   //  Error  becoz  it  is  private  in  Child  class
}


/*
private  Inheritance
--------------------------------
1) class  Child :  private  Parent
    {
	};

2) All   members of  Parent  class  become  private  members  of   child  class

3) a, b ,  c , d , f1  and  f2  of  Parent  class  become  private  members  in  Child  class 

Disadvantages
------------------------
1) Members  which   are  inherited   to  Child  class  can  not  be   used  by   Gc   class.
    Eg :  Gc  can  not   use   a , b ,  c , d , f1  and  f2   becoz  they  are  private  in   Child  class

2) Functions  which  are  inherited  to  Child  class  can  not  be  called  from  outside  the  class   becoz  they  are  
    private  in  Child  class
	Eg :  Child  c;
	        c . f1(); ---> Error
			c . f2(); ---> Error
*/
