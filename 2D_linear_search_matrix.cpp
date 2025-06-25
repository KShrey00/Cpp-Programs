#include<bits/stdc++.h>
using namespace std;
//linear search in a sorted matrix

int main()
{
    int n1,n2,num;
    cin>>n1>>n2>>num;
    int arr[n1][n2];
    
    for (int i=0; i<n1; i++)
    {
        for (int j=0; j<n2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int i=0, j=n2-1;
    while (i<n1 && j>0)
    {
        int curr=arr[i][j];
        if (curr==num)
        {
            cout<<++i<<","<<++j;
            return true;
        }
        else if (curr > num)
            j--;
        else
            i++;
    }

}