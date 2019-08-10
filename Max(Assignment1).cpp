#include <iostream>

using namespace std;

int main()
{   int n,i,a[50],max;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the " << n << " numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    cout<<"The Max no. is: " << max;
    return 0;
}
