#include <iostream>
using namespace std;
int count1=0,count2=0,count3=0;

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubble_sort(int a[],int n)
{

	for(int i=0;i<=n-2;i++)
	{
		int swapped=false;
		for(int j=0;j<=n-2-i;j++)
		{
			count2++;
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

void selectionsort(int a[],int n)
{   int min;
	for(int i=0;i<n-2;i++)
	{
		min =i;
		for(int j=i+1;j<=n-1;j++)
		{
			count3++;
			if(a[j]<a[min])
				min=j;
		}
		swap(a[i],a[min]);
	}
}


void merge(int arr[], int low, int m, int high) 
{ 
    int i, j, k; 
    int n1 = m - low+ 1; 
    int n2 =  high - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[low + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m +1+ j]; 
  
    i = 0; 
    j = 0; 
    k = low; 
    while (i < n1 && j < n2) 
    {   count1++;
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
   
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
   
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergesort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        
        int m = low+(high-low)/2; 
  
       
        mergesort(arr, low, m); 
        mergesort(arr, m+1, high); 
  
        merge(arr, low, m, high); 
    } 
} 


int main(int argc, char **argv)
{
	int n;
	cout<<"Enter the no. of elements in the array : ";
	cin>>n;
	int a[n],b[n],c[n];
	cout<<"Enter the elements of the array :"<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for (int i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	mergesort(a,0,n-1);
	cout<<"Sorted Array :"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	bubble_sort(b,n);
	cout<<"Bubble Array :"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	selectionsort(c,n);
	cout<<"Selection Array :"<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	cout<<"No. of Comparisions : "<<endl;
	cout<<"Merge Sort : "<<count1<<endl;
	cout<<"Bubble Sort : "<<count2<<endl;
	cout<<"Selection Sort : "<<count3<<endl;
	
	return 0;
}
