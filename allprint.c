#include "main.h" 

void allprint() { 
	Address * curr = head; 
	printf("<<��ȭ��ȣ ���>>\n"); 
	while (curr != NULL) { 
		printf("%s ", curr->name); 
		printf("%s\n", curr->phone); 
		curr = curr->link; 
	} 
}


