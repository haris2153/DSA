#include<iostream>
using namespace std;
int repeat(int a[] ,int n)
{
	bool p = false; //flag
	for(int i = 0; i < n;i++ )
	{
		int j;
		for( j = 0; j < n; j++)
		{
			if(i != j && a[i] == a[j])
			break;
		}
	
		if(j == n)
		{
		cout <<a[i]<<" is the first non-repeating element of the array."<<endl;
		p = true;
		break;
		}
	}
	
	if(!p)
	{
		cout <<"No, non-repeating element is present in the array."<<endl;
		p = false;
	}
	
}
int main()
{
	int n;
	cout <<"Enter array size:"<<endl;
	cin >> n;
	
	int a[n];
	cout <<"Enter array elements:"<<endl;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	repeat( a ,n);
	return 0;
		
}
