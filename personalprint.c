#include "main.h" 

void personalprint() { 
	Address * curr = head; 
	char name_search[30]; 
	printf("�˻��� �̸�: "); 
	getchar();
	gets(name_search); 
	
	while (curr != NULL) { 
		if (strcmp(curr->name, name_search) == 0) { 
			printf("%s %s\n", curr->name, curr->phone); 
			break; } 
		else 
			curr = curr->link;
	} 
}

