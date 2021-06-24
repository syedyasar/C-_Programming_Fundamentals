// Find  outputs
#include <iostream>
#include <math.h>
using namespace std;
float   power(float  a , int  b  =  2)
{
        return  pow(a , b);
}
main()
{
	cout << power(2 , 6) << "\n"; // 64
	cout << power(5) << "\n";  // 25
}

void   powers(int  b = 2 , int  a)  //  Error  becoz  non-default argument can  not  be  after  default  argument
{
}
