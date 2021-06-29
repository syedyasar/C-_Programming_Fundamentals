// Identify  Error
class    c1
{
	public:
		friend  void   operator  [] (int  x); //  Error  becoz  []  must  be  MF  only
		friend  void   operator  () (int  x); //  Error  becoz  ()  must  be  MF  only
		friend  void   operator  = (int  x); //  Error  becoz  =  must  be  MF  only
};
void  operator = (int  x)
{
}
void  operator [] (int  x)
{
}
void  operator () (int  x)
{
}

main()
{
}