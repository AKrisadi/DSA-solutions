// Problem Link - https://www.codingninjas.com/studio/problems/string-reverse_3210207?leftPanelTab=0
#include <bits/stdc++.h> 

string stringReverse(string S) {
    // Write your code here.
    int i = 0;
    int j = S.size () - 1;
    while (i<j) {
        swap (S[i++],S[j--]);
    }
    return S;
}
