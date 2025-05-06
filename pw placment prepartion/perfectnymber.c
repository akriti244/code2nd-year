#include<stdio.h>
int main(){
    int i,n,sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
        if ((sum%n)==0){
            printf("%d it is perfect number",n);
        }
        else{
            printf("%d it is not perfect number: ",n);
        }
    }
    return 0;
}