//queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    for(int i=0;i<10;i++){
        int num;
        cin>>num;
        q.push(num);//pushing element to the queue
    }
    cout<<q.front()<<endl; // element which is in the front or which comes frist
    cout<<q.back()<<endl;//element which is in the back or which comes last
    q.pop();
    cout<<q.front()<<endl;
    cout<<"size"<<q.size()<<endl;//return the size of queue
    cout<<q.empty()<<endl;//reutrn true is queue is empty


}