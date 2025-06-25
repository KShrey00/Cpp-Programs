#include<iostream>

using namespace std;
int main(){

    int n;
    cout<<"Enter number:";
    cin>>n;
    int a=1,c;
    for (int i=1; i<2*n; i++){
        if (i<=n){
            a++;
            c=n-a+1;
        }
        else{
            a--;
            c=n-a+1;
        }
        
        //if (a==n)


        
       
        for (int j=1; j<=n; j++){
            if (c>0){
                cout<<"  ";
                c--;
            }
            else
                cout<<"*   ";
        }
        cout<<endl;
        
    }
  

    return 0;
}