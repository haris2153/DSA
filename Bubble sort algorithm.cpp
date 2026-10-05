#include<iostream>
using namespace std;
int main(){
	cout <<"Bubble Sorting Algorithm:"<<endl;
	int n = 5;//size of array
	int har[n]={5,1,7,2,4};
	cout<<"Original array = ";
	for(int i = 0; i < n;i++){
		cout << har[i]<<" ";
	}
	cout <<endl;
	//Algorithm of Bubble sort for ascending order.
	for(int i = 0; i <= n - 2; i++){
		for(int j = 0; j <= n-2-i;j++){
			if(har[j] > har[j+1]){
				int temp = har[j];
				har[j] = har[j+1];
				har[j+1] = temp;
			}
		}
	}
	cout<<"Array sorted in ascending Order = ";
	for(int i = 0; i < n;i++){
		cout << har[i]<<" ";
	}
	cout <<endl;
	
	//Algorithm of Bubble sort for descending order.
	for(int i = 0; i <= n - 2; i++){
		for(int j = 0; j <= n-2-i;j++){
			if(har[j] < har[j+1]){
				int temp = har[j];
				har[j] = har[j+1];
				har[j+1] = temp;
			}
		}
	}
	cout<<"Array sorted in descending Order = ";
	for(int i = 0; i < n;i++){
		cout << har[i]<<" ";
	}
	cout <<endl;
	
	cout<<"Written by Haris.";
		
}
