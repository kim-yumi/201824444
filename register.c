#include "main.h"

void newregister() {
	pw_check(); 
	char name[20]; 
	char phone[20]; 
	printf("����� �̸�: "); 
	gets(name); 
	printf("��ȭ��ȣ: "); 
	gets(phone);
	Address * new = (Address*)malloc(sizeof(Address)); 
	strcpy(new->name, name); 
	strcpy(new->phone, phone); 
	printf("%s ���� ��� �Ϸ�!\n", name); 

	new->link = NULL;
	if (head == NULL) { 
		head = new; 
		tail = new; } 
	else { 
		tail->link = new; 
		tail = new;
	}  
}
