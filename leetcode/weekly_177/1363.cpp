class Solution {
public:
    string dequeue(queue<int> q0, queue<int> q1, queue<int> q2, int sum){
        vector<int> ds;
        if(sum % 3 == 1){
            if(q1.empty()){
                if(q2.size() < 2){
                    return "";
                }
                q2.pop(); q2.pop();
            }
            else q1.pop();
        }
        if(sum % 3 == 2){
            if(q2.empty()){
                if(q1.size() < 2){
                    return "";
                }
                q1.pop(); q1.pop();
            }
            else q2.pop();
        }
        while(!q1.empty()){
            ds.push_back(q1.front()); q1.pop();
        }
        while(!q2.empty()){
            ds.push_back(q2.front()); q2.pop();
        }
        while(!q0.empty()){
            ds.push_back(q0.front()); q0.pop();
        }
        string ret = "";
        sort(ds.begin(), ds.end(), greater<int>());
        for(auto d: ds){
            ret += d+'0';
        }
        if(ret[0] == '0') return "0";
        return ret;
    }
    
    string largestMultipleOfThree(vector<int>& digits) {
        sort(digits.begin(), digits.end());
        int sum = 0;
        queue<int> q1, q2, q0;
        for(auto& d: digits){
            sum += d;
            if(d%3 == 1) q1.push(d);
            if(d%3 == 2) q2.push(d);       
            if(d%3 == 0) q0.push(d);
        }
        return dequeue(q0, q1, q2, sum);
    }
};
