#include <iostream>
#include <string.h>
using   namespace  std;
class  String
{
	private:
			char*  s;
			int  l;
	public:
		String() // constructor
		{
			s = new char[4]; // 's'  points  to  runtime  array
			strcpy(s , "Hyd"); // "Hyd"  is  copied  to  runtime  array
			l = strlen(s);
			cout << "Constructor\n";
		}
		~String()
		{
			delete [] s; // runtime  array   is  deleted
			cout << "Destructor\n";
		}
};
main()
{
	String  a; // constructor  is  executed
} // destructor  is  executed  before  object  'a'  is  lost


/*
Destructor
-------------------
1) It  is  a  special   member  function  of  the  class.

2) It  is  used  to  delete  resources  held  by  the   object.
    If  destructor  is  omitted,  object  is  lost  but  not  resources
	i.e. Resources  held  by  the  object  are  alive  even  after  object is lost.
	Therefore  it  leads  to  memory  wastage 

3) It  is  automatically  executed  before   object  is  lost

4) A  class can  contain  at  most  one  destructor i.e. One or  None
    
5) Destructor  can  not  be  overloaded

6) If  there  are  2 destructors in  a class , they will have same name and signature  which is not permitted


Rules
----------
1) Name  of  the  destructor   is    ~classname.
    Eg :  If  classname  is  Date,  destructor  name  is  ~Date

2) It  has  no  return  type,  not  even  void

3) It  can  not  contain  return  statement.

4) It   can  not   have  parameters

5) It  can  not  be  friend  to  any  other  class
    i.e.  There  is  no  friend  destructor

*/
