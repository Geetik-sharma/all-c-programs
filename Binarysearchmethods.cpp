#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
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
// int peak(vector<int>&arr){
//     //in  ountain array teh array is devided into two parts one is sorted and the other is unsorted 
//     //left part is sorted and right is unsorted since mountain array have only one peak
//     //ex:- [1,2,3,4,5,6,7,6,5,4,3,2,1]
//     int st=0,end=arr.size()-1;
//
//     while (st<=end)
//     {
//         int mid=st+(end-st)/2;
//         if(arr[mid]<arr[mid+1]){        
//             st=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return st;
// }
// int main(){
//     vector<int>arr={0,5,4,3,2};
//     cout<<"peak index: "<<peak(arr)<<endl;
//     cout<<endl;
// }

// pivot element in array 
//in rotated sorted array element from which the element should start is pivot element
// int main(){
//     vector<int>arr={7,9,10,11,0,2,3,4};
//     int st=0,end=arr.size()-1;
//     int pivot=INT_MAX; 
//     while(st<end){
//         int mid=st+(end-st)/2;
//         if(arr[mid]>=arr[0]){
//             st=mid+1;
//         }
//         else if( arr[mid]<arr[0]){
//             pivot=min(pivot,arr[mid]);
//             end=mid;
//         }
//     }    
//     cout<<st<<endl;
//     cout<<pivot<<endl;
//     cout<<endl;
// }

//search in rortated sorted array
// int main(){
//     vector<int>arr={7,9,10,1,2,3};
//     int target;
//     cout<<"enter target \n";
//     cin>>target;
//     int st=0,end=arr.size()-1;
//     while(st<end){
//         int mid=st+(end-st)/2;
//         if(arr[mid]>=arr[0]){
//             st=mid+1;
//         }
//         else if(arr[mid]<arr[0]){
//             end=mid;
//         }
//     }
//     int pivot=st;//making pivot starting element for right sorted array
//     end=arr.size()-1;// moving end to the end of the array
//     if(target>=arr[pivot] && target<=arr[end]){
//         cout<<"right"<<endl;
//         //target in right side 
//         int st=pivot,end=arr.size()-1;
//         while (st<=end){
//             int mid=st+(end-st)/2;
//             if(arr[mid]==target){
//                 cout<<mid<<endl;
//                 break;
//             }
//             else if(arr[mid]>target){
//                 end=mid-1;
//             }
//             else if(arr[mid]<target){
//                 st=mid+1;
//             }
//         }
//     }
//     else{
//         //target in left sorted  side
//         int st=0,end=pivot-1;
//         while (st<=end){
//             int mid=st+(end-st)/2;
//             if(arr[mid]==target){
//                 cout<<mid<<endl;
//                 break;
//             }
//             else if(arr[mid]>target){
//                 end=mid-1;
//             }
//             else if(arr[mid]<target){
//                 st=mid+1;
//             }
//         }
//     }
// }

//finding square root using binary search
// float precision(float basenum,int num,int precision_place);
// int main(){
//     int num;
//     cout<<"enter the number\n";
//     cin>>num;
//     int st=0,end=num;
//     int ans=INT_MIN;
//     while (st<=end)
//     {
//         int mid=st+(end-st)/2;
//         if((mid*mid)>num){
//             end=mid-1;
//         }
//         else if((mid*mid)<num){
//             ans=max(ans,mid);
//             st=mid+1;
//         }
//         else {
//             ans=mid;
//             break;
//         }
//     }
//     int precision_place;
//     cout<<"ente the number of palace after decimal\n";
//     cin>>precision_place;
//     float precise=precision(ans,num,precision_place);
//     cout<<precise<<endl;
// }
// float precision(float basenum,int num,int precision_place){
//     float add=1;
//     for(int i=0;i<=precision_place;i++){
//         add/=10;
//         while(((basenum+add)*(basenum+add))<num){
//             basenum+=add;
//         }
//     }
//     return basenum;
// }

