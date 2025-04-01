#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int infixToPostfix(char *infix, char *postfix);
int evaluatePostfix(char *postfix);

int main(void) {
    char infix[MAX];
    char postfix[MAX];
    int result;

    printf("중위표기식 입력: ");
    scanf("%s", infix);
    
    result = infixToPostfix(infix, postfix);
    printf("후위표기식: %s\n", postfix);
    printf("후위표기식 계산 결과: %d\n", evaluatePostfix(postfix));

    return 0;
}

int evaluatePostfix(char *postfix) {
    return 0;
}

int infixToPostfix(char *infix, char *postfix) {
    return 0;
}