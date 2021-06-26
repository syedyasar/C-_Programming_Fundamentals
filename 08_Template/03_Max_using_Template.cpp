#include  <iostream>
using  namespace  std;
template  <class   T>
T   max1(T   x , T  y)
{
	if (x > y)
			return  x;
	else
			return  y;
}
main()
{
	cout << max1(10 , 20) << "\n";  //  T  is  int  and  result : 20
	cout << max1(10.8 , 20.6) << "\n";  //  T  is  double  and  result : 20.6
	cout << max1('g' , 's') << "\n";  //  T  is  char  and  result :  s
	cout << max1(70.2f , 69.8f) << "\n";  //  T  is   float  and  result : 70.2
	cout << max1("Rama"  , "Rajesh") << "\n";   //  T  is   string  and  result :  Rama
	cout << max1(66 , 'A') << "\n";  //  Error   becoz  different  types of  parameters can  not  be  sent
}
