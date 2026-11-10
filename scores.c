#include <stdio.h>

int main(void)
{
    int scores[100];
    int count;
    int sum = 0;
    int max;
    int min;
    int i;
    char end;

    printf("Number of scores (1-100):\n");
    if (scanf("%3d%c", &count, &end) != 2 || end != '\n' || count < 1 || count > 100) {
        printf("Enter an integer from 1 to 100.\n");
        return 1;
    }

    for (i = 0; i < count; i++) {
        printf("Score %d (0-100):\n", i + 1);
        if (scanf("%3d%c", &scores[i], &end) != 2 || end != '\n' || scores[i] < 0 || scores[i] > 100) {
            printf("Enter an integer from 0 to 100.\n");
            return 1;
        }
    }

    max = scores[0];
    min = scores[0];
    for (i = 0; i < count; i++) {
        sum += scores[i];
        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }
    }

    printf("Average: %.2f\n", (double)sum / count);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}
