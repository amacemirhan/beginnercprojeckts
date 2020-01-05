#include <stdio.h>
#include <stdlib.h>
void isPerfect (num){
    int top=0;
    for (int i=1;i<num;i++){
        if (num%i==0)
            top += i;
    }if (top==num)
    printf("%d is perfect number\n",num);

}
int main()
{
    int low,upp;
    printf("Enter lower limit to print perfect numbers:");
    scanf("%d",&low);
    printf("Enter upper limit to print perfect numbers:");
    scanf("%d",&upp);
    for (int i=low;i<upp;i++)
isPerfect(i);
    return 0;
}
