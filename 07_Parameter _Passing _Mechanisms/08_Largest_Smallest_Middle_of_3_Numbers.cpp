/*
Find largest , smallest and middle of 3 numbers


main()  ---> read  3  inputs  ,  call  lsm  function and  print  results

lsm()  ---> find  largest  , smallest  and middle  numbers


function call  ---> lsm(a , b , c ,  max , min , mid)
*/

#include <iostream>
using  namespace  std;
void  largest_smallest_middle(int x, int y, int z, int &l, int &s , int &m)  
{
    int t;
    l= (x>y && x>z) ? x : (y>z?y:z);
    s =(x<y &&x<z) ? x :(y<z? y:z);
    m=(x+y+z)- (l+s);
}

int main()
{
	int  a,b,c,max,min,mid;
	
	cout << "Enter the values of a , b  and c " << endl;
	cout << "a : " ;
	cin >> a;
	cout << "b : " ;
	cin >> b;
	cout << "c : " ;
	cin >> c;

	largest_smallest_middle(a,b,c,max,min,mid); 
	cout << "\n\nLargest : " << max << "\n";  
 	cout << "Middle : " << mid << "\n";
	cout << "Smallest : " << min<< "\n";
	return 0;
}



