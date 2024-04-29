#include <iostream>
using namespace std;

// two sum (16/12/23)
int main()
{
    int n,target;
    cout<<"enter the length of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"enter the target value "<<endl;
    cin>>target;
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    int i=0,flag=0;
    while(flag!=1 && i<n)
    {

        for(int j=i+1;j<n;j++)
        {
            if (target == arr[i]+arr[j])
            {
                cout<<i<<" , "<<j;
                flag=1;
            }
        }
        i++;
    }
    if(flag==0)
    {
        cout<<"not found in the array "<<endl;
    }

    return 0;

}