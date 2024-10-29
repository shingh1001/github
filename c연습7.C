#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100]; // 입력받을 문자 배열
    int str_cnt; // 입력한 문자의 개수를 저장할 변수
    int i;
 
    printf("영문자 및 숫자를 입력 (100자 이하) : ");
    scanf("%s", str);
 
    printf("\n");
    printf("입력한 문자열 ==> %s\n", str); // 입력된 문자열을 출력
    printf("변환된 문자열 ==>");
 
    str_cnt = strlen(str); // 입력된 문자의 개수를 계산
 
    for (i = str_cnt; i >= 0; i--) // 입력된 개수만큼 반대 순서로 출력
    {
        printf("%c", str[i]);
    }
 
    printf("\n");
}