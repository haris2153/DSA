#include<iostream>
using namespace std;
int main(){
	int n;//size of an array
	cout<<"Enter the size of an array:"<<endl;
	cin >> n;
	int arr[n];
	cout<<"Enter an array:"<<endl;
	cout<<"Press enter after entering each element of an array."<<endl;
	for(int i = 0; i < n;i++){
		cin >> arr[i];
		cout<<endl;
	}
	cout<<"Array = ";
	for(int i = 0; i < n;i++){
		cout << arr[i]<<" ";
	}
	cout<<"."<<endl;
	cout<<"written by Haris."<<endl;
	return 0;
}