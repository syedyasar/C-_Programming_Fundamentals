/*
swap  values  of  2 variables

main()   --> read inputs , call swap   function and print results

swap()  ---> swap  values of  2 variables 
*/

#include <iostream>
using  namespace  std;
void  swap(int& x , int& y)  
{
		int temp;
		temp=x;
		x=y;
		y=temp;;
}

int main()
{
	int  a,b;
	
	cout << "Enter the values of a and b" << endl;
	cout << "a : " ;
	cin >> a;
	cout << "b : " ;
	cin >> b;

	swap(a , b); 
	cout << "\n\na : " << a << "\n";  
	cout << "b : " << b << "\n";
	return 0;
}
