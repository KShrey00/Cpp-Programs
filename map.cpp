#include<iostream>
#include<map>
using namespace std;

int main(){

    map <string, int> m;

    m["tv"] = 100;
    m["phone"] = 255; //if key is repeated the value will be updated and every key will always be unique in map
    m["phone"] = 200;
    m["laptop"] = 300;
    m["smartwatch"] = 400;

    m.insert({"camera",500});
    m.emplace("fitbit",600);
    cout<<"count "<<m.count("laptop")<<endl; //returns the number of times "laptop" occurs
    cout<<m["phone"]<<endl; //returns the value of the keyword
    m.erase("tv"); //erases the mentioned key and val from the map

    //map sorts the data automatically in ascending order by keys

    for (auto val : m){
        cout<<val.first<<" "<<val.second<<endl;
    }

    if (m.find("camera") != m.end()) // find returns the iterator of the key if found 
        cout<<"found"<<endl;
    else //and returns the iterator next to the last key if not found
        cout<<"not found"<<endl;

    return 0;
}