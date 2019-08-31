#include <iostream>
using namespace std;

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
    { 
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
	int a[n];
	cout<<"Enter the elements of the array :"<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	cout<<"Sorted Array :";
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
