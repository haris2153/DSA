#include<iostream> 
using namespace std;
int main()
{
	int m = 5;//rows
	int n = 5;//columns
	int arr[m][n];
	for(int i = 0; i < m;i++){
		for(int j = 0;j < n; j++){
			arr[i][j] = 10;
		}
	}
	
	for(int i = 0; i < m;i++){
		for(int j = 0;j < n; j++){
			cout << arr[i][j] << " " ;
		}
		cout << endl;
	}
	
}
