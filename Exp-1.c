#include <stdio.h>

int main() {
    int red, yellow, green;
    printf("Consider any one of the lights to be on, example - (1, 0, 0): \n");
    scanf("%d%d%d", &red, &yellow, &green);

    if (red == 1 && green == 0 && yellow == 0) {
        printf("Stop\n");
    } else if (green == 1 && red == 0 && yellow == 0) {
        printf("Go\n");
    } else if (yellow == 1 && red == 0 && green == 0) {
        printf("Prepare to Stop\n");
    } else {
        printf("Invalid inputs");
    }

    return 0;
}
