// Problem Link - https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
int minAddToMakeValid(string s) {
        // Initialize two variables to track the number of opening and closing parentheses.
        int open = 0;
        int close = 0;

        // Iterate through the string `s`.
        for (int i=0;i<s.length();i++){

            // If the character is a `(`, increment `open`.
            if (s[i] == '(') open++;

            // Otherwise, if the character is a `)`, do the following:
            else{

                // If `open` is 0, increment `close`. This indicates that a closing parenthesis was found without a corresponding opening parenthesis.
                if (open == 0) close ++;

                // Otherwise, decrement `open`. This indicates that a closing parenthesis was found that matched an opening parenthesis.
                else open--;
            }
        }

        // Return the minimum number of parentheses that need to be added to make the string valid.
        return open+close;
}
