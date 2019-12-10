#include<iostream>
#include<vector>
using namespace std;
int recursion(vector<vector<int>>&field, vector<vector<bool>>& visited,int x, int a, int b, int& ans)
{
    if(x == field.size()-1 && a == b)
    {
        ans++;
        return ans;
    }
    if(a-1 >= 0 && field[x][a-1] == 0 && visited[x][a-1] == 0)
    {
        cout << "left" << x << " " << a << endl;
        visited[x][a-1] = 1;
        recursion(field,visited,x,a-1,b,ans);
        visited[x][a-1] = 0;
    }
//cout << field[0].size()-1 << " " << field[x][a+1] << " " << visited[x][a+1] << " " << a << endl;
    if(a < field[0].size()-1 && field[x][a+1] == 0 && visited[x][a+1]==0)
    {
        cout << "right" << x << " " << a << endl;
        visited[x][a+1] = 1;
        recursion(field,visited,x,a+1,b,ans);
        visited[x][a+1] = 0;
    }
    if(x < field.size()-1 && field[x+1][a] == 0 && visited[x+1][a] == 0)
    {
        cout << "down" << x << " " << a << endl;
        visited[x+1][a] = 1;
        recursion(field,visited,x+1,a,b,ans);
        visited[x+1][a] = 0;
    }
    return ans;
}

int main(){
    int n,m,q,value2;
    string value;
    int cx,cy;
    cin >> n >> m >> q;
    vector<vector<int>> field(n,vector<int>(m));
    vector<vector<bool>> visited(n,vector<bool>(m,false));
    for(int x = 0 ; x < n ; x++)
    {
            cin >> value;
            for(int z = 0 ; z < value.size() ; z++)
            {
                field[x].push_back( value[z] - 48);
            }
    } 
    for(int x = 0 ; x < q ; x++)
    {
            cin >> value2 >> cx >> cy;
            if(value2 == 1)
            {
                if(field[cx-1][cy-1] == 1)
                    field[cx-1][cy-1] = 0;
                else
                    field[cx-1][cy-1] = 1;
            }
            else
            {
                int ans = 0;
                visited[0][cx-1] = 1;
                recursion(field,visited,0,cx-1,cy-1,ans);
                cout << ans << endl;
            }
    }
}

