// How  to  modify  an  object ?
#include <iostream>
using  namespace  std;
class  Rat
{
	private:
			int  nr , dr;
	public:
			Rat(int  nr1 , int  dr1)
			{
					nr = nr1;
					dr = dr1;
			}

			void disp()
			{
					cout << nr << "/" << dr << "\n";
			}
};
main()
{
		Rat   a(5 , 8);  // Object  is  initialized  with  5  and  8  by  constructor
		a . disp();  // 5 / 8
		a = Rat(9 , 7); // object  is  modified with  9  and  7   due  to  Name less  object
		a . disp(); // 9 / 7
}


/*
a  =  Rat(9 , 7);  ---> There   are   3  events

1) Name  less  object  is  initialized  with 9  and  7  by  PC

2) Statement  becomes  a  =  Namelessobject ----> contents  of  Namelessobject  are  copied  to  object  'a'.
    Thus  object  'a'  is  modified  to  9  and  7

3) Namelessobject  is  lost  before  control  goes  to  next  statement
*/
