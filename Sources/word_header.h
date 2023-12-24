#define MAX_WORD_LENGTH 20
#define QUESTION_COUNT 10
#define MAX_QUESTIONS_LENGTH 100
#define ANSWER_COUNT 30
#define MAX_ANSWER_LENGTH 150
#define WORD_COUNT 123

// <단어, 뜻> 쌍을 저장하는 구조체 선언
typedef struct {
    char word[MAX_WORD_LENGTH];
    char meaning[MAX_WORD_LENGTH];
} Word;

// 영어 질문 데이터 구조체 선언
typedef struct {
	char eng_questions[MAX_QUESTIONS_LENGTH];
	char answer_questions[MAX_QUESTIONS_LENGTH];
}Questions;





// 함수 선언
void word_quiz();
void daily_questions();
void current_time();
void show_past_answer();