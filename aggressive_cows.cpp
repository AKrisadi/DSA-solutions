// Problem Link - 
bool isPossible (vector<int> &stalls, int k,int mid) {

    int cowCount = 1;
    int lastPosi = stalls[0];

    for (int i=0;i<stalls.size ();i++) {

      if (stalls[i] - lastPosi >= mid) {
        cowCount++;

        if (cowCount == k) return true;
        lastPosi = stalls[i];
      }
        
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int s = 0;

    sort (stalls.begin (), stalls.end ());
    int e = 0;
    int maxi = 0;
    for (int i=0;i<stalls.size();i++)
    maxi = max (maxi,stalls[i]);
    

    int ans = -1 ;

    e = maxi;

    while (s <= e) {
        int mid = s + ( e - s ) / 2;

        if (isPossible (stalls,k,mid) ) {
            ans = mid;
            s = mid + 1;
        }

        else {
            e = mid - 1;
        }

    }
    return ans;

}
