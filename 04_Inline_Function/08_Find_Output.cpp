// Find  outputs
#include <iostream>
using namespace std;
void   disp(char   ch = '*' , int  n = 4)
{
        for(int i = 1; i <= n ; i++)
				cout << ch ;
		cout << "\n";
}

main()
{
		disp('-' , 6); //  ------
		disp('$');  // $$$$
		disp(); // ****
		disp(65);  //  AAAA
}
