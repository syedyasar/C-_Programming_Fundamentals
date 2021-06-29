// overload   pre ++ , post ++ , pre -- , post -- , unary - ,  >> , <<  and  ~  on  Rational  object

/*
1) a =  2 / 3
    b = a++
    a  --->  5 / 3
    b  --->  2 / 3

2) a =  2 / 3
    b = ++a
    a  --->  5 / 3
    b  --->  5 / 3

3) a =  2 / 3
    b = a--
    a  --->   - 1 / 3
    b  --->  2 / 3

4) a =  2 / 3
    b = --a
    a  --->  -1 / 3
    b  --->  -1 / 3

5) a = 2 / 3
    b = -a
    a  ---->  2 / 3
    b   ---->  -2 / 3


*/
#include  <iostream>
using  namespace  std;
class  Rat
{
		private:
				int nr , dr;
		public:
				Rat  operator  ++();  //Pre ++
				Rat  operator  ++ (int);   //  post  ++
				Rat  operator  --();   //Pre --
				Rat  operator  --(int);  // post --
				Rat  operator  - ();
				friend  void  operator  ~(Rat&   a);
				friend  istream&  operator  >> (istream&  din ,  Rat&   a);
				friend  ostream&  operator  << (ostream&  dout ,  Rat  a);
};



Rat  Rat::operator  ++()  // pre  ++
{
		nr=nr+dr;
		return *this;
}


Rat   Rat::operator++(int)
{
		Rat  b = *this;
		nr=nr+dr;
		return b;
}

Rat  Rat::operator  --()
{
		nr=nr-dr;
		return *this;
}


Rat   Rat::operator--(int)
{
	Rat  b = *this;
	nr=nr - dr;
	return b;
}

Rat  Rat :: operator  -()
{
		Rat  b  = *this;
		b . nr = -b . nr;
		return  b;
}

void   operator   ~(Rat&    a)
{
	while (a . dr == 0)
	{
		cout << "Denominator  can  not  be  zero , Reenter  :  ";
		cin >> a . dr;
	}
}

istream&  operator   >>(istream&  din  ,  Rat&   a)
{
	cout << "Enter   numerator  :  ";
	din >> a . nr;
	cout << "Enter   denominator  :  ";
	din >> a . dr;
	~a;
	return   din;
}


ostream&  operator  <<(ostream&  dout , Rat  a)
{
		cout << a.nr << "/" << a.dr << "\n";
		return  dout;
}



void menu(){
	cout <<  "1.Pre ++\n" << "2.Post ++\n" << "3. Pre--\n"  <<  "4. Post--\n" <<  "5.Unary-\n"  << "6.Exit\n"  ;
}


main()
{
	int choice;

	do{
		menu();
		cout << "Enter choice:\n" ;
		cin >> choice;



		if(choice==1){
			Rat a,b;
			cin >> a ;
			b=++a;
			cout << "a :  " << a;
			cout << "b :  " << b;
		}
		else if(choice==3){
			Rat a,b;
			cin >> a ;
			b=--a;
			cout << "a :  " << a;
			cout << "b :  " << b;
		}
		else if(choice==2){
			Rat a,b;
			cin >> a ;
			b=a++;
			cout << "a :  " << a;
			cout << "b :  " << b;
		}
		else if(choice==4){
			Rat a,b;
			cin >> a ;
			b=a--;
			cout << "a :  " << a;
			cout << "b :  " << b;
		}
	    else if(choice ==5){
			Rat a,b;
			cin >> a ;
			b=-a;
			cout << "a :  " << a;
			cout << "b :  " << b;
     	}
	}while(choice<6);
}

