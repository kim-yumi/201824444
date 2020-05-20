#include "main.h"

void newregister() {
	pw_check(); 
	char name[20]; 
	char phone[20]; 
	printf("등록할 이름: "); 
	gets(name); 
	printf("전화번호: "); 
	gets(phone);
	Address * new = (Address*)malloc(sizeof(Address)); 
	strcpy(new->name, name); 
	strcpy(new->phone, phone); 
	printf("%s 정보 등록 완료!\n", name); 

	new->link = NULL;
	if (head == NULL) { 
		head = new; 
		tail = new; } 
	else { 
		tail->link = new; 
		tail = new;
	}  
}
