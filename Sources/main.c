#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define WORD_COUNT 123
#define MAX_WORD_LENGTH 20
#define QUESTION_COUNT 10
#define MAX_QUESTIONS_LENGTH 100
#define ANSWER_COUNT 150


// <단어, 뜻> 쌍을 저장하는 구조체 선언
typedef struct {
    char word[MAX_WORD_LENGTH];
    char meaning[MAX_WORD_LENGTH];
} Word;

// 단어 데이터 저장
Word dictionary[WORD_COUNT] = {
		{"apple", "사과"},
		{"book", "책"},
		{"computer", "컴퓨터"},
		{"dog", "개"},
		{"elephant", "코끼리"},
		{"flower", "꽃"},
		{"guitar", "기타"},
		{"house", "집"},
		{"ice cream", "아이스크림"},
		{"jacket", "재킷"},
		{"kangaroo", "캥거루"},
		{"lamp", "램프"},
		{"mouse", "쥐"},
		{"notebook", "노트북"},
		{"orange", "오렌지"},
		{"pencil", "연필"},
		{"queen", "여왕"},
		{"rabbit", "토끼"},
		{"sun", "태양"},
		{"table", "테이블"},
		{"umbrella", "우산"},
		{"violin", "바이올린"},
		{"water", "물"},
		{"xylophone", "실로폰"},
		{"yacht", "요트"},
		{"zebra", "얼룩말"},
		{"airport", "공항"},
		{"banana", "바나나"},
		{"clock", "시계"},
		{"doctor", "의사"},
		{"eleven", "열한"},
		{"frog", "개구리"},
		{"globe", "지구본"},
		{"hat", "모자"},
		{"ink", "잉크"},
		{"juice", "주스"},
		{"king", "왕"},
		{"lemon", "레몬"},
		{"monkey", "원숭이"},
		{"nose", "코"},
		{"ocean", "바다"},
		{"pear", "배"},
		{"rose", "장미"},
		{"snake", "뱀"},
		{"window", "창문"},
		{"apple", "사과"},
		{"ball", "공"},
		{"cat", "고양이"},
		{"desk", "책상"},
		{"eleven", "열한"},
		{"fan", "선풍기"},
		{"goat", "염소"},
		{"hat", "모자"},
		{"ice", "얼음"},
		{"jelly", "젤리"},
		{"kite", "연"},
		{"lion", "사자"},
		{"mango", "망고"},
		{"nest", "둥지"},
		{"orange", "오렌지"},
		{"piano", "피아노"},
		{"queen", "여왕"},
		{"rose", "장미"},
		{"sun", "태양"},
		{"table", "테이블"},
		{"umbrella", "우산"},
		{"vase", "꽃병"},
		{"watermelon", "수박"},
		{"xylophone", "실로폰"},
		{"yogurt", "요거트"},
		{"zebra", "얼룩말"},
		{"ant", "개미"},
		{"butterfly", "나비"},
		{"candy", "사탕"},
		{"dog", "개"},
		{"elephant", "코끼리"},
		{"frog", "개구리"},
		{"giraffe", "기린"},
		{"hamster", "햄스터"},
		{"iguana", "이구아나"},
		{"jaguar", "재규어"},
		{"kangaroo", "캥거루"},
		{"leopard", "표범"},
		{"monkey", "원숭이"},
		{"newt", "도룡뇽"},
		{"otter", "수달"},
		{"penguin", "펭귄"},
		{"quail", "쌍꺼풀"},
		{"rabbit", "토끼"},
		{"snake", "뱀"},
		{"tiger", "호랑이"},
		{"umbrellabird", "우산새"},
		{"vulture", "맹금류"},
		{"whale", "고래"},
		{"xerus", "제루스"},
		{"yak", "야크"},
		{"zebu", "제부"},
		{"antelope", "곤돌라"},
		{"bear", "곰"},
		{"crocodile", "악어"},
		{"dolphin", "돌고래"},
		{"elephant", "코끼리"},
		{"flamingo", "플라밍고"},
		{"gazelle", "가젤"},
		{"hippopotamus", "하마"},
		{"iguana", "이구아나"},
		{"jellyfish", "해파리"},
		{"koala", "코알라"},
		{"lemur", "레머"},
		{"mongoose", "망고스"},
		{"narwhal", "나르월"},
		{"orangutan", "오랑우탄"},
		{"panther", "표범"},
		{"quokka", "쿼카"},
		{"rhinoceros", "코뿔소"},
		{"seahorse", "해마"},
		{"tortoise", "거북이"},
		{"urial", "우리얼"},
		{"viper", "독사"},
		{"walrus", "바다코끼리"},
		{"xenops", "제노프스"},
		{"yak", "야크"},
		{"zebu", "제부"}
};

