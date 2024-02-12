#include <bits/stdc++.h> 
int stringMania(int n, int m, string str1, string str2) {

    for(int i=0; i<min(n, m); i++){

        if(str1[i] != str2[i]) {

            return str1[i] > str2[i] ? 1 : -1;

        }

    }

 

    if(n > m) {

        return 1;

    } else if (n < m) {

        return -1;

    }

 

    return 0;

}
