
#include <stdio.h>
#include <math.h>

void sqRoot (int num);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    sqRoot (num);
    return 0;
}

void sqRoot (int num)
{
    float ans;
    ans = sqrt(num);
    printf("%0.2f\n", ans);
}