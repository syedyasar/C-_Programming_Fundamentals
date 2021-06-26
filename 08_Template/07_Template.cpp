#include <iostream>
using  namespace  std;
template  <class  T>  //  It  is  unnecessary   becoz  f1   function  has  no  parameter
void  f1()
{
	cout << "f1  function \n";
}
main()
{
	//f1(); //  Error   becoz  datatype  for   T   is   not  committed
	f1<int>();  // okay  and  T   is  int
	f1<float>();  // okay   and  T  is  float
}


/*
1)  templates  are  not  required  when  function  has  no  parameter

2) In case  function  is  using  templates,  call  the  function  by   f1<int>();
*/
    