// Problem Link - https://www.codingninjas.com/studio/problems/encode-the-message_699836
#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    string temp;
    int count = 0;
    for (int i = 0 ; i < message.length();i++){
        if (message[i] == message[i+1])count++;
        else {
            temp.push_back (message[i]);
            string str = to_string(count+1);
            temp.append(str);
            count = 0;
        }
    }
    return temp;
}
