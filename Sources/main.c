#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define WORD_COUNT 5
#define MAX_WORD_LENGTH 20

typedef struct {
    char word[MAX_WORD_LENGTH];
    char meaning[MAX_WORD_LENGTH];
} Word;

Word dictionary[WORD_COUNT] = {
    {"apple", "사과"},
    {"banana", "바나나"},
    {"computer", "컴퓨터"},
    {"water", "물"},
    {"sun", "태양"}
};

int main() {
    srand(time(NULL));

    printf("영어 단어의 뜻을 맞춰보세요: \n");

    int randomIndex = rand() % WORD_COUNT; // 0부터 WORD_COUNT-1까지의 난수를 발생시켜서 index를 선택
    char guess[MAX_WORD_LENGTH]; // 사용자의 입력을 받을 배열

    printf("%s\n", dictionary[randomIndex].word); // 랜덤으로 선택된 단어를 출력
    printf("뜻을 입력하세요: ");
    scanf_s("%s", guess, sizeof(guess)); // 사용자의 입력을 받음 (%s는 문자열을 받음)

    if (strcmp(guess, dictionary[randomIndex].meaning) == 0) { // 사용자의 입력과 단어의 뜻을 비교
        printf("정답입니다!\n");
    }
    else {
        printf("틀렸습니다. 정답은 '%s'입니다.\n", dictionary[randomIndex].meaning);
    }

    return 0;
}