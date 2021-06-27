#include  <iostream>
using namespace  std;
main()
{
	istream   din;  //  Error  becoz   istream  constructor  is  private 
	ostream  dout; //  Error  becoz   ostream  constructor  is  private 
}

/*
1) It  is  not  possible  to  create  istream  and  ostream  class  objects

2) Therefore   cin   and  cout   which  are  predfined objects  in <iostream>  file
*/