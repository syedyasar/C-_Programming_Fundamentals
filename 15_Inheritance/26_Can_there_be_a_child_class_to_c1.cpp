// Can there be a child class to c1 ?   ---->  NO
class  c1
{
	private:
		c1()
		{
		}
};
class c2 : public  c1 
{
};
main()
{
	c2  a; //   Error
}


/*
1) Since  there  is   no   constructor  in  class   c2,  compiler  adds   empty  NAC   to  class   c2

2) c2  a;   executes  c2  class  NAC

3)  c2  class  NAC  is   unable  to   call   c1  class  NAC  becoz  it  is  private

4) When  a   class  contains  private  constructor, We  can  define  child  class  but   child   class   object   can  not  be 
     created
*/
