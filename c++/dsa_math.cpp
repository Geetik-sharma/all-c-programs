#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

// prime number
// bool prime_check(int number);
// int main(){
//    int target;
//    cin>>target;
//    int count=0;
//    for(int i=0;i<target;i++){
//         if(prime_check(i)){
//             count++;
//         }
//    }
//    cout<<count<<endl;
// }
// bool prime_check(int number){
//     if (number==0 || number==1){
//         return false;
//     }
//     int root=sqrt(number);
//     for(int i=2;i<=root;i++){
//         if(number%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// better methode Sieve of Eratosthenes,
// int main(){
//     int target;
//     cin>>target;
//     vector<bool>prime(target+1,true);
//     prime[0]=prime[1]=false;
//     int count=0;
//     for(int i=2;i<target;i++){
//         if(prime[i]){
//             count++;
//             for (int j=2*i;j<target;j=j+i){
//                 prime[j]=false;
//             }
//         }
//     }
//     cout<<count<<endl;
// }

// GCD
// int GCD(int a,int b);
// int main(){
//     int a,b;
//     cout<<"enter the first number\n";
//     cin>>a;
//     cout<<"enter the second number"<<endl;
//     cin>>b;
//     cout<<"gcd of "<<a<<", "<<b<<" is "<<GCD(a,b)<<endl;
// }
// int GCD(int a, int b){
//     if(b==0){
//         return a;
//     }
//     return GCD(b,a%b);
// }

// FAST EXPONENTIATION
// 1. Binary Exponentiation
int main(){
    long long result=1;
    long long number,power;
    cin>>number;
    cin>>power;
    while(power>0){
        if(power & 1){
            result *= number;
            cout<<"reuslt = "<<result<<endl;
        }
        number *= number;
        cout<<"number = "<<number<<endl;
        cout<<"power = "<<power<<endl;
        power = power >> 1;
        cout<<endl;
    }
    cout<<result<<endl;
}