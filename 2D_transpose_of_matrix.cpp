#include<iostream>
using namespace std;
//transpose of a matrix

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            //swap
            int a=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=a;
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}