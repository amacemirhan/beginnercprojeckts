#include <stdio.h>
#include <stdlib.h>
int obeb(int x,int y){
    int i=1,g;
for (;i<=x;i++){
    if (x%i==0 && y%i==0){
        g=i;
    }
}
return g;}
int okek(int x,int y){
    return (x*y)/obeb(x,y);
}
int main (){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("girilen sayýlarýn obebi : %d\n",obeb(x,y));
    printf("girilen sayýlarýn okeki : %d\n",okek(x,y));
return main();
}
