#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "word_header.h"


int main() {
	// ���� �Լ� ����� ���� �ʱ�ȭ
    srand(time(NULL));

	
	// �޴� ��ȣ ���� ���� �� �ʱ�ȭ
	int menu_num = 0;


	while (1) {
		// ���� �޴�
		printf("���������������������������������������� ���� �ܾ� ���� -������������������������������������\n");
		printf("��                                                     ��\n");
		printf("��                  1. �ܾ� ����                       ��\n");
		printf("��                  2. ������ ����                     ��\n");
		printf("��                  3. �亯 ���ƺ���                   ��\n");
		printf("��                  4. ����                            ��\n");
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
			show_past_answer();
			break;

		case 4:
			printf("���α׷��� �����մϴ�.\n");
			return 0;

		default:
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
			break;

		}
	}    
	 return 0;
}