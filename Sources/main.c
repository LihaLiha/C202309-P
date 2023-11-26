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
    {"apple", "���"},
    {"banana", "�ٳ���"},
    {"computer", "��ǻ��"},
    {"water", "��"},
    {"sun", "�¾�"}
};

int main() {
    srand(time(NULL));

    printf("���� �ܾ��� ���� ���纸����: \n");

    int randomIndex = rand() % WORD_COUNT; // 0���� WORD_COUNT-1������ ������ �߻����Ѽ� index�� ����
    char guess[MAX_WORD_LENGTH]; // ������� �Է��� ���� �迭

    printf("%s\n", dictionary[randomIndex].word); // �������� ���õ� �ܾ ���
    printf("���� �Է��ϼ���: ");
    scanf_s("%s", guess, sizeof(guess)); // ������� �Է��� ���� (%s�� ���ڿ��� ����)

    if (strcmp(guess, dictionary[randomIndex].meaning) == 0) { // ������� �Է°� �ܾ��� ���� ��
        printf("�����Դϴ�!\n");
    }
    else {
        printf("Ʋ�Ƚ��ϴ�. ������ '%s'�Դϴ�.\n", dictionary[randomIndex].meaning);
    }

    return 0;
}