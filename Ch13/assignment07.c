/*
명령행 인자를 이용해서 +, -, *, /, % 연산을 처리하는 계산기 프로그램을 작성하시오.
프로그램을 실행하려면 명령 프롬프트에서 다음과 같이 입력한다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc != 4) {
        printf("사용법: %s <정수> <연산자> <정수>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);    // 첫 번째 숫자
    char op = argv[2][0];     // 연산자 (문자 1개)
    int b = atoi(argv[3]);    // 두 번째 숫자
    int result;

    switch (op) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b == 0) {
            printf("0으로 나눌 수 없습니다.\n");
            return 1;
        }
        result = a / b;
        break;
    case '%':
        if (b == 0) {
            printf("0으로 나눌 수 없습니다.\n");
            return 1;
        }
        result = a % b;
        break;
    default:
        printf("지원하지 않는 연산자입니다: %c\n", op);
        return 1;
    }

    printf("%d %c %d = %d\n", a, op, b, result);

    return 0;
}
