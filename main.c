#include "main.h"

Address* head = NULL;
Address* tail = NULL;
void pw_check() {
	static int pw_count = 0;
	char pw[] = "qwer1234";
	char password[40] = "";
	printf("비밀번호 입력: ");
	gets(password);
	while (pw_count != 3) {
		gets(password);
		if (strcmp(pw, password) == 0) {
			pw_count = 0;
			return;
		}
		else {
			pw_count++;
			printf("비밀번호(%d회실패): ", pw_count);
		}
		if (pw_count == 3) {
			printf("등록할 수 없음!\n 프로그램을 종료합니다.");
			exit(0);
		}
	}
}

int main() {

	int menu;
	do {
		printf("전화번호 관리\n");
		printf("1. 등록\t2. 전체검색\t3. 특정인검색\t4. 종료\n메뉴선택: ");
		scanf_s("%d", &menu);
		switch (menu)
		{
		case 1:
			newregister();
			break;
		case 2:
			allprint();
			break;
		case 3:
			personalprint();
			break;
		case 4:
			printf("프로그램을 종료합니다.");
			exit(0);
		default:
			printf("잘못된 값을 입력하셨습니다.");
		}
	} while (menu != 4);
	return 0;
}

