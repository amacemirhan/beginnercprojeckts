#include <stdio.h>
#include <stdio.h>

int main()
{
double num1;
double num2;
char op;
double num3;

printf("");
scanf("%lf",&num1);

printf("");
scanf("%c",&op);

printf("");
scanf("%lf",&num2);

if (op=='+'){num3=num1+num2;
}else if (op=='-'){num3=num1-num2;
}else if (op=='*'){num3=num1*num2;
}else if (op=='/'){num3=num1/num2;
}else printf("Error!\a");
printf("%f",num3);


}








