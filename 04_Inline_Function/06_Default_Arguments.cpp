// default  arguments  (or) Optional  arguments
#include <iostream>
using namespace std;
int  add(int  a = 10 , int b = 20 , int c = 30 , int d = 40)
{
	return a + b + c + d;
}
main()
{
	cout << add() << "\n";  // 100
	cout << add(100) << "\n";  // 190
	cout << add(100 , 200) << "\n"; //  370
	cout << add(100 , 200 , 300) << "\n";  //  640
	cout << add(100 , 200 , 300 , 400) << "\n";  //  1000
}
