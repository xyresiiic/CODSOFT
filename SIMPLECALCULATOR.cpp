#include <stdio.h>

int main() 
{
    char a;
    int  b,c;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &a);
    printf("Enter first numbers: ");
    scanf("%d", &b);
    printf("Enter second numbers: ");
    scanf("%d", &c);
    
    switch (a)
     {
        case '+':
            printf("%d is addition",b+c);
            break;
        case '-':
            printf("%d is sub " ,b-c);
            break;
        case '*':
            printf("%d is multiplication" ,b*c);
            break;
        case '/':
                printf("%d is division",b/c);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
