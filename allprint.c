#include "main.h" 

void allprint() { 
	Address * curr = head; 
	printf("<<전화번호 목록>>\n"); 
	while (curr != NULL) { 
		printf("%s ", curr->name); 
		printf("%s\n", curr->phone); 
		curr = curr->link; 
	} 
}