// 영어 질문 데이터 구조체 선언
typedef struct {
	char eng_questions[MAX_QUESTIONS_LENGTH];
	char answer_questions[MAX_QUESTIONS_LENGTH];
}Questions;

// 질문 데이터
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

// 질문 저장 리스트
char answer[ANSWER_COUNT];


// 함수 선언
void word_quiz();
void daily_questions();
void current_time();






int main() {
	// 랜덤 함수 초기화를 위한 코드
    srand(time(NULL));

	
	// 메뉴 번호 변수
	int menu_num = 0;


	while (1) {
		// 메인 메뉴
		printf("┌─────────────────── 영어 단어 게임 -─────────────────┐\n");
		printf("│                                                     │\n");
		printf("│                  1. 단어 게임                       │\n");
		printf("│                  2. 영어 질문                       │\n");
		printf("│                  3. 종료                            │\n");
		printf("│                                                     │\n");
		printf("└─────────────────────────────────────────────────────┘\n");
		printf("\n\n\n");
		
		

		// 메뉴 번호 입력받기
		printf("번호를 입력해주세요!: ");
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
			printf("프로그램을 종료합니다.\n");
			return 0;


		default:
			printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
			break;

		}

	}
    

    return 0;
}





// 단어 게임 실행 함수 (메뉴 1번)
void word_quiz() {
	printf("영어 단어의 뜻을 맞춰보세요! \n");



	// 문제 개수 입력받기
	int questions_num;

	printf("몇 문제를 푸실건가요?: ");
	scanf_s("%d", &questions_num);

	// 맞은 문제 개수를 세는 변수
	int correct = 0;

	// 입력받은 수 만큼 단어 퀴즈 반복
	for (int i = 0; i < questions_num; i++) {

		int randomIndex = rand() % WORD_COUNT;
		char guess[MAX_WORD_LENGTH];

		printf("%s\n", dictionary[randomIndex].word);
		printf("뜻을 입력하세요: ");
		scanf_s("%s", guess, (int)sizeof(guess));



		if (strcmp(guess, dictionary[randomIndex].meaning) == 0) {
			printf("정답입니다!\n");
			correct++;
		}
		else {
			printf("틀렸습니다. 정답은 '%s'입니다.\n", dictionary[randomIndex].meaning);
		}

	}
	printf("\n\n수고하셨어요!\n총 %d문제 중 %d개를 맞췄어요!\n\n", questions_num, correct);

	printf("메인 메뉴로 돌아갑니다.\n\n");


}

// 오늘 날짜를 출력하는 함수
void current_time() { 
	time_t now = time(NULL);
	struct tm date;
	

	localtime_s(&date, &now);
	printf("%d월 %d일의 질문\n", date.tm_mon + 1, date.tm_mday);
	
}

// 영어 질문 실행 함수 (메뉴 2번)
void daily_questions() {

	// 오늘 날짜 출력 ex) 12월 10일의 질문
	current_time();

	// questions_data에서 무작위 질문 출력 후 입력받기
	int randomIndex = rand() % QUESTION_COUNT;
	printf("%s\n", questions_data[randomIndex].eng_questions);
	getchar();
	scanf_s("%[^\n]s", answer, (int)sizeof(answer));

	

	
	printf("저장되었습니다.\n메인 메뉴로 돌아갑니다.\n\n");
	
}

// 영어 질문 저장하기 (날짜와 함께)

