#include <stdio.h>
#include <stdlib.h>

int main (){
    int i;
    int resource[7];
    for (i=0;i<7;i++){
        scanf("%d",&resource[i]);
    }
    printf("Kucukten buyuye:");
    for (int c;i>0;i--){
            for (int a=0;a<=i;a++){
                if (resource[a]>resource[a+1]){
                c=resource[a];
                resource[a]=resource[a+1];
                resource[a+1]=c;
                }
            }
    }
    for (int a=0;a<7;a++)
        printf("%d ",resource[a]);
return 0;
}
