//finding square root using binary search
float precision(float basenum,int num,int precision_place);
int main(){
    int num;
    cout<<"enter the number\n";
    cin>>num;
    int st=0,end=num;
    int ans=INT_MIN;
    while (st<=end)
    {
        int mid=st+(end-st)/2;
        if((mid*mid)>num){
            end=mid-1;
        }
        else if((mid*mid)<num){
            ans=max(ans,mid);
            st=mid+1;
        }
        else {
            ans=mid;
            break;
        }
    }
    int precision_place;
    cout<<"ente the number of palace after decimal\n";
    cin>>precision_place;
    float precise=precision(ans,num,precision_place);
    cout<<precise<<endl;
}
float precision(float basenum,int num,int precision_place){
    float add=1;
    for(int i=1;i<=precision_place;i++){
        add/=10;
        while(((basenum+add)*(basenum+add))<num){
            basenum+=add;
        }
    }
    return basenum;
}