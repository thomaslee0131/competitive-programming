#include<iostream>
#include<vector>
using namespace std;
char cake[110][110];
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int r,c,h,v,choco=0;
        cin>>r>>c>>h>>v;
        vector <int> row;
        vector<int> column;
        row.push_back(0);
        column.push_back(0);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>cake[i][j];
                if(cake[i][j]=='@')choco++;
            }
        }
        if(choco==0){
            cout<<"Case #"<<I<<" :POSSIBLE"<<endl;
            continue;
        }
        cout<<v+1<<"  "<<h+1<<"  "<<choco<<endl;
        if(choco%(v+1)!=0||choco%(h+1)!=0){
            cout<<"Case #"<<I<<" :IMPOSSIBLE"<<endl;
            continue;
        }
        int chn=0;
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                if(cake[j][i]=='@')chn++;
            }
            if(chn==choco/(v+1)){
                column.push_back(i+1);
                chn=0;
            }
        }

        chn=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(cake[i][j]=='@')chn++;
            }
            if(chn==choco/(h+1)){
                row.push_back(i+1);
                chn=0;
            }
        }
        /*for(int i=0;i<row.size();i++){
            cout<<row[i]<<"  ";
        }
        cout<<endl;
        for(int i=0;i<column.size();i++){
            cout<<column[i]<<"  ";
        }
        cout<<endl;*/
        if(row.size()-2!=h||column.size()-2!=v){
            cout<<"Case #"<<I<<" :IMPOSSIBLE"<<endl;
            continue;
        }
        bool z=true;
        for(int i=0;i<row.size()-1;i++){
            for(int j=0;j<column.size()-1;j++){
                chn=0;
                for(int k=row[i];k<row[i+1];k++){
                    for(int l=column[j];l<column[j+1];l++){
                        if(cake[k][l]=='@')chn++;
                    }
                }
                if(chn!=choco/(h+1)/(v+1))z=false;
            }
        }
        if(z==true)cout<<"Case #"<<I<<" :POSSIBLE"<<endl;
        else cout<<"Case #"<<I<<" :IMPOSSIBLE"<<endl;
    }
}
