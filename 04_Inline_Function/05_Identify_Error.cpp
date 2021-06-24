//  Identify  Error
void   f1(int  a = 10 , int  b , int  c = 20 , int  d)  //  Error
{
}


void f2(int  b , int  d , int  a = 10, int  c =20) // okay
{
}
 
main()
{
}


/*
1)  Parameters  having  default  values  must  be  at  the  end
     i.e.  Non-default  arguments  must  be   at  the  begining  and  default  arguments  at  the  end

2) Non-default  argument can not follow  default argument
*/