#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define WORD_COUNT 123
#define MAX_WORD_LENGTH 20
#define QUESTION_COUNT 10
#define MAX_QUESTIONS_LENGTH 100
#define ANSWER_COUNT 150


// <�ܾ�, ��> ���� �����ϴ� ����ü ����
typedef struct {
    char word[MAX_WORD_LENGTH];
    char meaning[MAX_WORD_LENGTH];
} Word;

// �ܾ� ������ ����
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

// ���� ���� ������ ����ü ����
typedef struct {
	char eng_questions[MAX_QUESTIONS_LENGTH];
	char answer_questions[MAX_QUESTIONS_LENGTH];
}Questions;

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

// ���� ���� ����Ʈ
char answer[ANSWER_COUNT];


// �Լ� ����
void word_quiz();
void daily_questions();
void current_time();






int main() {
	// ���� �Լ� �ʱ�ȭ�� ���� �ڵ�
    srand(time(NULL));

	
	// �޴� ��ȣ ����
	int menu_num = 0;


	while (1) {
		// ���� �޴�
		printf("���������������������������������������� ���� �ܾ� ���� -������������������������������������\n");
		printf("��                                                     ��\n");
		printf("��                  1. �ܾ� ����                       ��\n");
		printf("��                  2. ���� ����                       ��\n");
		printf("��                  3. ����                            ��\n");
		printf("��                                                     ��\n");
		printf("��������������������������������������������������������������������������������������������������������������\n");
		printf("\n\n\n");
		
		

		// �޴� ��ȣ �Է¹ޱ�
		printf("��ȣ�� �Է����ּ���!: ");
		scanf_s("%d", &menu_num);
		printf("\n");



		switch (menu_num) {
		case 1:
			word_quiz();
			break;

		case 2:
			daily_questions();
			break;
			

		case 3:
			printf("���α׷��� �����մϴ�.\n");
			return 0;


		default:
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
			break;

		}

	}
    

    return 0;
}





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

// ���� ��¥�� ����ϴ� �Լ�
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

	// questions_data���� ������ ���� ��� �� �Է¹ޱ�
	int randomIndex = rand() % QUESTION_COUNT;
	printf("%s\n", questions_data[randomIndex].eng_questions);
	getchar();
	scanf_s("%[^\n]s", answer, (int)sizeof(answer));

	

	
	printf("����Ǿ����ϴ�.\n���� �޴��� ���ư��ϴ�.\n\n");
	
}

// ���� ���� �����ϱ� (��¥�� �Բ�)

