#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "word_header.h"


// �ܾ� ������
Word dictionary[WORD_COUNT] = {
		{"apple", "���"},
		{"book", "å"},
		{"computer", "��ǻ��"},
		{"dog", "��"},
		{"elephant", "�ڳ���"},
		{"flower", "��"},
		{"guitar", "��Ÿ"},
		{"house", "��"},
		{"ice cream", "���̽�ũ��"},
		{"jacket", "��Ŷ"},
		{"kangaroo", "Ļ�ŷ�"},
		{"lamp", "����"},
		{"mouse", "��"},
		{"notebook", "��Ʈ��"},
		{"orange", "������"},
		{"pencil", "����"},
		{"queen", "����"},
		{"rabbit", "�䳢"},
		{"sun", "�¾�"},
		{"table", "���̺�"},
		{"umbrella", "���"},
		{"violin", "���̿ø�"},
		{"water", "��"},
		{"xylophone", "�Ƿ���"},
		{"yacht", "��Ʈ"},
		{"zebra", "��踻"},
		{"airport", "����"},
		{"banana", "�ٳ���"},
		{"clock", "�ð�"},
		{"doctor", "�ǻ�"},
		{"eleven", "����"},
		{"frog", "������"},
		{"globe", "������"},
		{"hat", "����"},
		{"ink", "��ũ"},
		{"juice", "�ֽ�"},
		{"king", "��"},
		{"lemon", "����"},
		{"monkey", "������"},
		{"nose", "��"},
		{"ocean", "�ٴ�"},
		{"pear", "��"},
		{"rose", "���"},
		{"snake", "��"},
		{"window", "â��"},
		{"apple", "���"},
		{"ball", "��"},
		{"cat", "�����"},
		{"desk", "å��"},
		{"eleven", "����"},
		{"fan", "��ǳ��"},
		{"goat", "����"},
		{"hat", "����"},
		{"ice", "����"},
		{"jelly", "����"},
		{"kite", "��"},
		{"lion", "����"},
		{"mango", "����"},
		{"nest", "����"},
		{"orange", "������"},
		{"piano", "�ǾƳ�"},
		{"queen", "����"},
		{"rose", "���"},
		{"sun", "�¾�"},
		{"table", "���̺�"},
		{"umbrella", "���"},
		{"vase", "�ɺ�"},
		{"watermelon", "����"},
		{"xylophone", "�Ƿ���"},
		{"yogurt", "���Ʈ"},
		{"zebra", "��踻"},
		{"ant", "����"},
		{"butterfly", "����"},
		{"candy", "����"},
		{"dog", "��"},
		{"elephant", "�ڳ���"},
		{"frog", "������"},
		{"giraffe", "�⸰"},
		{"hamster", "�ܽ���"},
		{"iguana", "�̱��Ƴ�"},
		{"jaguar", "��Ծ�"},
		{"kangaroo", "Ļ�ŷ�"},
		{"leopard", "ǥ��"},
		{"monkey", "������"},
		{"newt", "���洨"},
		{"otter", "����"},
		{"penguin", "���"},
		{"quail", "�ֲ�Ǯ"},
		{"rabbit", "�䳢"},
		{"snake", "��"},
		{"tiger", "ȣ����"},
		{"umbrellabird", "����"},
		{"vulture", "�ͱݷ�"},
		{"whale", "��"},
		{"xerus", "���罺"},
		{"yak", "��ũ"},
		{"zebu", "����"},
		{"antelope", "�ﵹ��"},
		{"bear", "��"},
		{"crocodile", "�Ǿ�"},
		{"dolphin", "����"},
		{"elephant", "�ڳ���"},
		{"flamingo", "�ö�ְ�"},
		{"gazelle", "����"},
		{"hippopotamus", "�ϸ�"},
		{"iguana", "�̱��Ƴ�"},
		{"jellyfish", "���ĸ�"},
		{"koala", "�ھ˶�"},
		{"lemur", "����"},
		{"mongoose", "����"},
		{"narwhal", "������"},
		{"orangutan", "������ź"},
		{"panther", "ǥ��"},
		{"quokka", "��ī"},
		{"rhinoceros", "�ڻԼ�"},
		{"seahorse", "�ظ�"},
		{"tortoise", "�ź���"},
		{"urial", "�츮��"},
		{"viper", "����"},
		{"walrus", "�ٴ��ڳ���"},
		{"xenops", "��������"},
		{"yak", "��ũ"},
		{"zebu", "����"}
};

