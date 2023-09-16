#include<bits/stdc++.h>

string reverseString(string &s){

    int n=s.size();

    vector<string> t;

    string ch="";

    for(int i=0;i<n;i++){

        if(s[i]==' '){

            if(ch.size()>0)

                t.push_back(ch);

            ch="";

        }

        else{

            ch+=s[i];

        }

    }

    if(ch.size()>0)

        t.push_back(ch);

    s="";

    for(int i=t.size()-1;i>=0;i--){

        s+=t[i];

        s+=" ";

    }

    return s;

}
