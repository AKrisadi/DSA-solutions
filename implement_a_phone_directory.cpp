#include <bits/stdc++.h>
vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr) {
    vector<vector<string>> ans;

    set<string> removeDuplicate;

    for(int i=0; i<contactList.size(); i++)
        removeDuplicate.insert(contactList[i]);
    
    //setting set back to vector
    contactList.clear();
    for(auto i=removeDuplicate.begin(); i!= removeDuplicate.end(); i++)
        contactList.push_back(*i);

    string temp;

    for(int i=0; i<queryStr.length(); i++){
        temp += queryStr[i];

        vector<string> holder;

        for(int a=0; a<contactList.size(); a++){
            string crntS = contactList[a];
            if(temp.length() > crntS.length())
                continue;
            
            int flag=1;
            for(int y=0; y<temp.length(); y++)
                if(temp[y] != crntS[y]){
                    flag =0;
                    break;
                }
            
            if(flag)
                holder.push_back(crntS);            
        }
        if(holder.size() !=0 ){
            sort(holder.begin(), holder.end());
            ans.push_back(holder);
        }
    }
    // cout<<ans.size()<<endl;
    return ans;
}
