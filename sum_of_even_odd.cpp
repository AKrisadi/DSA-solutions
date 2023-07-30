// Problem Link - https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118784/offering/1381076?leftPanelTab=1
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n, even_sum = 0, odd_sum = 0;
    cin>>n;
    while(n!=0) {
        int temp = n%10;
        if (temp % 2 == 0)
            even_sum+=temp;
        else
            odd_sum+=temp;
        n=n/10;
    }
    cout << even_sum << " " << odd_sum << endl;
    return 0;
}
