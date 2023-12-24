#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "word_header.h"


int main() {
	// 랜덤 함수 사용을 위한 초기화
    srand(time(NULL));

	
	// 메뉴 번호 변수 선언 및 초기화
	int menu_num = 0;


	while (1) {
		// 메인 메뉴
		printf("┌─────────────────── 영어 단어 게임 -─────────────────┐\n");
		printf("│                                                     │\n");
		printf("│                  1. 단어 게임                       │\n");
		printf("│                  2. 오늘의 질문                     │\n");
		printf("│                  3. 답변 돌아보기                   │\n");
		printf("│                  4. 종료                            │\n");
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
			show_past_answer();
			break;

		case 4:
			printf("프로그램을 종료합니다.\n");
			return 0;

		default:
			printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
			break;

		}
	}    
	 return 0;
}