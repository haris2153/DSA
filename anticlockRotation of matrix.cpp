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
		//swaping to print transpose.
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(i < j)
				{
				swap (a[i][j] , a[j][i]);
				}
			}
		}
		//now reverse the transpose to rotate matrix 90degree anticlockwise
		for(int j = 0; j < n; j++)
		{
			for(int i = 0; i < n/2; i++)
			{
				
			swap (a[i][j] , a[n-i-1][j]);
				
			}
		}
		//print rotated matrix
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cout << a[i][j];	
			}
			cout <<endl;
		}
		return 0;
	}
