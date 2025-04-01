#include <stdio.h>
#include <stdlib.h>

void printScores(int* scores, int size) {
    printf("현재 성적: ");
    for (int i = 0; i < size; i++) {
        if (scores[i] != -1) {
            printf("%d ", scores[i]);
        }
    }
    printf("\n");
}

int main() {
    int initialSize = 5;
    int* scores = (int*)malloc(initialSize * sizeof(int));

    for (int i = 0; i < initialSize; i++) {
        scores[i] = (i + 1) * 10;
    }

    printScores(scores, initialSize);

    int deleteIndex = 2;
    scores[deleteIndex] = -1;
    printScores(scores, initialSize);

    int newStudents = 2;
    int newSize = initialSize + newStudents;
    scores = (int*)realloc(scores, newSize * sizeof(int));

    for (int i = initialSize; i < newSize; i++) {
        scores[i] = (i + 1) * 10;
    }

    printScores(scores, newSize);

    free(scores);

    return 0;
}