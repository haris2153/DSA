#include<iostream>
using namespace std;
int main(){
	int n = 5;
	int arr[n]={2,5,17,7,4};
	// if sorted then there is no need to check last elements.
	// and loop starts from 0.
	// if i<= n-2 -->  i <= 5-2 -->  i <= 3  So i goes: 0, 1, 2, 3
	/* if i<= n-1 -->  i <= 5-1 -->  i <= 4  So i goes: 0, 1, 2, 3,4 
		will be incorrect*/
	for(int i = 0;i <= n-2;i++){
		/*Why n-2-i?
		This is because after every pass, 
		one element is already in its correct position.*/
		for(int j = 0;j<=n-2-i;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i = 0; i < n;i++){
		cout << arr[i]<<" ";
	}
	return 0;
}
