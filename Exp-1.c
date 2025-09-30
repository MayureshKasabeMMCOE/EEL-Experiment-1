#include <stdio.h>

int main() {
    int red = 1, yellow = 0, green = 0;

    if (red == 1) {
        printf("Stop\n");
    } else if (green == 1) {
        printf("Go\n");
    } else if (yellow == 1) {
        printf("Prepare to Stop\n");
    }

    return 0;
}