#include<stdio.h>
#include<stdlib.h>

struct*
{
	int data;
	struct*next;
};

struct*
{
	createAnode(int new_data);
}
void printlist(struct*head);

int main()
{asa
	struct*head = createAnode(1);
	head -> next = createAnode(2);
	head -> next -> next = createAnode(4);
	
	struct* head1=createAnode(1);
	head1->next=createAnode(2);
	head1->next->next=createAnode(4);
	
	struct* 
struct*head2=createAnode(1);
	head2->next=createAnode(3);
	head2->next->next=createAnode(4);

	printf("head1");
	printf("head2");
}

struct* createAnode(int new_data)
{
	struct* new_node = (struct*)malloc(sizeof(struct));
	new_node -> data = new_data;
	new_node -> next = NULL;
	
	return(new_node);
}

void printlist(struct* head)
{
	struct* temp = head;
	
	while(temp!= NULL)
	{
		printf("%d->",temp -> data);
		temp -> next;
	}
}
