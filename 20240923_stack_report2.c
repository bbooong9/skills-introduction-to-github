#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int isValid(char *str) {
    char *stack = (char *)malloc(MAX_SIZE * sizeof(char));
    int top = -1;

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) {
                free(stack);
                return 0;
            }
            char last = stack[top--];
            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                free(stack);
                return 0;
            }
        }
    }

    int valid = (top == -1);
    free(stack);
    return valid;
}

int main() {
    char str[MAX_SIZE];
    printf("문자열을 입력하세요: ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = 0;

    if (isValid(str)) {
        printf("유효한 괄호\n");
    } else {
        printf("유효하지 않은 괄호\n");
    }

    return 0;
}