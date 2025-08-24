//datastructure the keep key value pair 
// normal map store value in sorted form of keys
// in unordered map no sorted
//map is not in continous form 
//map keep pair and store other pair at any memory location and each pair in connected to other
//keys ar unique in maps
//inserting and rending time complexity is log(n)
//map.find to find some value which return iterator if value do not elxist it return m.end+1 iterator
// map.erase (key or iterator) it delete the item
//map.clear to clear the map

// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string>m;
//     m[1]="abc";
//     m[5]="cdc";
//     m.insert({4,"afg"});

    // for(auto i:m){
    //     cout<<i.first<<":"<<i.second<<" ";
    // }
   
    // for(auto it=m.begin();it!=m.end();it++){
    //     cout<<(*it).first<<":"<<(*it).second<<" ";
    // }

     // map<int,string> :: iterator it;
    // for(it=m.begin();it!=m.end();it++)
    // {
    //     cout<< (*it).first<<":"<<(*it).second <<" ";
    // }
    // cout<<endl;
// }