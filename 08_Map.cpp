#include <iostream>
#include<map>
using namespace std;
//It contains key and value respectively
//It can have insert , emplace , count ,  erase  , find , size ,empty , erase
int main(){
    map<string , int>m;
    m["tv"]=100;
    m["camera"]=50;
    m["headPhones"]=100;
    //It is in Alphabectical Oreder
    //By default it has been sorted
    m.emplace("bottles" , 140);
    for(auto p : m){
        cout<<p. first<< " "<<p.second<<endl;
    }
    cout<<"Count is "<<m.count("bottles")<<endl;
    cout<<"Count is "<<m["bottles"]<<endl;
    cout<<"Count is "<<m.count("headPhones")<<endl;
    if(m.find("camera")!=m.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    //Other Map
    //1.Multi Map
    multimap<string , int > mm;
    mm.emplace("tv" , 100);
    mm.emplace("tv" , 100);
    mm.emplace("tv" , 100);
    // mm.erase("tv"); // all tv wuill delete
 mm.erase(mm.find("tv")); //One tv will delete
    for(auto p : mm){
        cout<<p. first<< " "<<p.second<<endl;
    }

return 0;
}