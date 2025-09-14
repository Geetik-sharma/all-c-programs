#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1={1,2,3,4,5,6};
    int position=3;
    vector<int>reverse(v1.size());
    for(int i=0;i<v1.size();i++){
       if(i<=position){
        reverse.push_back(v1[i]);
       }
    }
    // int end=v1.size()-1;
    // while (position<end)
    // {
    //     reverse[position+1]=v1[end];
    //     position++;
    //     end--;
        
    // }
    
   for(int i: reverse){
        cout<<i<<", ";
    }
    cout<<endl;
}