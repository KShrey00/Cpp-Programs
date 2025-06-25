#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void SelectionSort(vector<int> arr);

int main(){
    vector<int> arr{2,4,3,5,9,1,7};
    SelectionSort(arr);

}
void SelectionSort(vector<int> arr){
    int n = arr.size();
    for (int i=0; i<n-1; i++){
        int si=i;
        for (int j=i+1; j<n; j++){
            if ( arr[i] < arr[j])//descending order
                si=j;
        }
        swap(arr[i] , arr[si]);
    }
    for (int i:arr){
        cout<<i<<" ";
    }
    return;
}
