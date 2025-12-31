#include<iostream>
using namespace std;
int main()
{
    // //pointers are special variables which store the address of another variable
    // //why we need pointers?
    // //
    // //address of operator "&" use to store or see the address of variable
    // //value at operator "*" gives the value at that address 
    // //address are stored in hexadecimal format
    // int num=10;
    // // cout<<"address of num is - "<<&num<<endl;
    // int *ptr=&num;//ptr is pointer store the address of num 
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;//now we are using value at operator to get value at address ptr
    // //verifing the si<<ze 
    // cout<<"size of variable " <<sizeof(num)<<endl;
    // cout<<"size of pointer "<<sizeof(ptr)<<endl;
    int *p=0;
    cout<<*p<<endl;
}