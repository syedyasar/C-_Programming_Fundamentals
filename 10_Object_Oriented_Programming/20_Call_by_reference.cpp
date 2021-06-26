// Call-By-Reference   demo  program
#include  <iostream>
using  namespace  std;
class   c1
{
	private:
		int  x  =  10 , y = 20;
	public:
		void change(c1 &  c)
		{
			c . x += 5;
			c . y += 7;
			x += 6;
			y += 8;
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
Call-By-Reference
------------------------------
1) Sending  object  to  a  function is  known as  CBR

2) a . change(b);  --->  object  'b'  is   sent  to  change  function

3) Formal  parameter  is  reference
    Eg: void  c1 :: change(c1&   c)  ---> 'c'   is   reference  to   main  function    object  'b' 
	{
    }
	
4) change  function  can  modify   contents  of  object  'b'  through  reference   'c'

5) In otherwords,  modifying  object  'c'   in   change  function  is  as  good  as  modifying   actual  parameter  object  'b'

Note: Member  function  can  modify   contents of  owner  object  directly  and  changes  are  automatically   visible
          to  calling  function  without  return  *this;
*/