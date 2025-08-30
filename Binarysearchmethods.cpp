#include <iostream>
#include<vector>
using namespace std;

// //returning the first and last occurnace of an element is sorted array 
// //similar approach can use to find thte total number of occurance of a number in an array by getting the first and last index of target and subtracting first index from last index and adding 1 
//
// int rightmostposition(vector<int>& arr,int n, int k){
//     //arr is the sorted array n is the number of the elements k is the target element
//     int st=0,end=arr.size()-1;
//     int rightmost=-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(arr[mid]<k){
//             st=mid+1;
//         }
//         else if( arr[mid]>k){
//             end=mid-1;
//         }
//         else{
//             rightmost=mid;
//             st=mid+1;
//         }
//     }
//     return rightmost;
// }
// int leftmostposition(vector<int>& arr,int n, int k ){
//      //arr is the sorted array n is the number of the elements k is the target element
//     int st=0,end=arr.size()-1;
//     int leftmost=-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(arr[mid]<k){
//             st=mid+1;
//         }
//         else if( arr[mid]>k){
//             end=mid-1;
//         }
//         else{
//             leftmost=mid;
//             end=mid-1;
//         }
//     }
//     return leftmost;
// }
// int main(){
//     vector<int>arr={1,2,2,2,3,3,3,4,4,4,4,5,5}; 
//     int target=4;
//     pair<int,int>p={leftmostposition(arr,arr.size(),target),rightmostposition(arr,arr.size(),target)};
//     cout<<p.first<<","<<p.second<<endl;
// }


//peak index in mountain array
int peak(vector<int>&arr){
    //in  ountain array teh array is devided into two parts one is sorted and the other is unsorted 
    //left part is sorted and right is unsorted since mountain array have only one peak
    //ex:- [1,2,3,4,5,6,7,6,5,4,3,2,1]
    int st=0,end=arr.size()-1;

    while (st<=end)
    {
        int mid=st+(end-st)/2;
        if(arr[mid]<arr[mid+1]){
           
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return st;
}
int main(){
    vector<int>arr={0,5,4,3,2};
    cout<<"peak index: "<<peak(arr)<<endl;
    cout<<endl;
}