	#include<iostream>
	using namespace std;
	int main()
	{
		int n;
		cout <<"Enter rows and columns:"<<endl;
		cin  >> n;
	
		int a[n][n];
		cout <<"Enter matrix:"<<endl;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j]; 
			}
			cout << endl;
		}
		//print
		cout <<"Middle row and column of a matrix:"<<endl;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(i == j||i + j == n - 1) 
				{
					cout<<a[i][j]<<" "; //single space.
				}
				else 
				{
					cout<<"  ";	// two spaces just for allignment.
				}
			}
			cout << endl;
		}
		
		return 0;
	}
		
		
		
		
		
		
		
		
