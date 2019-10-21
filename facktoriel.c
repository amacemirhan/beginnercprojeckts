#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int f(int x){
    int top=1;
    for (;x>0;x--){
        top *= x;
    }
    return(top);
}
int main()
{
    int a;
    printf("faktoriyeli alýnacak sayiyi giriniz:");
    scanf("%d",&a);
    printf("%d",f(a));
    return 0;
}
