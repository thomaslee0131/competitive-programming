#include<iostream>
using namespace std;
int pos[200002];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        pos[a]=i+1;
    }
    int deleted=0;
    for(int i=0;i<n;i++){
        int a,out;
        scanf("%d",&a);
        if(pos[a]-deleted>0){
            out=pos[a]-deleted;
        }
        else out=0;
        printf("%d",out);
        if(i==n-1){
            printf("\n");
        }
        else printf(" ");
        deleted+=out;
    }
}
