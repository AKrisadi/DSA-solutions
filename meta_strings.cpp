// Problem Link - 
bool checkMeta(string &str1, string &str2)
{
    // Write your code here.
    int s1_len = str1.length();

   int s2_len = str2.length();

   if (s1_len != s2_len)

   return false;

   int prev = -1, curr = -1;

   int count = 0;

   for (int i=0; i<s1_len; i++) {

      if (str1[i] != str2[i]) {

         count++; // number of unmatched characters

         if (count > 2)

         return false;

         prev = curr;

         curr = i;

      }

   }

   return (count == 2 && str1[prev] == str2[curr] && str1[curr] == str2[prev]);

 
}
