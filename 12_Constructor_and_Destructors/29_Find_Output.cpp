// Find  outputs
#include <iostream>
using   namespace  std;
class  Rat
{
	private:
			int nr = 5 , dr = 8;
	public:
		~Rat()
		{
			cout << "object  is  lost\n";
		}
		void  disp()
		{
			cout << nr << "/" << dr << "\n";
		}

};
main()
{
	Rat  a;
	a . disp();  //  5 / 8
	a . ~Rat(); //  object   'a'  is  not  lost  after  execution of  destructor
	a . disp(); // 5 / 8
} // destructor  is  executed   before  object  'a'  is  lost

// Destructor  can  be  called   explicitly  but  object  is  not  lost  after  execution  of  destructor