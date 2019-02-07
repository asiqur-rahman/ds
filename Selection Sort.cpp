#include<bits\stdc++.h>
#include<cstdlib>
using namespace std;

int main()
{
	int n, arr[50], i, j, temp;

	cout<<"enter number of elements :";
	cin>>n;

	for(int i=0; i<n; i++)
        arr[i]=rand()%20;

    for(int i=0; i<n; i++)
        cout<<arr[i]<<",";
        cout<<endl;


	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<" Array after sorting is :\n";
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
