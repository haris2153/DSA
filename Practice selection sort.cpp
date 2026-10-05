#include<iostream>
using namespace std;
int main() {
  int n = 5;
  int arr[n] = {5,3,4,7,0};
  cout <<"Original Array:";
  for(int i = 0; i < n; i++){
    cout << arr[i]<<" ";
  }
  //algorithm
  for(int i = 0; i <= n-1;i++){
    int min = i;
    for(int j = i + 1; j <= n-1;j++){
      if(arr[min] < arr[j]){
        min = j;
      }
    }
    swap(arr[i],arr[min]);
  }
  cout <<endl;
  cout <<"Sorted Array in descending order:";
  for(int i= 0; i < n; i++){
    cout << arr[i] <<" ";
  }
  //algorithm.
  for(int i = 0; i <= n-1;i++){
    int min = i;
    for(int j = i + 1; j <= n-1;j++){
      if(arr[min] > arr[j]){
        min = j;
      }
    }
    swap(arr[i],arr[min]);
  }
  cout <<endl;
  cout <<"Sorted Array in ascending order:";
  for(int i= 0; i < n; i++){
    cout << arr[i]<<" ";
  }
  //convert array into smallest number.
  cout <<endl;
  int x = 0;
  for(int i= 0; i < n; i++){
    	x*=10;
    	x+=arr[i];
  }
  cout <<"Smallest Number(x)= "<< x;
   //algorithm.
  for(int i = 0; i <= n-1;i++){
    int min = i;
    for(int j = i + 1; j <= n-1;j++){
      if(arr[min] < arr[j]){
        min = j;
      }
    }
    swap(arr[i],arr[min]);
  }
  //convert array into largest number.
  cout <<endl;
  int y = 0;
  for(int i= 0; i < n; i++){
    	y*=10;
    	y+=arr[i];
  }
  cout << "Largest Number(y) = "<<y;
  cout <<endl;
  cout << "x + y= "<<x+y<<endl; 
  
  return 0;
}
