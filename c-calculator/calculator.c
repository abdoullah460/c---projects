#include<stdio.h>
 int main(){
double x ; /*first number */
double y ;/*second number*/
char op ;/*choose your operator*/
printf(" x : ");
scanf("%lf",&x);
printf("choose your operator('+','-','*','/') :");
scanf(" %c",&op);

printf("y: ");
scanf("%lf",&y);

if( op == '+'){ printf(" result :%.2lf\n",x + y);

}else if ( op == '-'){
    printf(" result :%.2lf\n",x - y);
}else if ( op == '*'){
    printf(" result :%.2lf\n",x * y);
}else if ( op == '/' && y != 0) {
    printf(" result :%.2lf\n",x / y);

}
else if (op == '/' && y == 0) {
    printf("Cannot divide by zero\n");
} else
{printf( "invalid operator ");
}

}


 
