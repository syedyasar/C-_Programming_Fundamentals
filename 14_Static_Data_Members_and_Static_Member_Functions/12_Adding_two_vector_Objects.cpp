/*
Adding Two Vectors

*/

#include <iostream>

using namespace std;

template <class T=int>
class Vector{
	private:
		T *a;
		static int n;
	public:

   		~Vector()
		{
			delete [] a;
		}
		static  void   get1()
		{
				cout << "How  many  elements ?  :  ";
				cin >> n;
		}

		void  get2(){
			cout << "\nEnter values :\n";
			a = new T [n];
			for(int i=0;i<n;i++)
				cin >> 	a[i] ;
		}	
			
		void  add(Vector<T> A, Vector<T> B)
		{
			a = new  T [n];
			for(int i=0;i<n;i++)
				a[i] = A.a[i] +B.a[i];
		}	

		void  disp(){
			for(int i=0;i<n;i++)
				cout << a[i] << "\n";
		}
			
};



template <class T>
int Vector<T>::n;

int main()
 {	
	 Vector<int> :: get1();
	 Vector<int> X,Y,Z;
	 X.get2();
	 Y.get2();
	 Z.add(X,Y);
	 cout << "\nResult : \n" ;
	 Z.disp();

	 return 0;
	 
  }
  
