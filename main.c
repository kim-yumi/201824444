#include "main.h"

Address* head = NULL;
Address* tail = NULL;
void pw_check() {
	static int pw_count = 0;
	char pw[] = "qwer1234";
	char password[40] = "";
	printf("��й�ȣ �Է�: ");
	gets(password);
	while (pw_count != 3) {
		gets(password);
		if (strcmp(pw, password) == 0) {
			pw_count = 0;
			return;
		}
		else {
			pw_count++;
			printf("��й�ȣ(%dȸ����): ", pw_count);
		}
		if (pw_count == 3) {
			printf("����� �� ����!\n ���α׷��� �����մϴ�.");
			exit(0);
		}
	}
}

int main() {

	int menu;
	do {
		printf("��ȭ��ȣ ����\n");
		printf("1. ���\t2. ��ü�˻�\t3. Ư���ΰ˻�\t4. ����\n�޴�����: ");
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
			printf("���α׷��� �����մϴ�.");
			exit(0);
		default:
			printf("�߸��� ���� �Է��ϼ̽��ϴ�.");
		}
	} while (menu != 4);
	return 0;
}

