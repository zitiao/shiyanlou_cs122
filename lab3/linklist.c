#include "linklist.h"
#include <stdio.h>
#include <stdlib.h>
tDataNode* FindCmd(tDataNode * head, char * cmd)
{
	if (head == NULL || cmd == NULL)
	{
		return NULL;
	}
	tDataNode *p = head;
	while(p != NULL)
	{
		if (strcmp(p->cmd, cmd) == 0)
		{
			return p;
		}
		p = p->next;
	}
	return NULL;
}

int showAllCmd(tDataNode * head)
{
	printf("Menu List:\n");
	tDataNode *p = head;
	while(p != NULL)
	{
		printf("%s - %s\n", p->cmd, p->desc);
		p = p-> next;
	}   
	return 0;
}

