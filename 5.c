#include <stdio.h>
#include <string.h>

struct PC {
    char* name;
    int speed;
	int RAM;
};

struct PC* fastestPC(struct PC data[], int n) {
    int speed, ram;
    struct PC* b;
    for (int i=0; i<n; i++)   {
        struct PC computer = data[i];
        if (computer.speed > speed) {
            speed = computer.speed;
            ram = computer.RAM;
            b = &computer;
        } else if (computer.speed == speed && computer.RAM > ram) {
            ram = computer.RAM;
            b = &computer;
        }
    }
    return b;
}

int main() {
    return 0;
}