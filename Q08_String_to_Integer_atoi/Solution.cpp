/*==============2022_12_09===========================
myAtoi(string s) procedures:
1.read and ignore any blank space from begining

2.check if the next char is an + or -, read in for determine the num negative/positive

3.read in next the char until the next none-digit char or the end of the the input is reached.
  ignore the rest of the string

4.Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, 
  then the integer is 0. Change the sign as necessary (from step 2).

5.If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer
 so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, 
 and integers greater than 231 - 1should be clamped to 231 - 1.

6.Return the integer as the final result.

====================================================*/

class Automaton {
    string state = "start";
    unordered_map<string, vector<string>> table = {
        {"start", {"start", "signed", "in_number", "end"}},
        {"signed", {"end", "end", "in_number", "end"}},
        {"in_number", {"end", "end", "in_number", "end"}},
        {"end", {"end", "end", "end", "end"}}
    };

    int get_col(char c) {
        if (isspace(c)) return 0;
        if (c == '+' or c == '-') return 1;
        if (isdigit(c)) return 2;
        return 3;
    }
public:
    int sign = 1;
    long long ans = 0;

    void get(char c) {
        state = table[state][get_col(c)];
        if (state == "in_number") {
            ans = ans * 10 + c - '0';
            ans = sign == 1 ? min(ans, (long long)INT_MAX) : min(ans, -(long long)INT_MIN);
        }
        else if (state == "signed")
            sign = c == '+' ? 1 : -1;
    }
};

class Solution {
public:
    int myAtoi(string str) {
        Automaton automaton;
        for (char c : str)
            automaton.get(c);
        return automaton.sign * automaton.ans;
    }
};