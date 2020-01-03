#include <stdio.h>
#include <stdlib.h>
int main (){
     int d[10] = {6,7,3,1,8,4,5,9,10,2};
     int i,j,g,max;
     for (i=0;i<10;i++){max=0;
        for(j=i;j<10;j++){
            if (d[j]>=max){
                max=d[j];
                g=j;
            }
        }d[g]=d[i];
        d[i]=max;
     }for (i=0;i<10;i++){printf("%d ",d[i]);}
return 0;
}
