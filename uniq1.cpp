#include<vector>
#include<iostream>
using namespace std;

struct Score{
    int num,math,chinese,english,phisics,chemistry,sum;
};

bool byId(const Score &a, const Score &b) {
    if(a.sum==b.sum){
        return a.math>b.math;
    }
    return a.sum > b.sum  ; 
}


int main(){
    vector<Score> scores;
    int n;
    cin>>n;
    while(n--){
        Score score;
        cin>>score.num>>score.chinese>>score.english>>score.math>>score.phisics>>score.chemistry;
        score.sum=score.chinese+score.english+score.math+score.phisics+score.chemistry;
        scores.push_back(score);
    }
    sort(scores.begin(),scores.end(),byId);
    
    for(int i=0;i<(int)scores.size();i++){
        cout<<scores[i].num<<endl;
    }
}
