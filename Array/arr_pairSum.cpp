#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n);
void insertionSort(int arr[], int n);
int main()
{
    int n, num;
    cin>>n>>num;
    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    insertionSort(arr,n);//sorting the array using insertion sort
    int st=0, en=n-1;
    while (st<en)
    {
        if (arr[st]+arr[en] > num)
            en--;
        else if (arr[st]+arr[en] < num)
            st++;
        else
        {
            cout<<st<<" "<<en<<endl;
            break;
        }
    }

    return 0;
}

void BubbleSort(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++){
            if (arr[i]>arr[j])
            {
                int a=arr[i];
                arr[i]=arr[j];
                arr[j]=arr[i];
            }
        }
    }
}
void insertionSort(int arr[], int n)
{
    for (int i=1; i<n; i++)
    {
        int curr=arr[i];
        int j=i-1;
        while (j>0 && arr[j]>curr)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}

