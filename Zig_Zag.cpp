#include<iostream>

using namespace std;
int main(){

    int n;
    cout<<"Enter number of stars:";
    cin>>n;

    for (int i=1;i<=3;i++){
        
        for (int j=1; j<=n; j++){
            if ((j+i)%4==0){
                cout<<"* ";
            }
            else if (i==2 && j%4==0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}