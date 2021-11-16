#include<stdio.h>
#define max 3

int stack[max];
int top=-1;

void insert()
{
	if (top==max-1)
		{
		printf("\nover flow");
		}
	else
		{
		top++;
		printf("\nenter a number");
		scanf("%d",&stack[top]);
		}
		         
}
void display()
{
	if(top==-1)
	{
	printf("\nyour stack is empty");
	}
	else
	{
	int i;
	printf("stack elements are:");
	for(i=0;i<=top;i++)
		{
		printf("\n%d",stack[i]);
		}
	}
}

void pop()
{
	if (top==-1)
		{
		printf("\nstack underflow");
		}
	else
		{
		top--;
		}
}


void main()
{
	int op;
        char ch;
	do
	{
	printf("****menu****\n");
	printf("enter your choice\n1.push\n2.display\n3.pop");
        scanf("%d",&op);
	
		switch(op)
		{
		case 1:
		insert();
		break;
        	case 2:
		display();
		break;
		case 3:
		pop();
		break;
		default:
        	printf("\nwronge option");
		break; 
		}
	printf("\npress y to countinue");
	scanf("%s",&ch);
	}
        while(ch=='y');
	
	
}
	
