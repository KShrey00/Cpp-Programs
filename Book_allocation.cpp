#include<iostream>
#include<vector>
using namespace std;

int BookAllocation(vector<int> arr,int m);
bool isValid(vector<int> arr, int n, int m, int mid); //to check if the allocation is valid

int main(){
    vector<int> arr{2,3,4,5,6,7};
    int m=3;
    cout<<BookAllocation(arr,m);
}

bool isValid(vector<int> arr, int n, int m, int mid){
    int stu=1, pages=0;
    for (int i=0; i<n; i++){
        if (arr[i]>mid) return false;
        if ( pages + arr[i] <= mid){
            pages+=arr[i];
        }
        else{
            stu++;
            pages=0;
        }
    }
    if (stu > m) return false;
    else return true;
}

int BookAllocation(vector<int> arr,int m){
    
    int n=arr.size();
    int st=0, en=0;
    for (int pages : arr) {
        st = std::max(st, pages); // Find max pages in a single book
        en += pages; // Sum total pages
    }

    int ans=-1;
    while( st<=en){
        int mid = st + (en - st)/2;
        if (isValid(arr,n,m,mid)){
            ans = mid;
            en = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}