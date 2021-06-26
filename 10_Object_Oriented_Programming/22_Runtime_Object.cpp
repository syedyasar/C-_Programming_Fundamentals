// Runtime object
#include <iostream>
using  namespace std;
#pragma  pack (1) //  This is  used  to  avoid  padding 
class  c1
{
	private:
			int  x = 25;
			float y = 10.8;
			char ch = 'g';
	public:
			void  disp()
			{
				cout << "x : " << x << "\n";
				cout << "y : " << y << "\n";
				cout << "ch : " << ch << "\n";
			}
};

main()
{
		c1*   p = new  c1; // p  points  to   runtime  object
		p -> disp();
		cout <<  sizeof(p) << "\n"; // 8 (compiler dependent)
		cout <<  sizeof(*p) << "\n";  //  9
		cout <<  p << "\n";  //  may be  1000
		delete  p; // deletes  that objet  where  'p'  points
		p -> disp(); //  garbage  values  becoz objet  is  lost
		cout <<  sizeof(p) << "\n"; // 8
		cout <<  sizeof(*p) << "\n"; // 9
		cout <<  p << "\n";  //  same  address  1000
} //  pointer 'p'  is  lost


/*
1)  classname  object;  ---> compile  time  object

2) new  classname;  ---> Runtime  object

3) c1*   p  =  new  c1;  ---> 'p'  points  to  runtime  object

4)  *p  is  runtime  object

5) p -> x , p -> y , p -> ch  are  members  of  runtime  object

6) (*p) . x , (*p) . y , (*p) . ch  are  also  members
*/