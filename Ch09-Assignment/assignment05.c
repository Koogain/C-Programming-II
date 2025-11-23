/*
대소문자를 구분하지 않고 문자열을 비교하는 strcmp_ic함수를 작성하시오. 
strcmp_ic(lhs, rhs) 함수의 리턴값은 strcmp와 마찬가지로 lhs가 rhs보다 크면 0보다 큰 값, 두 문자열이 같으면 0,
lhs가 rhs보다 작으면 0보다 작은 값을 리턴한다. strcmp_ic 함수를 이용해서 입력받은 두 문자열을 비교하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#include <ctype.h>

// 대소문자 구분 없이 문자열 비교
int strcmp_ic(const char* lhs, const char* rhs)
{
    while (*lhs && *rhs) {
        char c1 = tolower((unsigned char)*lhs);
        char c2 = tolower((unsigned char)*rhs);

        if (c1 != c2)
            return c1 - c2;   // 같지 않으면 양수/음수 반환

        lhs++;
        rhs++;
    }
    // 문자열 길이가 다른 경우 처리
    return (unsigned char)tolower(*lhs) - (unsigned char)tolower(*rhs);
}

int main()
{
    char str1[100];
    char str2[100];

    printf("첫 번째 문자열 ? ");
    fgets(str1, sizeof(str1), stdin);

    printf("두 번째 문자열 ? ");
    fgets(str2, sizeof(str2), stdin);

    // 개행 문자 제거
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int result = strcmp_ic(str1, str2);

    if (result == 0)
        printf("%s와 %s가 같습니다.\n", str1, str2);
    else if (result > 0)
        printf("%s가 %s보다 큽니다.\n", str1, str2);
    else
        printf("%s가 %s보다 작습니다.\n", str1, str2);

    return 0;
}