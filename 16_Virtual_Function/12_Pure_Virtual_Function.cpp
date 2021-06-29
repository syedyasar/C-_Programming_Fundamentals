// pure  virtual  function  
#include <iostream>
using  namespace  std;
class  Parent 
{
	public:
		virtual  void   f1() = 0; 
};
class  Child :  public  Parent 
{
};
class  Gc :  public  Child
{
	void  f1() //  It  is   automatically   virtual   function
	{
		cout << "Function  is  implemented  by  Grand child  class\n";
	}
};

main()
{
	Parent*   p = new  Gc;
	p -> f1(); // Gc   function  is  executed  becoz  'p'  points  to  Gc  object
	//Parent   a;  //  Error  becoz  Parent  class   contains  PVF
	//Child  b; //  Error  becoz  Child  class  contains  inherited  PVF
}

