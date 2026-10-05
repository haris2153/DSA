#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int arr[5]={1,14,5,20,11};
	int max = INT_MIN;
	
	for(int i = 0; i < 5;i++)
	{
		if(max < arr[i])
		{
		max = arr[i];
		x = i;
		}
	}
		temp = arr[0];
		arr[0] = max;
		arr[x] = temp;
		
	for(int i = x; i > x;i--){
		arr[i] = arr[i - 1];
	}	
	arr[0] =y;
	max = arr[0];
	
	for (int i = 0; i < 5;i++)
	{
		cout << arr[i] <<" ";	
	}
	
}
