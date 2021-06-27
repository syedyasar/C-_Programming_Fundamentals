// Name less  object  (or)  Anonymous  object 
#include <iostream>
using  namespace  std;
class  Test
{
	private:
			int x , y;
	public:
			Test()
			{
				x = y = 0;
				cout << "NAC\n";
			}
			Test(int  x1 , int  y1)
			{
					x = x1;
					y = y1;
					cout << "PC\n";
			}
			~Test()
			{
				cout << "Object  is  lost\n";
			}

			void disp()
			{
					cout << x << "\t" << y << "\n";
			}
};
main()
{
		Test  a; // object  'a'   is  initialized  with  x = 0  and y = 0  by  NAC
		Test();  //  Name less  object    is  initialized  with  x = 0  and y = 0  by  NAC  and  lost  before  control   goes  to  next  stmt
		Test  b(10 , 20);  // object  'b'   is  initialized  with  x = 10  and y = 20  by  PC
		Test(30 , 40); //  Name less  object    is  initialized  with  x = 30  and y = 40  by   PC  and  lost  before  control   goes  to  next  stmt
		a . disp();  // 0   0
		b . disp(); //  10   20
}  // destructor  is   executed  2  times  in  the  order   'b'  and   'a'


/*
Name  Less  Object  (or)  Anonymous  Object
---------------------------------------------------------------------------
1) It is  created  and  lost  before  control  goes  to  next  statement

2) It  has no  life

3) It is not visible  to  rest  of  the  function

4) Syntax 1 :  classname();
    Syntax 2 :  classname(values);

5) Test(); ---->  involves 2  operations  
    a) Name  less object  is  created  and  is  initialized with 0  and  0  by NAC
	b) Destructor  is  executed   and    Name  less object  is  lost  before  control  goes   to  next  statement

6) Test(30 , 40); ---->  involves 2  operations  
    a) Name  less object  is  created  and  is  initialized with  30  and  40  by  PC
	b) Destructor  is  executed   and    Name  less object  is  lost  before  control  goes   to  next  statement	

7) classname(values);  ---> classname is  mandatory  when  there  is  more than  one  value  and   optional  when
                                            there  is  single  value
*/