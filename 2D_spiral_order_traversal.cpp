#include<iostream>
using namespace std;
//spiral order matrix traversal
int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }
    int rst=0, ren=row-1;
    int cst=0, cen=col-1;
    while (rst<=ren && cst<=cen)
    {
        //for row start
        for (int i=cst; i<=cen; i++)
        {
            cout<<arr[rst][i]<<" ";
        }
        rst++;
        cout<<endl;
        //for col end
        for (int i=rst; i<=ren; i++)
        {
            cout<<arr[cst][i]<<" ";
        }
        cen--;
        cout<<endl;
        //for row end
        for (int i=cen; i>=cst; i--)
        {
            cout<<arr[rst][i]<<" ";
        }
        ren--;
        cout<<endl;
        //for col start
        for (int i=ren; i>=rst; i--)
        {
            cout<<arr[rst][i]<<" ";
        }
        cst++;
        cout<<endl;

    }

}