// ���� ������
Questions questions_data[QUESTION_COUNT] = {
	{"How did the sunrise make you feel this morning?", "no data"},
	{"What's a small moment that brought you joy today?", "no data"},
	{"Did you find something unexpected that made your day a little brighter?", "no data"},
	{"What was the most comforting thing you encountered today?", "no data"},
	{"Have you had a chance to appreciate the beauty of nature today?", "no data"},
	{"Did a conversation with someone leave you feeling inspired or thoughtful?", "no data"},
	{"How did you take a break or find some peace during a busy day?", "no data"},
	{"What made you smile today, even in the smallest way?", "no data"},
	{"Did you have a chance to reflect on your thoughts or feelings about something important today?", "no data"},
	{"What's a simple pleasure you experienced that brought a sense of contentment?", "no data"}

};


// �ܾ� ���� ���� �Լ� (�޴� 1��)
void word_quiz() {
	printf("���� �ܾ��� ���� ���纸����! \n");



	// ���� ���� �Է¹ޱ�
	int questions_num;

	printf("�� ������ Ǫ�ǰǰ���?: ");
	scanf_s("%d", &questions_num);

	// ���� ���� ������ ���� ����
	int correct = 0;

	// �Է¹��� �� ��ŭ �ܾ� ���� �ݺ�
	for (int i = 0; i < questions_num; i++) {

		int randomIndex = rand() % WORD_COUNT;
		char guess[MAX_WORD_LENGTH];

		printf("%s\n", dictionary[randomIndex].word);
		printf("���� �Է��ϼ���: ");
		scanf_s("%s", guess, (int)sizeof(guess));



		if (strcmp(guess, dictionary[randomIndex].meaning) == 0) {
			printf("�����Դϴ�!\n");
			correct++;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�. ������ '%s'�Դϴ�.\n", dictionary[randomIndex].meaning);
		}

	}
	printf("\n\n�����ϼ̾��!\n�� %d���� �� %d���� ������!\n\n", questions_num, correct);

	printf("���� �޴��� ���ư��ϴ�.\n\n");


}

// ���� ��¥�� ����ϴ� �Լ� (�޴� 2�� �Լ��� ���)
void current_time() {
	time_t now = time(NULL);
	struct tm date;


	localtime_s(&date, &now);
	printf("%d�� %d���� ����\n", date.tm_mon + 1, date.tm_mday);
	
}



// ���� ���� ���� �Լ� (�޴� 2��)
void daily_questions() {


	// ���� ��¥ ��� ex) 12�� 10���� ����
	current_time();

	// �亯 ����� ����Ʈ �ʱ�ȭ
	char save_answer[100] = "a";
	
	// questions_data���� ������ ���� ��� �� �Է¹ޱ�
	int randomIndex = rand() % QUESTION_COUNT;
	printf("%s\n", questions_data[randomIndex].eng_questions);
	getchar();
	scanf_s("%[^\n]s", save_answer, (int)sizeof(save_answer));


	// �亯 ����� ���� ���� or �̾��
	FILE* fp;
	fopen_s(&fp, "save_answer.txt", "a");

	if (fp == NULL) {
		printf("open ����\n");
		return 0;
	}

	// ������ ������ ������ �亯 ����
	while (1) {
		
		fputs(questions_data[randomIndex].eng_questions, fp);
		fputs(": ", fp);
		fputs(save_answer, fp);
		fputs("\n", fp);
		break;
	}
	
	fclose(fp);

	printf("����Ǿ����ϴ�.\n���� �޴��� ���ư��ϴ�.\n\n");	
}

void show_past_answer() {
	printf("���� ���� �亯��...\n");
	
	// �亯�� �ҷ��� �� ����� �ӽ� ����Ʈ
	char show_ans[1000];

	FILE* fp;

	fopen_s(&fp, "save_answer.txt", "r");

	if (fp == NULL) {
		printf("opne ����\n");
		return 0;
	}
	// txt ���Ͽ� ����� ������ �亯�� �ҷ��ͼ� ���
	while (1) {
		fgets(show_ans, 1000, fp);
		printf("%s\n", show_ans);
		if (feof(fp)) break;
	}
	printf("\n");
	fclose(fp);
}

