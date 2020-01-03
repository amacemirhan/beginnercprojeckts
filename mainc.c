#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,top=0;
    char y;
    printf(".. e kadar :");
    scanf("%d",&x);
    printf(".. sayilarin toplami (cift:c,tek:t):");
    scanf(" %c",&y);
    if (y=='c'){
        for (int i=0;i<=x;i++){
            if (i%2==0)
                top+=i;
        }
    }else{
    for (int i=0;i<=x;i++){
            if (i%2==1)
                top+=i;
    }

    }
printf("%d",top);





    return 0;
}
