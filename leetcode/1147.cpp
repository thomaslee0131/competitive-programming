class Solution {
public:
    int longestDecomposition(string text) {
        int len=text.length();
        int ans=0;
        int cut=1,l=0,r=len-1;
        while(l<=r){
            if(cut*2>len){
                ans++;
                break;
            }
            if(text.substr(l,cut)==text.substr(r-cut+1,cut)){
                l+=cut;
                r-=cut;
                ans+=2;
                len-=cut*2;
                cut=1;
            }
            else cut++;
        }
        return ans;
    }
};
