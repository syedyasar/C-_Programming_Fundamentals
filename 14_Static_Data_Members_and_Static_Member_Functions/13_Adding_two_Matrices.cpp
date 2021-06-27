/*
Adding Two Matrix
*/

#include <iostream>

using namespace std;

template <class T=int>
class Matrix{
	private:
		T **a;
		static int m,n;
	public:

   		Matrix() 
		{
		a = new T*[m] ;
		for(int i=0;i<m;i++){
				a[i] = new  T[n];
		}

		}
		~Matrix<T>()
		{
			for(int i=0;i<m;i++)
				delete [] a[i];
			delete [] a;
		}

		static  void  get1()
		{
				cout << "Enter number  of  rows :  ";
				cin >> m;
				cout << "Enter number  of  columns :  ";
				cin >> n;
		}

		void  get2()
		{
			cout << "\nEnter values :\n";
			for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
					cin >> a[i][j];
		}
		
			
		void  add(Matrix<T> A, Matrix<T> B)
		{
			for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
						a[i][j]= A.a[i][j] + B.a[i][j];
		}
		
		void  disp()
		{
			for(int i=0;i<m;i++)
			{
					for(int j=0;j<n;j++)
							cout << a[i][j] << "\t";
					cout << "\n";
			}
		}
			
};



template <class T>
int Matrix<T>::m;
template <class T>
int Matrix<T>::n;


int main()
 {	
	 Matrix<> :: get1();
	 Matrix<> X,Y,Z;


	 X.get2();
	 Y.get2();
	 Z.add(X,Y);
	 cout << "\nResult : \n" ;
	 Z.disp();

	 return 0;
	 
  }
