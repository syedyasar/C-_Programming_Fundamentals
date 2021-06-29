//  2) Convert   array   to  object
//     Array  contains  string
//     Object   conrtains  string  and   length


#include <iostream>
#include <string.h>
#include <ctype.h>
using  namespace  std;

/*
class  Obj
{
	private:
			int length;
			char s[];

	public:
			Obj(char  s1[])
			{
				length = strlen(s1);
				strcpy(s,s1);
			}
			void  disp()
			{
				cout << "String :  " << s << "\nString Length :" << length << "\n";
			}
};

main()
{
	char a[100];
	cout << "Enter String: ";
	cin.get(a,100);
	Obj  o = a ;  
	o . disp();
}

*/



class  Obj
{
	private:
			string s;
			int length;

	public:
			Obj(string str)
			{

				length= str.length();
				s=str;
			}
			void  disp()
			{
				cout << "String :  " << s << "\nString Length :" << length << "\n";
			}
};

main()
{
	string a;
	cout << "Enter String: ";
	getline(cin,a);
	Obj  o = a ;  
	o . disp();
}


