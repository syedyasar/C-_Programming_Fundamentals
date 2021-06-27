/*
class name is Queue
generic class
data members are
a is a pointer to array,
f(front) is subscript of first element,
r(rear) is subscript of last element,
size is array size
Functions
---------------
constructor(int k = 40) ---> initializes a is pointer to runtime array of size k , f = 0 , r = -1 and size = k
destructor() --> deletes runtime array
bool isempty() --> returns true when queue is empty (i.e. r == -1) and false otherwise
bool isfull() --> returns true when queue is full (i.e. r == size - 1) and false otherwise
void insert(T x) --> inserts element 'x' into the queue if not full and print msg if full
T del() --> deletes first element of queue and returns it
void disp() ---> prints elements of queue
T first() ---> returns first element of the queue
T last() ---> returns last element of the queue
*/

#include <iostream>

using namespace std;

template <class T=int>
class Queue{
	private:
		int size,front,rear;
		T *s;
	public:
   		Queue(int  k=40)
		{
			front=0;
			rear=-1;
			size =k;
			s = new T [k] ;
		}
		~Queue<T>(){
			delete [] s;
		}
		bool isempty(){
			return (rear==-1);
		}
		bool isfull(){
			return (rear==size-1);
		}
		void  insert(T   x){
			if(isfull())
				cout << "Insertion is  not possible\n";
			else 
				s[++rear] = x;
		}		
		T  del()
		{
			if(isempty())
				return -1;
			else {
				int k= front++;
				if(front>rear) {
					front = 0; 
					rear = -1;	
					}
			return   s[k] ;
			}

		}
		T  first() {
			if (isempty())
					return  -1;
			else
					return   s[front];
		}
		
		T  last() {
			if (isempty())
					return  -1;
			else
					return   s[rear];
		}
		
		void  disp(){
			int i;
			if(isempty())
				cout <<  "Queue is empty\n" ;
			else{
				cout << "Queue\n";
				for(int  i=front;i <=  rear ; i++)
					cout << s[i] << "\t" ;
			}
		}
			
};


void menu()
 {
	  cout << "\n1.Insertion" << "\n" << "2.Deletion" << "\n"  << "3.Print Queue" << "\n"  << "4.First Element of Queue"  << "\n"  << "5.Last Element of Queue"  << "\n"  << "6.Exit"  << "\n";
 }
 
 main()
 {
	 int k , choice, in;
	 cout << "Enter the size of the Queue" << "\n";
	 cin >> k;
	 Queue<int>  a(k);
	 menu();
     cout << "Enter Choice : " ;
     cin >> choice;
     while(choice <= 5){
     	
     if(choice==1){
  		cout << "Enter the element to be inserted : " ;
  		cin >> in ;
		a.insert(in);
		a.disp();
	  }	

     else if(choice==2){
	    int  x  =  a.del();
		if (x  == -1)
				cout << "Queue  is  empty  ,  deletion  is  not  possible\n";
		else
  				cout << "Deleted Element : "  << x << "\n";
  		a.disp();
    }	
    
	else if(choice==3)
		a.disp();
	
	else if(choice==4)
	 {
		int  x  =  a.first();
		if (x  == -1)
				cout << "Queue  is  empty  \n";
		else
  				cout << "First  Element : "  << x << "\n";
	}
	
	else if(choice==5)
	 {
		int  x  =  a.last();
		if (x  == -1)
				cout << "Queue  is  empty  \n";
		else
  				cout << "First  Element : "  << x << "\n";
	}
	menu();
	cout << "Enter Choice : " ;
	cin >> choice;
	
  }
  
 }