//book allocaiton problem
// bool validation(vector<int>&pages, int stu,int mid);
// int main(){
//     vector<int>pages={10,20,30,40};
//     int books=pages.size();
//     int stu=2;
//     int ans=INT_MAX;
//     if(stu>books){
//         cout<<"not possible"<<endl;
//         return -1;
//     }
//     else{
//         int max_pages=0,st=0;
//         for(int i:pages){
//             max_pages+=i;
//         }
//         int end=max_pages;
//         while(st<=end){
//             int mid=st+(end-st)/2;            
//             if(validation(pages,stu,mid)){
//                 ans=min(ans,mid);
//                 end=mid-1;
//             }
//             else{
//                 st=mid+1;
//             }
//         }
//     }
//     cout<<ans<<" is ans"<<endl;
// }
// bool validation(vector<int>&pages,int stu,int mid){
//     int student=1,pages_alloted=0;
//     for(int i=0;i<pages.size();i++){
//         if(pages[i]>mid){
//             return false;
//         }
//         if(pages_alloted+pages[i]<=mid){
//             pages_alloted+=pages[i];
//         }
//         else{
//             student++;
//             pages_alloted=pages[i];
//         }
//     }
//     if(student<=stu){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// merge two sorted array
// vector<int> merge(vector<int>&arr1,vector<int>&arr2);
// int main(){
//     vector<int>arr1={1,3,5,6,9};
//     vector<int>arr2={2,4,7,8};
//     vector<int>ans=merge(arr1,arr2);
//     for(int i : ans){
//         cout<<i<<",";
//     }
//     cout<<endl;
// }
// vector<int> merge(vector<int>&arr1,vector<int>&arr2){
//     int n1=arr1.size();
//     int n2=arr2.size();
//     vector<int>ans;
//     int i=0,j=0;
//     while(i<n1 && j<n2){
//         if(arr1[i]<arr2[j]){
//             ans.push_back(arr1[i]);
//             i++;
//         }
//         else{
//             ans.push_back(arr2[j]);
//             j++;
//         }
//     }
//     while(i<n1){
//         ans.push_back(arr1[i]);
//         i++;
//     }
//     while (j<n2)
//     {
//         ans.push_back(arr2[j]);
//         j++;
//     }
//     return ans;
// }

//moving zeros
// int main(){
//     vector<int>arr={0,1,0,3,12};
//     //variable to maintain zeros position
//     int posi=0;
//     for(int i=0 ;i<arr.size();i++){
//         if(arr[i]!=0){
//            swap(arr[i],arr[posi]);
//            posi++;
//         }
//     }
//     for(int i:arr){
//         cout<<i<<",";
//     }
//     cout<<endl;
// }

//rotating a array
// int main(){
//     vector<int>main={1,2,3,4,5,6,7,8,9};
//     vector<int>ans(main.size());
//     int k=3,m=0;
//     for(int i=0;i<main.size();i++){
//         if(k+i<main.size()){
//             ans[i+k]=main[i];
//         }
//         else{
//             ans[m]=main[i];
//             m++;
//         }
//     }
//     for(int i :ans){
//         cout<<i<<",";
//     }
//     cout<<endl;
// }

// //checking a array is rotated and sorted
// #define no cout<<"no"<<endl
// #define yes cout<<"yes"<<endl
// int main(){
//     vector<int>arr={3,4,5,1,2};
//     int count=0;
//     for(int i=1;i<arr.size();i++){
//         if(arr[i-1]>arr[i]){
//             count++;
//         }
//     }
//     if(count<=1){
//         yes;
//     }
//     else{
//         no;
//     }
// }

// sum of two arrays
int main(){
    vector<int>v1={4,5,1};
    vector<int>v2={3,4,5};
    vector<int>ans;
    int carry=0;
    int size_v1=v1.size()-1;
    int size_v2=v2.size()-1;
    while (size_v1>=0 && size_v2>=0)
    {
        if((v1[size_v1]+v2[size_v2])/10==0){
            int sum=(v1[size_v1]+v2[size_v2]);
            if(carry==0){
                ans.push_back(sum);
            }
            else{
                sum+=carry;
                ans.push_back(sum%10);
                carry=sum/10;
            }
        }
        else if((v1[size_v1]+v2[size_v2])/10>0){
            int sum=(v1[size_v1]+v2[size_v2]);
            if(carry>0){
                sum+=carry;
                ans.push_back(sum%10);
                carry=0;
            }
            else{
                ans.push_back(sum);
            }
            carry=(v1[size_v1]+v2[size_v2])/10;
        }
        size_v1--;
        size_v2--;
    }
    while (size_v1>=0)
    {
        ans.push_back(v1[size_v1]);
        size_v1--;
    }
    while (size_v2>=0)
    {
        ans.push_back(v2[size_v2]);
        size_v2--;
    }
    reverse(ans.begin(),ans.end());
    for(int i:ans){
        cout<<i<<",";
    }
    cout<<endl;
}


