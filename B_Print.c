#include <stdio.h>
void num()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i == a)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    num();
    return 0;
}