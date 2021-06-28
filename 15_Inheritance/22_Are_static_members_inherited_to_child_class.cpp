// Are static members inherited to child class ?  
#include  <iostream>
using   namespace  std;
class  Parent
{
	protected:
		int  a = 10;
		static  int  b;
	public:
		  void  f1()
		  {
			cout << "Non  static  function\n";
		  }
		  static void  f2()
		  {
			cout <<  "static  function\n";
		  }
};
int  Parent :: b = 20; // Memory  allocation  to  static  member  'b'
class  Child  :  public   Parent  // 'a' , 'b' , f1()  and  f2()  are  inherited
{
	public:
		 void  f3()
		 {
			cout <<  a << "\n"; //  10
			cout <<  b << "\n"; // 20
			f1(); 
			f2();
		  }
};
main()
{
	Child  c; // object  is   created  with  member  a = 10
	cout << sizeof(c) << "\n";  //  4
	c . f3();
}



/*
1) Since  there  are  no  data  members  'a'  and  'b'  in  child  class , inherited data  members are printed

2) Similarly, inherited  functions  are  executed  becoz  there  are  no  f1  and  f2  functions  in child  class
*/
