#include <iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low+1;
	int j=high;
	while(1)
	{
		while(a[i]<=pivot && i<=high)
			i+=1;
		while(a[j]>pivot && j>=low)
			j-=1;
		if(i<j)
			swap(a[i],a[j]);
		else
		{
			a[low]=a[j];
			a[j]=pivot;
			return j;
		}
	}
}

void quicksort(int a[],int low,int high)
{
	int pivot_pos;
	if(low<high)
	{
		pivot_pos=partition(a,low,high);
		quicksort(a,low,pivot_pos-1);
		quicksort(a,pivot_pos+1,high);
	}
}


int main(int argc, char **argv)
{
	int n;
	cout<<"Enter the no. of elements in the array : ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array :"<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	cout<<"Sorted Array :";
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
