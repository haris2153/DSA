#include<iostream>
using namespace std;
int main(){
	int n ;
	cout <<"Enter the size of an array:"<<endl;
	cin  >> n;
	int arr[n];
	int temp;
	cout<<"Enter an array:"<<endl;
	for(int i = 0;i<n;i++){
		cin >> arr[i];
		cout<<" ";
	}
	cout<<endl;
	cout<<".............................."<<endl;
	cout <<"Original array= ";
	for(int i = 0; i<n; i++){
		cout <<arr[i]<<" ";
	}
	cout <<endl;
		//insertion sort algorithm.
	for(int i = 1; i<n; i++){
		temp = arr[i];
		int j = i - 1;
	  while(j >= 0 && arr[j] > temp){
	  	arr[j+1] = arr[j];
	  	j--;
	  }	
	  arr[j+1] = temp;
	}
	cout <<"Sorted array in ascending order= ";
	for(int i = 0; i<n; i++){
		cout <<arr[i] <<" ";
	}
	cout<<endl;
		//insertion sort algorithm.
	for(int i = 1; i<n; i++){
		temp = arr[i];
		int j = i - 1;
	  while(j >= 0 && arr[j] < temp){
	  	arr[j+1] = arr[j];
	  	j--;
	  }	
	  arr[j+1] = temp;
	}
	cout <<"Sorted array in descending order= ";
	for(int i = 0; i<n; i++){
		cout <<arr[i]<<" ";
	}
	return 0;
}