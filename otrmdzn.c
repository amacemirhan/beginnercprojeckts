#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int i,j,k,l,s=49;
    int matris [7][7];
    for (i=0; i<7; i++)
    {
        for (j=0; j<7; j++)
        {
            matris[i][j]=0;
        }
    }
    while(s>0){
        k=rand()%7;
        l=rand()%7;
        if (matris[k][l]==0){
            matris[k][l]=s;
            s--;}
    }

    for (i=0; i<7; i++)
    {
        for (j=0; j<7; j++)
        {
            printf("%2d ",matris[i][j]);
        }

        printf("\n");
    }
    return 0;
}

