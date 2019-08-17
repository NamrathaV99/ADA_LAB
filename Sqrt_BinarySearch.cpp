#include<iostream>
#include<math.h>

using namespace std;

int sqrt(int a)
{
	int start=0,end=a,ans,mid;
	while(start<=end)
	{
		mid=(start+end)/2;
		if((mid*mid)==a)
			return mid;
		else if((mid*mid)<a)
		{
			start=mid+1;
			ans=mid;
		}
		else if((mid*mid)>a)
		{
			end=mid-1;
		}
	}
	return ans;
}



int main()
{
	int x;
	cout<<"Enter the no. to find square root: ";
	cin>>x;
	int s=sqrt(x);
	cout<<"Number : "<<x<<endl;
	cout<<"Square root : "<<s<<endl;
	return 0;
}