class Solution {
public:
    void rev(string &s, int start){
        stack<char> stk;
        int lp=0,rp=0;
        for(int i=start;i<s.length();i++){
            if(s[i]=='('){
                lp++;
                if(lp-1==rp)
                    rev(s, i+1);
            }
            else if(s[i]==')'){
                rp++;
                if(lp+1==rp){
                    for(int j=start;j<i;j++){
                        if(s[j]=='(' || s[j]==')'){
                            continue;
                        }
                        s[j]=stk.top();
                        stk.pop();
                    }
                    return;
                }
            }
            else{
                stk.push(s[i]);
            }
        }
    }
    string reverseParentheses(string s) {
        int lp=0,rp=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){ 
                lp++;
                if(lp==rp+1)
                    rev(s,i+1);
            }
            if(s[i]==')'){
                rp++;
            }
        }
        s.erase(remove(s.begin(), s.end(), '('), s.end());
        s.erase(remove(s.begin(), s.end(), ')'), s.end());
        return s;
    }
};
