#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    char *stack = (char *)malloc(MAX_SIZE * sizeof(char));
    int top = -1;

    printf("문자열을 입력하세요: ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = 0;

    for (int i = 0; i < strlen(str); i++) {
        stack[++top] = str[i];
    }

    printf("거꾸로 출력된 문자열: ");
    while (top >= 0) {
        putchar(stack[top--]);
    }
    printf("\n");

    free(stack);
    return 0;
}