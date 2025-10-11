#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1={1,2,6,8,9};
    vector<int>v2={3,4,5,7};
    vector<int>v3;
    int st1=0;
    int st2=0;
    while (st1<v1.size() && st2<v2.size())
    {
        if(v1[st1]<v2[st2]){
            v3.push_back(v1[st1]);
            st1++;
        }
        else{
            v3.push_back(v2[st2]);
            st2++;
        }
    }
        while (st1 < v1.size()) {
        v3.push_back(v1[st1]);
        st1++;
    }
    for(int i: v3){
        cout<<i<<", ";
    }
    cout<<endl;

}