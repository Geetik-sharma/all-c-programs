//agressive cows
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool valid(vector<int> &arr,int cows,int path,int mid);
int main(){
    vector<int>arr={1,2,8,4,9};
    int n=5,c=3;
    sort(arr.begin(),arr.end());
    int min_dis=1,max_dis=arr[arr.size()-min_dis];
    int ans=0;
    if(c>n){
        return -1;
    }
    while(min_dis<=max_dis){
        int mid=min_dis+(max_dis-min_dis)/2;
        if(valid(arr,c,n,mid)){
            ans=mid;
            min_dis=mid+1;
        }
        else{
            max_dis=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
bool valid( vector<int> &arr,int cows,int path,int mid){
    int c=0;
    int last_position=arr[0];
    for (int i=0;i<path;i++){
        if(arr[i]-last_position>=mid){
            c++;
            last_position=arr[i];
            
        }
    }
    if(c==cows){
        return true;
    }
    return false;
}