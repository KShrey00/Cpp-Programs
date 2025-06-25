#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxDist(vector<int> arr, int m);
bool isValid(vector<int> arr, int m , int n, int mid);

int main(){
    vector<int> arr{1,3,4,6,2,5};
    int m=4;
    cout<<maxDist(arr, m);
}

int maxDist(vector<int> arr, int m){
    
    int n = arr.size();
    sort(arr.begin(), arr.end()); //sorting the array
    int mn=arr[0], minn=arr[0];
    for ( int i: arr){
        minn = min(minn, i); //minimum number
        mn = max(mn, i); //maximum number
    }

    int st = 1, en = mn - minn;
    int ans=-1;

    while ( st <= en){
        int mid = st + (en - st)/2;
        if ( isValid(arr, m, n, mid) ){
            ans=mid;
            st = mid + 1;
        }
        else{
            en = mid - 1;
        }
    }
    return ans;
}
bool isValid(vector<int> arr, int m , int n, int mid){
    int cows =1, lsp=arr[0];
    for ( int i=1; i<n; i++){
        if ( (arr[i] -lsp) >= mid ){
            cows++;
            lsp = arr[i];
        }
    }
    return cows>=m;
}

