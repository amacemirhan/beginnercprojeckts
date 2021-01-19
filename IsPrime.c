#include <stdio.h>
#include <stdlib.h>

int IsPrime(int i) {
int j;
if (i==1)
    return 0;
for(j = 2; j <= (i/j); j++)
if(!(i%j)) break;
if(j > (i/j)) return 1;
return 0;
}
