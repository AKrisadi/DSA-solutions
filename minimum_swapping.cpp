int minimumSwap(vector<int> &arr, int n)
{
    // Write your code here.
    int z=0,o=0,cnt=0,cnt1=0,flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            z++;
            flag=1;
        }
        else if(flag==1){
            cnt+=z;
        }
    }
    flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            o++;
            flag=1;
        }
        else if(flag==1){
            cnt1+=o;
        }
    }
    return min(cnt,cnt1);
}
