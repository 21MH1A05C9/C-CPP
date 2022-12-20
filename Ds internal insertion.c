#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *add;
};
typedef struct Node NODE;
NODE *Head=NULL;

void insert_end(int val)
{
	NODE *NN,*temp;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else
	{
		temp=Head;
		while(temp->add!=NULL)
		{
			temp=temp->add;
		}
		temp->add=NN;
	}	
}

void insert_head(int val)
{
	NODE *NN;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else
	{
		NN->add=Head;
		Head=NN;
	}
}

void insert_pos(int val,int p)
{
	NODE *NN,*temp;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else if(p==1)
	{
		insert_head(val);
	}
	else
	{
		temp=Head;
		while(p-2)
		{
			if(temp->add==NULL)
			{
				break;
			}
			temp=temp->add;
			p--;
		}
		NN->add=temp->add;
		temp->add=NN;
	}
}

void display()
{
	NODE *temp;
	temp=Head;
	if(Head==NULL)
	{
		printf("No Nodes to Print\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->add;
		}
		printf("\n");
	}
}
void main()
{
	int ch,val,pos;
	while(1)
	{
		printf("1.Insert at End 2.Insert at Head 3.Insert by Position 4.Display 5.Exit: ");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&val);
			insert_end(val);
		}
		else if(ch==2)
		{
			scanf("%d",&val);
			insert_head(val);	
		}
		else if(ch==3)
		{
			scanf("%d",&val);
			scanf("%d",&pos);
			insert_pos(val,pos);
		}
		else if(ch==4)
		{
			display();
		}
		else
		{
			break;
		}
	}
}




















