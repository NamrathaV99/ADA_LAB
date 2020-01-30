#include <bits/stdc++.h> 
using namespace std; 
  
//Prints the array 
void printArr(int a[],int n) 
{ 
    for (int i=0; i<n; i++) 
        cout << a[i] << " "; 
    printf("\n"); 
} 
  
// Generating permutation using Heap Algorithm 
void heapPermutation(int a[], int size, int n) 
{ 
    // if size becomes 1 then prints the obtained 
    // permutation 
    if (size == 1) 
    { 
        printArr(a, n); 
        return; 
    } 
  
    for (int i=0; i<size; i++) 
    { 
        heapPermutation(a,size-1,n); 
  
        // if size is odd, swap first and last 
        // element 
        if (size%2==1) 
            swap(a[0], a[size-1]); 
  
        // If size is even, swap ith and last 
        // element 
        else
            swap(a[i], a[size-1]); 
    } 
} 
  

int main() 
{ 
	int n;
	cout<<"Enter the value of n :";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
	}
    heapPermutation(a, n, n); 
    return 0; 
} 
