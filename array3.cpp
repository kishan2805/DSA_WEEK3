#include<iostream>
#include<vector>

using namespace std;

// // to print the elements of array 
// void display(int a[],int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         cout<<a[i]<<endl;
//     }
// }

int main()
{
    // cout<<"kishan"<<endl;

    // two d array initialisation
    //  you should atleast give column size for initializing a 2 d array

    // int arr[][3]={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<arr[i][j]<<"  ";            '''this arr is initially filled with either 0 or some garbage value '''
    //     }
    //     cout<<endl;
    // }

    // vector stl
    
    // static mem allocation
    // int arr=[5];

    // dynamic mem allocation
    // int n;
    // cin>>n;
    // cout<<endl;
    // int *arr= new int [n];
    // display(arr,n);

    // vectors 


    // the capacity of vector doubles whenever we try to fill that after it is full
    // 1 ,2,4,8,16 this way the capacity of the vector doubles whenever we try to fill after 
    // previous level is full

    // inserting element in the vector

    // vector<int>v;

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3); 
    // v.push_back(4);   
    // v.push_back(5);   
    // same happens for vectors initially all the elements are either 0 or some garbage vbalue 

    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    // for (int i=0;i<4;i++)
    // {
    //     cout<<v[i];
    //     cout<<endl;
    // }

    // deleting element from vector
    // pops element from the end

    // v.pop_back();
    
    // The last element is modified. Concurrently accessing or modifying other elements is safe, although iterating ranges that include the removed element is not.
    // thats why if we try to print the vector till deleted index it shows rhe poped element to .

    // cout<<"size of the vector after deletion "<<v.size()<<endl;
    
    // for (int i=0;i<6;i++)
    // {
    //     cout<<v[i];
    //     cout<<endl;
    // }
    // cout<<v.size();

    // vector<int>arr{5,2};
    


    //  to clear or delete all the elements from the vector
    // v.clear();  
    // it clears all elemnt and size =0 but capacity doesnt shrink

    //printing using  for each loop
    // for(auto it:v)
    // {
    //     cout<<it<<endl;
    // }

    // question 
    // int arr[]={-7,23,45,-6,100,5,78};
    // int n=7,j=0;

    // for(int i=0;i<n;i++)
    // {
    //     if (arr[i]<0 )
    //     {
    //         swap(arr[i],arr[j]);
    //         j++;
    //     }
    // }

    // cout<<"output array "<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<"  ";

    // }
    // cout<<endl;

// sorting 0,1,2 by using 2 pointer approach 

    // int arr[]={0,1,0,2,0,2,1,0,2,0,1};
    // int n=11,i=0;

    // int l=0,r=n-1;
    // while(l<r && i<r)
    // {
    //     if(arr[i]==0)
    //     {
    //         swap(arr[i],arr[l]);
    //         l++;
    //         i++;
    //     }
    //     else if(arr[i]==2)
    //     { 
    //         swap(arr[i],arr[r]);
    //         r--; 
    //         // don't inceace the traversing index here as we havent check what hais come here after swaping(0,1).
    //         // i++;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<"  ";
    // }
    // cout<<endl;

    // rotating an array 

    // int n=6,k=3;
    // int arr[]={10,20,30,40,50,60};
    // int temp[n];

    // for(int i=0;i<n;i++)
    // {   int f =(i+k)%n;
    //     temp[f]=arr[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     arr[i]=temp[i];
    // }
    // // arr=temp;
    // // not working
    

    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<"  ";
    // }
    // cout<<endl;

// rotating an 2d array by 90degree.


    // int mat[3][3] ={ 1,2,3,4,5,6,7,8,9};
    // int num=3;
    // for (int m=0;m<num;m++)
    // {
    //     for (int n=0;n<m+1;n++)
    //     {
    //         swap(mat[m][n],mat[n][2-m]);
    //     }
    // }

    // for (int i=0;i<num;i++)
    // {
    //     for (int j=0;j<num;j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }

    //     cout<<endl;
    // }


    int inp[3][3]={1,2,3,4,5,6,7,8,9};
    int out[3][3]={7,4,1,8,5,2,9,6,3};

    cout<<"input matrix "<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            cout<<inp[i][j]<<"  ";

        }
        cout<<endl;
        
    }
    cout<<"desired output "<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            cout<<out[i][j]<<"  ";

        }
        cout<<endl;
        
    }

    


}