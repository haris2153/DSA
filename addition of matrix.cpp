	#include<iostream>
	using namespace std;
	int main()
	{
		int m; // rows
		cout << "Enter rows:" <<endl;
		cin  >> m;
		
		int n; // columns
		cout << "Enter columns:" << endl;
		cin  >> n;
		
		int a[m][n];
		int b[m][n];
		
		cout << "Enter a matrix:" << endl;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				cin >>a[i][j];
			}
			cout << endl;
		}
		
		
		cout <<"Enter second matrix:" << endl;
		for(int i = 0;i < m; i++){
			for(int j = 0; j < n; j++){
				cin >> b[i][j];
			}
		}
		cout << "Result is :" <<endl;		
		
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				b[i][j]= b[i][j] + a[i][j];
				cout << b[i][j] <<" ";
			}
			cout << endl;
		}
		
	return 0;
		
	}
