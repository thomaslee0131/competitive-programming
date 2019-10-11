class Solution {
public:
    static const int N=100000;
    int par[N];
    vector<int> chld[N];
    bool seen[N];
    int find(int x){
        if(par[x]==x){
            return x;
        }
        else return par[x]=find(par[x]);
    }

    void merge(int u,int v){
        int ru=find(u);
        int rv=find(v);
        if(ru == rv) return;
        par[ru]=rv;
    }
    
    void query(string &s, int n){
        int r = find(n);
        string t="";
        sort(chld[r].begin(), chld[r].end());
        for(int ind: chld[r]){
            t+=s[ind];
        }
        sort(t.begin(), t.end());
        for(int i=0;i<chld[r].size();i++){
            seen[chld[r][i]]=1;
            s[chld[r][i]]=t[i];
        }
    }
    

    string smallestStringWithSwaps(string s, vector<vector<int>>& p) {
        for(int i=0;i<N;i++){
            par[i]=i;
        }
        for(int i=0;i<p.size();i++){
            merge(p[i][0], p[i][1]);
        }
        
        for(int i=0;i<s.length();i++){
            int r = find(i);
            chld[r].push_back(i);
        }
        
        for(int i=0;i<s.length();i++){
            if(!seen[i]){
                query(s, i);
            }
        }
        return s;
    }
};
