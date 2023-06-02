#include <stdio.h>
#include <string.h>

struct PC {
    char* name;
    int speed;
	int RAM;
};

struct PC* fastestPC(struct PC data[], int n) {
    int sp = 0, r = 0;
    struct PC *b;
    struct PC u;
    for (int i=0; i<n; i++)   {
        struct PC computer = data[i];
        if (computer.speed > sp) {
            sp = computer.speed;
            r = computer.RAM;
            u  = computer;
            b = &u;
        } else if (computer.speed == sp && computer.RAM > r) {
            r = computer.RAM;
            b = &u;
        }
    }
    return b;
}

int main() {
    struct PC data[3] = {{"1", 3, 4}, {"2", 3, 1}, {"3", 5, 1}};
    struct PC a = *fastestPC(data, 3);
    printf("%d %d\n", a.speed, a.RAM);
    return 0;
}