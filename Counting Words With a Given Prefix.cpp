// Problem Link
// https://leetcode.com/problems/counting-words-with-a-given-prefix/description/


// Source Code

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;

        for(int i = 0; i <words.size();i++){
            string str = words[i];
            int j = 0;
            for(char c : str){
                if(c == pref[j]){
                    j++;
                }else{
                    break;
                }
            }

            if(j == pref.length()){
                count++;
            }
        }

        return count;
    }
};