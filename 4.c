#include <stdio.h>
#include <string.h>

int toDecimal(char str[]) {
    int s = 0, size = 4;
    for (int i=0; i<size; i++) {
        int x = 1;
        for (int g=0; g<(size-1)-i;g++)
            x *= 2;
        s += str[i] * x;
    }
    return s;
}


int main() {
    char str[4] = {1, 0, 0, 1};
    printf("%d ", toDecimal(str));
    return 0;
}