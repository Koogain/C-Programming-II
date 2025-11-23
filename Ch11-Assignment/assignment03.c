/*
피보나치 수열의 n번째 항을 구하는 fibonacci 함수를 재귀 함수로 정의하시오.
피보나치 수열은 바로 앞의 두 수의 합으로 구해지며, 처음 두 항은 1이다.
finonacci 함수를 이용해서 0~19번 항을 출력하는 프로그램을 작성하시오.
*/

#include <stdio.h>

// 재귀로 피보나치 n번째 항 구하기
int fibonacci(int n) {
    if (n == 0 || n == 1)
        return 1;        // 처음 두 항은 1
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    for (int i = 0; i < 20; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}