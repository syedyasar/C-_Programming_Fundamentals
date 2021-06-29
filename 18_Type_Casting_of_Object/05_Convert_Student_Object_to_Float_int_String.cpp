// Convert   Student  object  to  integer , float  and  string
//  (int)object  --->  total  marks
//  (float)object  --->  avg  marks
//  (string)object  --->  grade
// object  contains  roll number , stud  name , marks of  3  subjects



#include <iostream>
#include <string.h>
using  namespace  std;
class  Student
{
	private:
			int  Rollno;
			string name;
			int marks[3];
	public:
			void  get()
			{
				cout << "Enter Student RollNumber : ";
				cin >> Rollno;
				cout << "\nEnter Student name : ";
				cin.ignore();
				getline(cin,name);
				cout << "\nEnter Student marks of 3 Subjects:  \n";
				for(int i=0;i<=2;i++)
					cin >> marks[i];
			}
			
			operator  int ()
			{
				int sum=0;
				for(int i=0;i<=2;i++)
				{
					sum+=marks[i];
				}
				return  sum ;
			}
			
			operator  float ()
			{
				return  (float)((int)*this)/3 ;
			}
			
			operator  string ()
			{
				int total=(int) *this ;
				float average = (float) *this ;
				string grade;
  
		        if(marks[0]<40 || marks[1]<40 || marks[2]<40)
		            grade = "Fail";
		
		        else if(average>=70)
		            grade = "Distinction";
		    
		        else if(average>=60)
		            grade = "First Division";
		        
		        else if(average>=50)
		            grade = "Second Division";
		        
		        else if(average>=40)
		            grade = "Third Division";
			return grade;
			}
};

main()
{
	Student  s;
	s . get();
	cout << "\nTotal Marks : " << (int) s << "\n"; 
	cout << "\nAverage Marks : " << (float) s << "\n"; 
	cout << "\nGrade : " << (string) s << "\n"; 
}



