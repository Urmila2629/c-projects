#include <stdio.h>
int main()
{
    int n; 
    printf("Enter n=");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:
            printf("%d=EVEN number",n);
            break;
        case 1:
            printf("%d=ODD number",n);
            break;
    }
}
