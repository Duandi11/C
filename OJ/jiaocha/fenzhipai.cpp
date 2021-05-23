#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

const int MAXN = 1010;

int main(){
    int N,i = 0;
    int a[MAXN];
    int sum = 0;
    memset(a,0,sizeof(a));
    while(i<N){
        scanf("%d",a[i++]);
        sum+=a[i-1];
    }
    int ave = sum/N;
    for(int i = 0 ; i< N;i++){
        if(a[i] >=ave){
            
        }else{

        }
    }
    system("pause");
    return 0;
}