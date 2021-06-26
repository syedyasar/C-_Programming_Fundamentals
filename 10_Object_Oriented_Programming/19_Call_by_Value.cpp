// Call-By-Value  demo  program
#include  <iostream>
using  namespace  std;
class   c1
{
	private:
		int  x  =  10 , y = 20;
	public:
		void change(c1  c)
		{
			c . x += 5;
			c . y += 7;
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
Call-By-Value
----------------------
1) Sending  contents  of  object  to  a  function is  known as  CBV

2) a . change(b);  ---> Contents  of  object  'b'  are  sent  to  change  function

3) Formal  parameter  is  object
    Eg: void  c1 :: change(c1  c)  ---> Contents  of  object  'b'  are  copied  to  object  'c'
	{
    }
	
4) change  function  can  not  modify   contents  of  object  'b'

5) In otherwords,  change  function  can modify  contents  of  format  parameter  object  'c'  but  changes  are  not  
    reflected  to  actual  parameter  object  'b'

6) Thus  object  'b'  remains  unchanged  even  after  execution  of  change  function
*/
