// overload   > , < , == , >= , <= , !=  , >>    and   ~  operators  on  Rational  object
#include  <iostream>
using  namespace  std;
class  Rat
{
		private:
				int nr , dr;
		public:
				friend  bool  operator  > (Rat  a , Rat   b);  //  It  is   a  NMF   becoz   >  is   binary   operator  and  it  has  2  parameters
				friend  bool  operator  < (Rat  a , Rat   b);  //  It  is   a  NMF   becoz   <  is   binary   operator  and  it  has  2  parameters
				friend  bool  operator  == (Rat  a , Rat   b);  //  It  is   a  NMF   becoz  ==  is   binary   operator  and  it  has  2  parameters
				bool  operator  >= (Rat   b);  //  It  is   a  MF   becoz   >=   is   binary   operator  and  it  has  single  parameter
				bool  operator  <= (Rat   b); //  It  is   a  MF   becoz   <=   is   binary   operator  and  it  has  single  parameter
				bool  operator  != (Rat   b); //  It  is   a  MF   becoz   !=   is   binary   operator  and  it  has  single  parameter
				friend  void  operator  ~(Rat&   a);  //  It  is   a  NMF   becoz  ~   is    unary    operator  and  it  has  single  parameter
                //  (or)   void   operator  ~ ();  //   It   is   MF   becoz   ~   is   unary   operator  and   there    are  no   parameters
				friend  istream&  operator  >> (istream&  din ,  Rat&   a);  //  It  is   a  NMF   becoz   >>   is   binary   operator  and  it  has  2  parameters
};



bool  operator  >(Rat  a , Rat  b)
{
		return  a . nr * b . dr > a . dr * b . nr;
}

/*
1) a > b   --->  simple  call

2) operator > (a , b)   ---> Alternative  call
*/

bool  operator  <(Rat  a , Rat  b)
{
		return  a . nr * b . dr  <  a . dr * b . nr;
}

/*
1) a < b   --->  simple  call

2) operator < (a , b)   ---> Alternative  call
*/

bool  operator  ==(Rat  a , Rat  b)
{
		return  a . nr * b . dr == a . dr * b . nr;
}

/*
1) a == b   --->  simple  call

2) operator  == (a , b)   ---> Alternative  call
*/

bool   Rat ::  operator  >=(Rat  b)
{
		return  nr * b . dr >= dr * b . nr;
}

/*
1) a >= b   --->  simple  call

2) a . operator >= (b)   ---> Alternative  call
*/

bool   Rat ::  operator  <=(Rat  b)
{
		return  nr * b . dr <= dr * b . nr;
}

/*
1) a <= b   --->  simple  call

2) a . operator <= (b)   ---> Alternative  call
*/

bool   Rat ::  operator  !=(Rat  b)
{
		return  nr * b . dr  != dr * b . nr;
}

/*
1) a != b   --->  simple  call

2) a . operator != (b)   ---> Alternative  call
*/

void   operator   ~(Rat&    a)
{
	while (a . dr == 0)
	{
		cout << "Denominator  can  not  be  zero , Reenter  :  ";
		cin >> a . dr;
	}
}
/*
1) ~x;

2) operator  ~(x)
*/


istream&  operator   >>(istream&  din  ,  Rat&   a)
{
	cout << "Enter   numerator  :  ";
	din >> a . nr;
	cout << "Enter   denominator  :  ";
	din >> a . dr;
//	~a;
	return   din;  //  object   cin   is   returned
}

/*
1) cin >>  x;

2) operator  >>(cin , x);

3) cin  >> x  >> y >> z
*/


main()
{
		Rat  a , b;
		cin >> a >> b;
		//operator  >> (operator >>(cin , a)  , b);
		if (a > b)
				cout << "> \n";
		if (a < b)
				cout << "< \n";
		if (a == b)
				cout << "== \n";
		if (a >= b)
				cout << ">= \n";
		if (a <= b)
				cout << "<= \n";
		if (a != b)
				cout << "!= \n";
}

