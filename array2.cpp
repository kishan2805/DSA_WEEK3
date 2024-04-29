#include<iostream>
using namespace std;

int uniqueelement(int arr[],int n)      /*this function finds the only unique no. out of a array of repetative objects */
{
    int ans=0;
    for (int i =0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return (ans);
}

void sorting(int arr[10],int n)
{
    int left=0,right=n-1;
    while(left<right)
    {
        if(arr[left]==1)
        {
            if(arr[right]==0)
            {
                swap(arr[left],arr[right]);
            }
            else
                right--;
        }
        else
            left++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    // int arr[9]={1,2,3,4,5,1,2,3,4};
    // int finalans=uniqueelement(arr,9);
    // cout<<"the unique element found in the series is "<<finalans<<endl;
    

    // int arr[3]={10,20,30};
    // for (int i=0;i<3;i++)
    // {
    //     for (int j =0;j<3;j++)
    //     {
    //         cout<<arr[i]<<" , "<<arr[j]<<"       ";
    //     }
    //     cout<<endl;
    // }

    // int arr[]={1,2,3,4,5,6};
    // int temp=0;

    // temp=arr[5];
    // for (int i=5;i>0;i--)
    // {
    //     // through swaping  
    //     temp=arr[i];
    //     arr[i]=arr[i-1];
    //     arr[i-1]=temp;

    //     // through rotation 
    //     // arr[i]=arr[i-1];
    // }
    // // arr[0]=temp;


    // for (int i=0;i<6;i++)
    // {
    //     cout<<arr[i]<<endl; 
    // }

    // // call by refrence 
    // int n=4;
    // int &k=n;
    // cout<<"the value of n "<<n<<endl;
    // cout<<"the value of k "<<k<<endl;
    // k++;
    // cout<<"the updated value of k "<<k<<endl;
    // cout<<"the updated value of n "<<n<<endl;

    // int a[5]={1,2,3};
    // for (int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         for(int k=0;k<3;k++)
    //         {
    //             cout<<a[i]<<","<<a[j]<<","<<a[k]<<endl;
    //         }
    //         cout<<endl;
    //     }
    // }

    // // seprating 1 & 0 using 2 pointer approach

    // int arr[10]={0,1,1,0,1,1,0,1,0,1};
    // sorting(arr,10);



    return 0;
}