#include <iostream>
using namespace std;
 
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubble_sort(int a[],int n,int k)
{

	for(int i=0;i<k;i++)
	{
		int swapped=false;
		for(int j=0;j<=n-2-i;j++)
		{
			if(a[j+1]<a[j])
				{swap(a[j],a[j+1]);
				swapped=true;
				}
				
		}
		
		if(swapped==false)
	     {
		  break;
	     }
		 
	}
	
}

int main(int argc, char **argv)
{
	int n,a[50],k;
	cout<<"Enter the no. of elements in the array : ";
	cin>>n;
	cout<<"Enter the elements of the array :"<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the value of k :";
	cin>>k;
	bubble_sort(a,n,k);
	cout<<"The largest "<<k<<" elements :"<<endl;
	for(int i=n-1;i>n-k-1;i--)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
