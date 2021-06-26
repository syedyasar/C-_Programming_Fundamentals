#include  <iostream>
using  namespace  std;
template  <class   T>
void  swap1(T&   x , T&  y)
{
	T   temp;
	temp = x;
	x = y;
	y = temp;
}
main()
{
	int  a = 10 , b = 25;
	swap1(a , b);
	cout << "a : " << a << "\n"; // 25
	cout << "b : " << b << "\n";  // 10
	float  m = 10.8 , n = 20.6;
	swap1(m , n);
	cout << "m : " << m << "\n"; // 20.6
	cout << "n  : " << n << "\n"; // 10.8
	char  ch1 = 'g' , ch2 = 's';
	swap1(ch1 , ch2);
	cout << "ch1 : " << ch1 << "\n"; // s
	cout << "ch2 : " << ch2 << "\n";  // g
	string  s1 = "Hyd" , s2 = "Sec";
	swap1(s1 , s2);
	cout << "s1 : " << s1 << "\n"; // Sec
	cout << "s2 : " << s2 << "\n"; // Hyd
}

//  swap   is  a  predefined  function without  templates  and  hence  user  defined  function name must be some  
//   thing else

