#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUDENT_COUNT 10

int main() {
    int scores[STUDENT_COUNT];
    int sum = 0;
    float average;

    srand(time(NULL));

    for (int i = 0; i < STUDENT_COUNT; i++) {
        scores[i] = rand() % 101;
        sum += scores[i];
    }

    average = sum / (float)STUDENT_COUNT;

    printf("학생 성적: ");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n합계: %d\n", sum);
    printf("평균 점수: %.2f\n", average);

    return 0;
}
