#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n];
    cout << "Enter an array = ";    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cout <<endl;
    }
    cout <<"Selection Sorting Algorithm:"<<endl;
    cout<<"Original array = ";  
    for(int i = 0; i < n;i++){
            cout << arr[i]<<" ";
        }
    cout <<endl;
    //Algorithm of Selection sort for ascending order.  
    for(int i =0; i <= n - 1;i++){
        int min = i;
        for(int j = i + 1; j <= n-1;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        
        }
        swap(arr[i],arr[min]);
    }
    cout <<"Sorted arrat"<<endl;
    for(int i = 0; i < n;i++){
            cout << arr[i]<<" ";
        }
        return 0;
}
