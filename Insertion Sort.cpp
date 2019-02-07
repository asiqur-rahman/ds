#include<bits\stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
	int size, arr[50], i, j, temp;
	cout<<"enter number of elements :";
	cin>>n;

	for(int i=0; i<n; i++)
        arr[i]=rand()%20;

    for(int i=0; i<n; i++)
        cout<<arr[i]<<",";
        cout<<endl;

	for(i=1; i<n; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"Array after sorting : \n";
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
