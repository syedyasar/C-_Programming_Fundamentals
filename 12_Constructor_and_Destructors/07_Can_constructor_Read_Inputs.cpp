// Can  constructor  read   inputs ?  ----> Yes
#include <iostream>
using  namespace  std;
class  Rat
{
	private:
		int  nr , dr ;
	public:
		Rat()
		{
			cout << "Enter numerator and denominator \n";
			cin >> nr >> dr;
		}
		void  disp()
		{
			cout << nr << "/" << dr << "\n";
		}
};
main()
{
	Rat  a;  //  constructor  reads   inputs  into  object  'a'
	a . disp();
}


//  Reading  inputs  in  the  constructor  is  not  a   good  programming