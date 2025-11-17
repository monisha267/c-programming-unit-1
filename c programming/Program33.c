#include <stdio.h>
int main()
{float num1, num2, result;
char op;
printf("enter an expression:");
scanf("%f%c%f",&num1,&op,&num2);
switch(op){
    case'+':
    result=num1+num2;
    printf("result=%2fn",result);
    break;
    case'*':
    result=num1*num2;
    printf("result=%2fn",result);
    break;
    case'-':
    result=num1-num2;
    printf("result=%2fn",result);
    break;
    case'/':
    if(num2!=0)
        result=num1/num2;
        else {
            printf("error:division by zeron");
        
return 0;
        
}
printf("result=%2fn",result);
    break;
    default:
    printf("error:invalid operatorn");
    }
}