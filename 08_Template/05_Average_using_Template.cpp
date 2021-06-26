#include  <iostream>
using  namespace  std;
template  <class   T>
float    avg(T   a[]  , int  n)
{
		float  sum = 0;
		for(int  i = 0 ; i <= n - 1 ; i++)
				sum += a[i];
		return sum / n;
}
main()
{
	int a[] = {10 , 20 , 15 ,18};
	cout << avg(a , 4) << "\n"; //  T  is  int and  result  :  avg  of  array  elements
	float  b[] = {10.8 , 20.6 , 15.2};
	cout << avg(b , 3) << "\n";  //  T  is  float
}
