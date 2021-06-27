/* Stack
class name is stack
generic class
data members are
s is a pointer to array,
top is subscript of last element,
size is array size
Function
---------------
constructor(int k) ---> initializes s is pointer to runtime array of size k , top = 1 and size = k
destructor() --> deletes runtime array
bool isempty() --> returns true when stack is empty (i.e. top == -1) and false otherwise
bool isfull() --> returns true when stack is full (i.e. top == size - 1) and false otherwise
void push(T x) --> inserts element 'x' into the stack if not full and print msg if full
T pop() --> deletes last element of stack and returns it
void disp() ---> prints elements of stack in reverse order
T peek() ---> returns last element of the stack
*/


#include <iostream>

using namespace std;

template <class T=int>
class Stack{
	
	private:
	int size,top;
	T *s;
	
	public:
		
	Stack(int k=40)
	{
	top=-1;
	size =k;
	s = new T [k] ;
	}
	
	~Stack<T>(){
	delete [] s;
	}
	
	bool isempty(){
	return (top==-1);
	}
	
	bool isfull(){
	return (top==size-1);
	}
	
	void push(T x){
	if(isfull())
	cout << "Stack is full , insertion is not possible\n";
	else
	s[++top] = x;
	}
	
	T pop()
	{
	if(isempty())
	return -1;
	else
	return s[top--] ;
	}
	
	T peek() {
	if (isempty())
	return -1;
	else
	return s[top];
	}
	
	void disp(){
	int i;
	if(isempty())
		cout << "Stack is empty\n" ;
	else{
		cout << "Stack\n";
		
		for(int i=top;i >= 0 ; i--)
		    cout << s[i] << "\n" ;	
	    }
	}
																																								
};


void menu()
{
cout << "1.Insertion" << "\n" << "2.Deletion" << "\n" << "3.Print Stack" << "\n" << "4.Last Element of Stack" << "\n" << "5.Exit" << "\n";
}

main()
{
	int k , choice, in;
	cout << "Enter the size of the Stack" << "\n";
	cin >> k;
	
	Stack<int> a(k);
	
	menu();
	
	cout << "Enter Choice : " ;
	cin >> choice;
	
	while(choice < 5){
		
	if(choice==1){
	cout << "Enter the element to be inserted : " ;
	cin >> in ;
	a.push(in);
	}

	else if(choice==2){
	int x = a.pop();
	if (x == -1)
	cout << "Stack is empty , deletion is not possible\n";
	else
	cout << "Deleted Element : " << x << "\n";
	}
	
	else if(choice==3)
	a.disp();
	
	else if(choice==4)
	{
	int x = a.peek();
	if (x == -1)
	cout << "Stack is empty \n";
	else
	cout << "Last Element : " << x << "\n";
	}
	
	menu();
	cout << "Enter Choice : " ;
	cin >> choice;
	
	}

}
