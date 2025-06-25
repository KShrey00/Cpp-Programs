#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int> arr, int m);
bool isValid(vector<int> arr, int m , int n, int mid);

int main(){
    vector <int> arr{2,3,4,6,5};
    int m=4; //number of painters
    cout<<Partition(arr, m);
}

int Partition(vector<int> arr, int m){
    int n = arr.size();
    int st=0, en=0;
    for (int i : arr){
        st = max(st,i); //max partition of a wall 
        en+=i; // total partitions
    }
    
    int ans=0;
    while(st<=en){
        int mid = st + (en - st)/2;
        if (isValid(arr,m,n,mid)){
            ans = mid;
            en = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}
bool isValid(vector<int> arr, int m , int n, int mid){
    int part=0, worker=1;
    for ( int i: arr){
        if ( part + i <= mid){
            part+=i;
        }
        else{
            part=0;
            worker++;
        }
    }
    if (worker <= m) return true;
    else return false;
}