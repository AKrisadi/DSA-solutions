
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int S,E,W;
    cin>>S>>E>>W;

    for(int i=S;i<E;i+=W){
        cout<<i<<" "<<((i-32)*5/9)<<endl;
    }
    return 0;
}
