#include <stdio.h>
#include <stdlib.h>

int absolute_difference(int num1, int num2);
const char *describe_distance(int distance);

int absolute_difference(int num1, int num2) {
        int distance = abs(num1 - num2);
        return distance;
}

const char *describe_distance(int distance) {
        if (distance == 0) {
                return "same position";
        }
        else if (distance <= 9) {
                return "nearby";
        }
        else {
                return "far apart";
        }
}

int main(void) {
        int uno;
        int dos;

        printf("enter first number: ");
        if (scanf("%d", &uno) != 1) {
                fprintf(stderr, "invalid input\n");
                return 1;
        }

        printf("enter second number: ");
        if (scanf("%d", &dos) != 1) {
                fprintf(stderr, "invalid input\n");
                return 1;
        }

        int distance = absolute_difference(uno, dos);
        const char *description = describe_distance(distance);

        printf("distance: %d\n", distance);
        printf("description: %s\n", description);

        return 0;
}