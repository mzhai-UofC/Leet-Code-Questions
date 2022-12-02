class Solution {
public:
    bool isPalindrome(string s) {
        //firstly filter all the ch except alphabet && covert to lowercase => a new string Ostring
        string Ostring;
        for(char ch: s){
            if(isalnum(ch)){
                Ostring+=tolower(ch);
            }
        }
        
        //secondly reverse the Ostring to Rstring, return Ostring==Rstring
        //or we could use 2 pointers
        int i=0, j=Ostring.size()-1;
        while(i<j){
            if(Ostring[i]!=Ostring[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

//TC:O(S) S stands for the length of the string
//SC:O(S)