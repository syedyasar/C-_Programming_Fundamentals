// Find area of circle,rectangle and triangle
#include <iostream>
#include <math.h>
using  namespace  std;
float  area(float r)
{
	return  3.14159 * r  * r;
}
float area(float l , float b)
{
	return l * b;
}
float area(float  a , float  b,  float  c)
{
	float  s = (a + b + c) / 2; // 6 
	return sqrt(s * (s - a) * (s -  b) * (s - c)); // 6 * 3 * 2 * 1 = 6
}
main()
{
	cout << "Area  of  Triangle : " <<  area(3 , 4 , 5) << "\n";  // 6.0
	cout << "Area  of  Rectangle  : " << area(6 , 7) << "\n";  // 42.0
	cout << "Area  of  Circle :  " << area(3.5) << "\n" ;  // some thing
}
