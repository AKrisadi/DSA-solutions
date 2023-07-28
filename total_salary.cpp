// Problem Link  https://www.codingninjas.com/studio/guided-paths/basics-of-c/content/118784/offering/1381042
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int totsal , basic , allow ;
    float hra , da , pf ;

    char grade ;
    cin >> basic >> grade ;

    hra = 0.2*basic ;
    da = 0.5*basic ;
    pf = 0.11*basic ;

    if(grade == 'A'){
        allow = 1700 ;
        totsal = (basic + hra + da + allow) - pf ;
    }
    else if(grade == 'B'){
        allow = 1500 ;
        totsal = (basic + hra + da + allow) - pf ;
    }else {
        allow = 1300 ;
        totsal =round( basic + hra + da + allow - pf) ;
    }

    cout << totsal ;
    return 0;
    return 0;
}
