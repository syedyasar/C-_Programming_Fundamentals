//  Same  program   without  CC
#include <iostream>
#include <string.h>
using  namespace  std;
class  String
{
	private:
		char*  s;
		int  l;
	public:
		void  disp()
		{
			cout << "String : " << s << "\n";
			cout << "Length  : " << l << "\n";
		}
		String()
		{
			s = new  char[9];
			strcpy(s , "Rama Rao");
			l = strlen(s);
		}
};
main()
{
	String  a; // object  is  initialized  with  s = "Rama Rao"  and l = 8 by  NAC
	a . disp();
	String  b  = a; //  contents  of   object  'a'   are  copied  to  object  'b' 
	b . disp();
}

//  a.s  and  b.s  point  to  same  array  becoz  there  is no  CC

