#include <iostream>
#include "library.h"


void Library::add()
{

	if (!Head)
	{
		Head = this;
		this->next = NULL;
	}
	else
	{
		Library *q = Head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			};
			q->next = this;
			this->next = NULL;
		}
	}
}

void Library::show()
{

	Library *p = Head;
	while (p)
	{
		p->showcontent();
		p = p->next;
	}
}