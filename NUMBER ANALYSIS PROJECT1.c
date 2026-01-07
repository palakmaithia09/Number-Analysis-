#include <stdio.h>
#include <limits.h>

int main() {
    int number, count=0,sum=0,max=INT_MIN,min=INT_MAX;
    float average;
    char choice;
    printf("Number Analysis Program\n");
    printf("Enter a series of integers (enter 'q' to quit):\n");
    while (1) {
        if (scanf("%d", &number) == 1) {
            sum += number;
            if (number>max) max=number;
            if (number<min) min=number;
            count++;
        } else {
            scanf("%c", &choice); 
            if (choice == 'q' || choice == 'Q') break; 
			}
    }

    if (count > 0) {
        average = (float) sum / count;
        printf("\nStatistics:\n");
        printf("Count: %d\n", count);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
        printf("Maximum: %d\n", max);
        printf("Minimum: %d\n", min);
    } else {
        printf("\nNo valid numbers were entered.\n");
    }

    return 0;
}

