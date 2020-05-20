#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct Address
{
	char name[20];
	char phone[20];
	struct Address* link;
}Address;

extern Address* head;
extern Address* tail;

void newregister();
void allprint();
void personalprint();

