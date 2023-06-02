#include <stdio.h>
#include <string.h>

int main() {
    int x, y, amount;
    scanf("%d", &x);
    while (x != 0)
    {
        scanf("%d", &y);
        if (y - x == 3)
            amount += 1;
        x = y;
    }
    printf("%d\n", amount);
    
}