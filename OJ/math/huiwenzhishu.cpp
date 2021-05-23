#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;


bool isH(long long int a){
    int tmp = 0;
    long long int b =  a;
    while(a){
        tmp = tmp*10 + a%10;
        a/=10;
    }
    if(b ==tmp)
        return true;
    return false;
}

bool isZ(long long int a){
    for(int i = 2; i <=(int)sqrt(double(a));i++){
        if(a%i == 0)
            return false;
    }
    return true;
}



void hAndz(long long int a,long long int b){
    for(a;a<=b;a++){
        if(isZ(a)&&isH(a))
            printf("%d\n",a);
    }
}

int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    hAndz(a,b);
    system("pause");
    return 0;
}