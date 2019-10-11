class MajorityChecker {
public:
    using Node=pair<int,int>;// {type, number}

    static const int MAXN=20005;

    Node merge(const Node &a, const Node &b){
        if(a.first==b.first){
            return {a.first, a.second+b.second};
        }
        if(a.second > b.second){
            return {a.first, a.second-b.second};
        }
        return{b.first, b.second-a.second};
    }

    map<int, vector<int>>cnt;
    vector<int>a;
    Node seg[MAXN*4];

    void build(int o, int l, int r){
        if(l==r){
            seg[o]={a[l],1};
            return;
        }
        int mid=(l+r)/2;
        build(o*2, l, mid);
        build(o*2+1, mid+1, r);
        seg[o]=merge(seg[o*2],seg[o*2+1]);
    }

    Node query(int o, int l, int r, int L, int R){
        if(l>=L && r<=R){
            return seg[o];
        }
        if(l>R  ||  r<L){
            return {0,0};
        }
        int mid=(l+r)/2;
        Node ql=query(o*2, l, mid, L, R);
        Node qr=query(o*2+1, mid+1, r, L, R);
        return merge(ql,qr);
    }
    
    void build_counter(const vector<int>& arr){
        for(int i=0;i<arr.size();i++){
            cnt[arr[i]].push_back(i);
        }
    }

    MajorityChecker(vector<int>& arr) {
        a=move(arr);
        build(1, 0, a.size()-1);
        build_counter(a);
    }
    
    int query(int left, int right, int threshold) {
        Node res=query(1, 0, a.size()-1, left, right);
        int target=res.first;
        vector<int>::iterator low,up;
        vector<int> &v=cnt[target];
        low=lower_bound (v.begin(), v.end(), left);
        up=upper_bound (v.begin(), v.end(), right);
        if(up-low>=threshold)
            return target;
        else
            return -1;
    }
};

/**
 * Your MajorityChecker object will be instantiated and called as such:
 * MajorityChecker* obj = new MajorityChecker(arr);
 * int param_1 = obj->query(left,right,threshold);
 */
