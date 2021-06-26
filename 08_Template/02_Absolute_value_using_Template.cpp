#include  <iostream>
using  namespace  std;
template  <class   T>
T   absolute(T   x)
{
	if (x < 0)
			return  -x;
	else
			return  x;
}
main()
{	
	cout << absolute(-25) << "\n";  //  T  is   replaced  with  int  and  result  :   25
	cout << absolute(-10.8) << "\n"; //  T  is   replaced  with  double  and  result  :   10.8
	cout << absolute(30.6f) << "\n"; //  T  is   replaced  with  float  and  result  :   30.6
}


/*
1)  Advantage ;   Coding  is  reduced  

2)  cpp  files  contains  single  absolute   function  but  exe  file  contains  3  absolute   functions,  one  for   each   function
      call

3)  There  are  no   templates  at  runtime  becoz   they  are  processed  at  compile  time

4) T  is  a   datatype  and  it  is    a   user  defined  word
*/