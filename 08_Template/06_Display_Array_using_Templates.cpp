#include  <iostream>
#include  <string.h>  //  strlen  function
using  namespace  std;
template  <class   T>
void  disp(T   x[]  , int  n)
{
		for(int  i = 0 ; i <= n - 1 ; i++)
				cout << x[i] << "\t";
		cout << "\n";
}
main()
{
	int a[] = {10 , 20 , 15 ,18};
	disp(a , 4);
	float  b[] = {10.8 , 20.6 , 15.2};
	disp(b , 3);
	char  c[] = "Vamsi";
	disp(c , strlen(c));
	string  d[] = {"Hyd" , "Pune" , "Chennai" , "Vijayawada" , "Mumbai"};
	disp(d , 5);
}


//  strlen(c) = strlen("vamsi") = 5