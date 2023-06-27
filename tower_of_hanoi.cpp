void helper(int n, int src, int des, int aux, vector<vector<int>> &ans)

{

    if(n==0)

        return;

    helper(n-1, src, aux, des, ans);

    ans.push_back({src, des});

    helper(n-1, aux, des, src, ans);

}
vector<vector<int>> towerOfHanoi(int n)
{
    //    Write your code here.
    vector<vector<int>> ans;

    helper(n,1,2,3,ans);

    return ans;
}
