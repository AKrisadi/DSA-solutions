// Problem Link - https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118519/offering/1376725?leftPanelTab=0
int countBits(int n)
{
    int cnt=0;
    while(n)
    {
        if(n&1) cnt++;
        n=n>>1;
    }
    return cnt;
}
int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
