class Solution {
public:
    struct Transac{
        string name;
        int tim;
        int price;
        string city;
    };
    vector<string> ans;
    vector<string> invalidTransactions(vector<string>& transactions) {
        vector<Transac> transacs;
        for(string s: transactions){
            replace(s.begin(), s.end(), ',', ' ');
            stringstream ss(s);
            Transac temp;
            ss>>temp.name>>temp.tim>>temp.price>>temp.city;
            transacs.push_back(temp);
        }

        for(int i=0;i<transacs.size();i++){
            if(transacs[i].price>1000){
                ans.push_back(transactions[i]);
                continue;
            }
            for(int j=0;j<transacs.size();j++){
                if(i==j) continue;
                if(abs(transacs[i].tim-transacs[j].tim)<=60 && transacs[i].name==transacs[j].name && transacs[i].city!=transacs[j].city){
                    ans.push_back(transactions[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
