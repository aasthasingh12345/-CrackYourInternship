//Arrays
//Find the dublicate number
#include<iostream>
using namespace std;
int find_dublicate(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				return arr[i];
			}
			
		}
	}
}
int main()
{
	int n;
	cout<<"Enter the number of elements in the array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int y=find_dublicate(arr,n);
	cout<<"The dublicate number is :"<<y;
	return 0;
}
