#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int>::iterator it;

    for ( it = vec.begin(); it!=vec.end(); it++){
        cout<< *(it)<< " ";
    }
    cout<<endl;

    vector<int> vec2={1,3,5,7,9,2,4,6,8};
    vector<int> :: reverse_iterator it2;

    for (it2 = vec2.rbegin(); it2 != vec2.rend(); it2++){
        cout<< *(it2) <<" ";
    } 
    cout<<endl;
    
    vector<int> vec3 = {1,2,3,4,5};

    for ( auto it3 = vec3.begin(); it3!=vec3.end(); it3++){
        cout<< *(it3)<< " ";
    }
    cout<<endl;

    return 0;
}