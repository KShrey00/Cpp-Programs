#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]={{0,1,1}, {1,0,1}, {1,1,1}};
    int row[3]={0}, col[3]={0};
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
  
    for (int i=0; i<3; i++)
    {
        if (row[i]==1)
        {
            for (int a=0; a<3; a++)
            {
                arr[i][a]=0;
            }
        }
        if (col[i]==1)
        {
            for (int a=0; a<3; a++)
            {
                arr[a][i]=0;
            }
        }
    }
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}