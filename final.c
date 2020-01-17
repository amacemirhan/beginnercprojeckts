#include <stdio.h>
#include <stdlib.h>
//rakamları rastgele olan 10 basamakli iki sayidan buyuk olanını bulan program
double buyuk(double num1,double num2){
    double num1c=num1,num2c=num2;
    int kal1,kal2,a=10;
    loop:
    a--;
    num1=num1c;
    num2=num2c;
    for (int i=0;i<a;i++){
      num1=num1/10;
      num2=num2/10;
      }
        kal1=num1;
        kal2=num2;
        if (kal1==kal2){
            goto loop;}
        else if (kal1>kal2){
            return num1c;}
        else {return num2c;}
}
int main()
{
    double num1=5891587964;
    double num2=6890241542;
    printf("%f\n%f\n",num1,num2);
    printf("\nbuyuk olan %f",buyuk(num1,num2));

    return 0;
}
