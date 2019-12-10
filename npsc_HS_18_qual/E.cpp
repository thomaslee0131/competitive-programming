#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<pair<int, int>> points;
vector<double> lines;

double distance(int x1, int y1, int x2, int y2) 
{ 
    return (double)(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0)); 
} 

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin>>n;
    int ls = n*(n-1)/2;
    int triangles = n*(n-1)*(n-2)/6;
    for(int i=0;i<n;i++){
        int x, y; cin>>x>>y;
        points.push_back({x, y});
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            double d = distance(points[i].first, points[i].second, points[j].first, points[j].second);
            lines.push_back(d);
        }
    }
    double sum = 0;
    for(auto line: lines){
        sum += line*(n-2);
    }
    double ans = sum / triangles;
    printf("%0.7f", ans);
}
