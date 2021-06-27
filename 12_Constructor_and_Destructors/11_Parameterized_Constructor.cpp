// PC demo  program
#include <iostream>
using  namespace  std;
class  Rat
{
	private:
		int   nr , dr;
	public:
		Rat(int nr1 , int  dr1)
		{
			nr = nr1;
			dr = dr1;
			cout << "PC\n";
		}
		void  disp()
		{
			cout << nr << "/" << dr << "\n";
		}
};
main()
{
	Rat   a(5 , 8); // object   is  initlalized  with  nr = 5  and  dr = 8   by  PC
	a . disp();
	Rat *p = new  Rat(22 , 7); // Runtime  object   is  initlalized  with  nr = 22  and  dr = 7   by  PC
	p -> disp();
	//a . Rat :: Rat(9 , 11);  //  Error   becoz  constructor  can  not  be  called  explicitly
}
