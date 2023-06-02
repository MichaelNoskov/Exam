#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Coord {
	int x;
	int y;
};

int canGet(struct Coord start, struct Coord finish){
    if (abs(start.x - finish.x) == abs(start.y - finish.y))
        return 1;
    return 0;
}

int main() {
    struct Coord s = {1, 1}, f = {2, 2};
    printf("%d\n", canGet(s, f));
    return 0;
}
