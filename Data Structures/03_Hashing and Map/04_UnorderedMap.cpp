#include <iostream>
#include<unordered_map>
using namespace std;
int main(){
    //It gives unordered Sequence
 //MEMBER FUNCTION OF UNORDERED MAP
    //Insertion , Deletion , Searching (Average Case T.C -> O(1) )
    //(Worst Case T.C -> O(n) )
    unordered_map<int , string> um;
    um.insert(make_pair(123 , "Rohit"));
    um[124]="ABC";
    um.insert(make_pair(120, "PQyge"));
    //Printing the Map
    for(auto i : um){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //Using Find Member Function
    int key = 123;

    // Use find()
    auto it = um.find(key);

    if (it != um.end()) {
        cout << "Key found: " << it->first << " -> " << it->second << endl;
    } else {
        cout << "Key not found." << endl;
    }

   


return 0;
}