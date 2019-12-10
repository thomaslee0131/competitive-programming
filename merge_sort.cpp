#include<iostream>
#include<vector>
using namespace std;
using vi = vector<int>;

void merge(vi& v, int l, int m, int r){
    int n1 = m-l+1, n2 = r-m;
    int v1[n1], v2[n2];

    for(int i=0;i<n1;i++){
        v1[i] = v[l+i];
    }
    for(int j=0;j<n2;j++){
        v2[j] = v[m+1+j];
    }

    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(v1[i] <= v2[j]){
            v[k] = v1[i];
            i++;
        }
        else{
            v[k] = v2[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        v[k] = v1[i];
        i++;
        k++;
    }
    while(j < n2){
        v[k] = v2[j];
        j++;
        k++;
    }
}

void merge_sort(vi& v, int l, int r){
    if(l<r){
        int mid = l+(r-l)/2;
        merge_sort(v, l, mid);
        merge_sort(v, mid+1, r);
        merge(v, l, mid, r);
    }
}

int main(){
    while(1){
        int n; cin>>n;
        vi v;
        for(int i=0;i<n;i++){
            int a; cin>>a;
            v.push_back(a);
        }
        merge_sort(v, 0, n-1);
        for(int a: v){
            cout<<' '<<a;
        }
        cout<<endl;
    }
}
