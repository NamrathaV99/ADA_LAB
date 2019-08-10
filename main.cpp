#include <iostream>
using namespace std;
int main()
{
	int i,n,a[50],max;
	cout<<"Emter the value of n :";
	cin>>n;
	cout<<"Enter the "<<n<<" values :"<<endl;
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
	cout<<"Max value : "<<max;
	return 0;
}
