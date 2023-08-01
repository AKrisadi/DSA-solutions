// Problem Link - https://www.codingninjas.com/studio/problems/painter-s-partition-problem_1089557
bool isPossible (vector<int> &boards,int k,int mid) {
    int pCount = 1;
    int boardsPaint = 0;


    for (int i = 0;i<boards.size ();i++) {


        if (boardsPaint + boards[i] <= mid) {
            boardsPaint += boards[i];
        }
        else {
            pCount++;
            if (pCount > k || boards[i] > mid) return false;
            boardsPaint = boards[i];
        }
    }
    return  true;
}




int findLargestMinDistance(vector<int> &boards, int k)
{
    int l = 0;
    int h = 0;
    int sum = 0;
    int ans = -1;
    for (int i=0;i<boards.size();i++) sum += boards[i];

    h = sum;

    while (l <= h) {
        
        int mid = l + (h - l ) / 2;

        if (isPossible (boards,k,mid) ) {
            ans = mid;
            h = mid - 1;
        }

        else {

          l = mid + 1;
        }
    }

    return ans;
}
