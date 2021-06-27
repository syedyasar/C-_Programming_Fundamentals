//  Find   outputs
#include <iostream>
using  namespace  std;
class  Sample
{
	private:
			float  x;
	public:
			Sample()
			{
				x = 25;
				cout << "NAC\n";
			}
			Sample(float   y)
			{
					x = y;
					cout << "PC\n";
			}
			Sample(Sample&   a)
			{
					x = 1 / a . x;
					cout << "CC\n";
			}
			~Sample()
			{
				cout << "Object  is  lost\n";
			}

			void disp()
			{
					cout << x << "\n";
			}
};
main()
{
		Sample  a , b(25) , c = b;
		a . disp();
		b . disp();
		c . disp();
		a = Sample(35); //  is  same   as   a  =  35  and  class name   Sample    is  optional   due  to  single  parameter
		b = Sample(45); // is  same   as   b  =  45  and  class name   Sample    is  optional   due  to  single  parameter
		c = b;  // No  constructor  is  executed 
		a . disp();
		b . disp();
		c . disp();
} // destrcutor is  executed  3   times  in  the  order  c , b  and  a


/*
1)  sample  b(25);  ---> Object  initialization
     b =  45;  ---> Object  modification

2) Sample  c = b; ---> CC  is   executed 
     c = b;  ---> No  constructor  is  executed

3) a = 35   involves  3  events
     (i)  Name less  object  is  initiialized  with  35  by  PC
	 (ii)  a = 35  becomes  a  = Namelessobject  --> contents  of  Namelessobject   are  copied  to  object  'a'
	 (iii) Nameless object  is  object
*/