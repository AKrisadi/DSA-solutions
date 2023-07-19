// Problem Link - https://www.codingninjas.com/studio/problems/count-words_1262346
int countWords(string input) {
    // Write your code here
    int count = 0 ;
    for (int i = 0 ; i < input.length();i++) {
        if (input [i] == ' ') count ++;
    }
    return count+1;
}
