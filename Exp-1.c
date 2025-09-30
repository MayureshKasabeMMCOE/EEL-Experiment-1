#include <stdio.h>

int main() {
    int red, yellow, green;
    printf("Consider any one of the lights to be on, example - (1, 0, 0): \n");
    scanf("%d%d%d", &red, &yellow, &green);

    if (red == 1) {
        printf("Stop\n");
    } else if (green == 1) {
        printf("Go\n");
    } else if (yellow == 1) {
        printf("Prepare to Stop\n");
    }

    return 0;
}

