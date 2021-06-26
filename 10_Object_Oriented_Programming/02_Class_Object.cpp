//  class  and  object  demo  program
#include  <iostream>
using  namespace  std;
#pragma  pack (1)
class   c1
{
	private:
		int  x = 25;
		float  y = 10.8;
		char  ch = 'g';
		string  s = "Rama Rao";
	public:
		void  disp()
		{
				cout << "x : " <<  x << "\n";
				cout << "y : " << y << "\n";
				cout << "ch : " << ch << "\n";
				cout << "s : " << s << "\n";
		}
};
main()
{
		c1  a;
		a . disp();
		//cout << a << "\n";  // Error  becoz  <<  is  not  allowed  for  objects
		cout << &a << "\n"; // address  of  object  'a'   ---> May  be  1000
		cout << sizeof(a) << "\n";  //  size  of  object  'a'  ---> 4 + 4 + 1 + 8 = 17
}


