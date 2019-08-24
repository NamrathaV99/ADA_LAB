#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

int kthsmallest(int a[],int n, int k)
{   int min;
	for(int i=0;i<=n-2;i++)
	{
		min =i;
		for(int j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		swap(a[i],a[min]);
	}
	return a[k-1];
}

int main(int argc, char **argv)
{
	int n,a[50],k,x;
	cout<<"Enter the no. of elements in the array : ";
	cin>>n;
	cout<<"Enter the elements of the array :"<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the value of k :";
	cin>>k;
	x=kthsmallest(a,n,k);
	cout<<"Kth smallest element in the array = "<<x<<endl;
	return 0;
}
