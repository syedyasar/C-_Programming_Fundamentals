//  Find  outputs
#include  <iostream>
using  namespace  std;
int  a  = 10;
int&   f1(int  &b , int  c)
{
	int  d  = 40;
    return    b; // main  function  variable  'x'  is   returned
} //  'd'  is   lost
main()
{
	int  x = 20 , y = 30;
	cout << x << "\n"; // 20
    f1(x , y) = 50; //  It  becomes  x = 50
	cout << x << "\n"; //  50
}