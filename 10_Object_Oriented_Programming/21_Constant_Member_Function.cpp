// Constant  member  function  demo  program
#include  <iostream>
using  namespace  std;
class   c1  
{
	private:
		int  x  =  10 , y = 20;
	public:
		void change(c1&   c)    const
		{
			c . x += 5;
			c . y += 7;
//			x += 6;
//			y += 8;
		}
		void  disp()
		{
			cout << "x : " << x << "\n";
			cout << "y : " << y << "\n";
		}
};
main()
{
	c1 a , b;
	a . change(b);		
	cout << "Object   a\n";
	a . disp();		
	cout << "Object   b\n";
	b . disp();		
}


/*

Constant  Member  Function (CMF)
---------------------------------------------------------
1) It  can  not  modify  contents  of  owner  object  but  parameter object  can  be modified

2) a . change(b);  --->  change  funcction  can  not  modify  contents  of  object  'a'  but  it  can  modify  contents 
                                   of object 'b'  thru  reference

3) Object 'a'  is  read-only  object  in CMF.  Thus  owner  object  is  protected  from  modification in CMF

4) const  keyword  is  necessary  in  MF  header

5) disp  function  can  CMF  but  not  get  function becoz  get  function is  reading inputs into  owner object

*/


