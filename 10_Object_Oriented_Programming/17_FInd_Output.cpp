// Find  outputs
#include <iostream>
using  namespace  std;
class  c1
{
	private:
		int x = 25;
	public:
		void  f1(int  x)
		{
			cout <<  x  << "\n";   // 35
			cout << this -> x << "\n"; // 25
		}
};
main()
{
	c1   a; // object  'a'  contains x == 25
	a . f1(35);
}				