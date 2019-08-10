#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int t,n,k,a[20],flag=0;
    ifstream inFile;
      inFile.open("Input.txt");
    if (!inFile) {
        cout << "Unable to open file";

    }
    inFile >> t;
    cout<<"No. of test cases : "<<t<<endl;
    for(int i=0;i<t;i++)
    {
        flag=0;
        inFile >> n;
        cout<<"The no. of elements : "<<n<<endl;
        inFile >> k;
        cout<<"The key : "<<k<<endl;
        cout<<"The elements :"<<endl;
        for (int i=0;i<n;i++)
        {
            inFile >>a[i];
            cout<<a[i]<<" , ";
            if(a[i]==k)
                flag=1;
        }

        if(flag==1)
            cout<<endl<<1<<" KEY FOUND ";
        else
            cout<<endl<<-1<<" KEY NOT FOUND " ;
       cout<<endl;
    }

    inFile.close();
    return 0;
}
