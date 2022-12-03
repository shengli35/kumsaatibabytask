#include<stdio.h>
int main(){
    int n;
    A:
    printf("\033[0;34m");
    printf("Kum saatinin yuksekligini giriniz. (Tek sayi giriniz.)");
    printf("\033[0m");
    scanf("%d",&n);
    if(n%2==0){
        printf("\033[1;31m");
        printf("\nLUTFEN BIR TEK SAYI GIRINIZ! \n \n");
        printf("\033[0m");
        goto A;}

    for(int i=n;i>=1;i-=2){

        for(int j=(n-i)/2;j>0;j--)
            printf(" ");
        for(int j=i;j>0;j--)
            printf("*");
        for(int j=(n-i)/2;j>0;j--)
            printf(" ");    
        printf("\n");
    }
    for(int i=3;i<=n;i+=2){

        for(int j=(n-i)/2;j>0;j--)
            printf(" ");
        for(int j=i;j>0;j--)
            printf("*");
        for(int j=(n-i)/2;j>0;j--)
            printf(" ");    
        printf("\n");
    }
}

