bool match(string wild, string pattern)
    {
        // code here
         int i=0;
        int j=0;
        while(i<wild.size() && j<pattern.size()){
            if(wild[i]!=pattern[j] && wild[i]!='*' && wild[i]!='?'){
                return false;
            }else if(wild[i]!=pattern[j] && wild[i]=='?'){
                i++;
                j++;
            }else if(wild[i]!=pattern[j] && wild[i]=='*'){
                while(wild[i]=='*' || wild[i]=='?'){
                    i++;
                    j++;
                }
                while(pattern[j]!=wild[i]&&j<pattern.size()){
                    j++;
                }
            }else{
                i++;
                j++;
            }
        }
        if(i!=wild.size() || j!=pattern.size()) return false;
        return true;
    }
