#include <stdio.h>
#include <string.h>

float sumFoo(int n) {
    float s = 1;
    for (float i=2; i<=n; i++)
        s += (1/(i*i));
    return s;
}


int main() {
    printf("%f\n", sumFoo(2));
    return 0;
}