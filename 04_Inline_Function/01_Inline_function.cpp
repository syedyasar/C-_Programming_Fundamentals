// inline function
#include <iostream>
using  namespace  std;
void  f1()  // Function  header
{
	cout << "Hyd\n";
	cout << "Sec\n";
	cout << "Cyb\n";
}
main()
{
	f1(); // 3  statements  are   substituted
	f1();  // 3  statements  are   substituted
}


/*
1) When  inline function   is  called , substituion  takes  place  but  not  branching

2) The statements  in  inline function are substituted  whereever  it  is  called

3) Substitution is made at compile time but not at  runtime

4) There are no inline functions at  runtime becoz they are already expanded at compile time

5) cpp  file  contains  inline function but not exe file

6) inline is  a  keyword  and it is used in the function header

7) cpp  file  contains  2   function  i.e. main  and  f1()   but   exe  file  contains  single   function  main   with
    3+3 = 6  statements
Rules
---------
1) It   can  not   contain  loops (for, while  and  do-while)

2) It  can  not  contain  static variables.

3) It  can  not  be  recursive  function

4) It  can  not  contain  return statement   and  hence  it  must  be  void   function

5) It  can  not   contain switch or goto statement

6) It must be  a  small  function
				If  at  least  one  rule  is  violated ,  word  inline is  ignored  and  the  function   is  treated   as    normal
function.  Thus  inline  is  a  request to  compiler  but  not  demand


Advantage:  Fast  in  execution  becoz   branching is  eliminated
*/
