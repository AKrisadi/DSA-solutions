// Problem Link - https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118784/offering/1381079
#include <iostream>
using namespace std;

int main() {
    //Write your code here
     int n, fact = 1;
    cin >> n;
    if (n < 0) {
        cout << "Error";
        return 0;
    }   
    else { 
        for (int i = 1; i <= n; ++i) { 
            fact = fact * i;
        }
    }
    cout << fact;
    return 0;
}
