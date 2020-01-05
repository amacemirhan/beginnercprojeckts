#include <stdio.h>
#include <stdlib.h>
int main(){
int d[5]={10,20,30,40,50};
int a;
for (int i=0;i<5;i++) printf("%d ",d[i]);
printf("\nkacýncý elemani silmek istersiniz:");
scanf("%d",&a);
for  (int i=a-1;i<4;i++){
    d[i]=d[i+1];
}for (int i=0;i<4;i++){printf("%d ",d[i]);}
return 0;}
