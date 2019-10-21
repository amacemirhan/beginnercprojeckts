#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    printf("Pozitif sayi giriniz:");
    scanf("%d",&x);
    if (prime(x)){
        printf("asal");
    }else
    printf("asal degil");
    printf("\n");
    return main();
}
int prime(int x){
    if (x==1)
    return 0;
    for (int i=2;i<x;i++){
    if (x==2)
    return 1;
    else if (x%i==0)
    return 0;
    else
    continue;

}
return 1;
}
