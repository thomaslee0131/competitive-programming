class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int p=start;
        int ans1=0;
        while(p!=destination){
            ans1+=distance[p];
            p++;
            p%=distance.size();
        }
        p=start-1;
        int ans2=0;
        while(p!=destination-1){
            if(p==-1){
                p=distance.size()-1;
            }
            ans2+=distance[p];
            p--;
        }
        return min(ans1, ans2);
    }
};
