class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        vector<int> stk((n + 1) / 2);
        int index = -1;
        for (int i = 0; i < n; i++) {
            string& token = tokens[i];
            if (token.length() > 1 || isdigit(token[0])) {
                index++;
                stk[index] = atoi(token.c_str());
            } else {
                switch (token[0]) {
                    case '+':
                        index--;
                        stk[index] += stk[index + 1];
                        break;
                    case '-':
                        index--;
                        stk[index] -= stk[index + 1];
                        break;
                    case '*':
                        index--;
                        stk[index] *= stk[index + 1];
                        break;
                    case '/':
                        index--;
                        stk[index] /= stk[index + 1];
                        break;
                }
            }
        }
        return stk[index];
    }
};
