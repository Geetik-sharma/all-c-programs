int main(){
    vector<int>pages={10,20,30,40};
    int books=pages.size();
    int stu=2;
    int ans=INT_MAX;
    if(stu>books){
        cout<<"not possible"<<endl;
        return -1;
    }
    else{
        int max_pages=0,st=0;
        for(int i:pages){
            max_pages+=i;
        }
        int end=max_pages;
        while(st<=end){
            int mid=st+(end-st)/2;            
            if(validation(pages,stu,mid)){
                ans=min(ans,mid);
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
    }
    cout<<ans<<" is ans"<<endl;
}
bool validation(vector<int>&pages,int stu,int mid){
    int student=1,pages_alloted=0;
    for(int i=0;i<pages.size();i++){
        if(pages[i]>mid){
            return false;
        }
        if(pages_alloted+pages[i]<=mid){
            pages_alloted+=pages[i];
        }
        else{
            student++;
            pages_alloted=pages[i];
        }
    }
    if(student<=stu){
        return true;
    }
    else{
        return false;
    }
}