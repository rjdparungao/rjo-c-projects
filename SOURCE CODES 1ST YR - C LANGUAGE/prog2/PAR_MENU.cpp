#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node //node 
{
	int x;
	struct node *next;
};

struct node *head, *curr, *tail;

//function prototype
void createLL();
void dispSum();
void dispHighest();
void dispLowest();
void dispOdd();
void dispEven();

int main()
{	
	//variables
	int check=0;
	char choice=0;
	
while(check!=2)
{	
	choice=0;
	system("cls");
	
	printf("\t\tMAIN MENU\t\t\n"); //printing of menu of choices
	printf("\tA. Enter Linked List Values\n\tB. Compute and Display Sum of Values\n\tC. Display Highest Value\n\tD. Display Lowest Value\n\tE. Display Odd Numbers\n\tF. Display Even Numbers\n\tG. Exit");
	
	printf("\n\nWhat would you like to do?: ");
	scanf(" %c", &choice);
	
	switch(choice) //switch to test value of choice variable and calls corresponding function based from the value
	{
		case 'a':
		case 'A':
				createLL(); //create linked list
				check=1;
				break;
		case 'b':
		case 'B':
				if(check==1)
				{
				dispSum(); //displays sums of values in the linked list
				} 
				else
				{
				printf("\nError! Create a linked list first.");
				}
				break;
		case 'c':
		case 'C':
				if(check==1)
				{
				dispHighest(); //displays highest value in the linked list
				}
				else
				{
				printf("\nError! Create a linked list first.");
				}
				break;
		case 'd':
		case 'D':
				if(check==1)
				{
				dispLowest(); //displays lowest values in the linked list
				}
				else
				{
				printf("\nError! Create a linked list first.");
				}
				break;
		case 'e':
		case 'E':
				if(check==1)
				{
				dispOdd(); //displays odd values in the linked list
				}
				else
				{
				printf("\nError! Create a linked list first.");
				}
				break;
		case 'f':
		case 'F':
				if(check==1)
				{
				dispEven(); //displays even values in the linked list
				}
				else
				{
				printf("\nError! Create a linked list first.");
				}
				break;
		case 'g':
		case 'G':
				check=2; //sets check to 2 to terminate the program
				printf("\nProgram Exit!"); 
				break;
		default:
			printf("\nInvalid Input! Please enter a valid input.");
			break;
	}
		printf("\n\n");
		system("pause");
}
	return 0;
}
void createLL() //function to create a linked list
{	
	head=curr=tail=NULL;
	printf("\n\nLet's create a linked list!\n");
	printf("Note: To end the list input enter a 0 value.\n");
	curr = (struct node*)malloc(sizeof(struct node)); //allocates a node
	
	printf("Enter a value for x: "); //input
	scanf("%d", &curr->x);
	while(curr->x != 0) 
	{
		if(head==NULL)
		{
			head=curr;
			head->next=NULL;
			tail=curr;
		}
		else
		{
			tail->next=curr;
			curr->next=NULL;
			tail=curr;
		}
		curr = (struct node*)malloc(sizeof(struct node));
		
		printf("Enter a value for x: ");
		scanf("%d", &curr->x);
	}
	printf("\nEND OF LIST!");
}

void dispSum() //function to get and print the sum of the linked list
{	
	int sum=0;
	curr=head;
	while(curr!=NULL)
	{
		sum+=curr->x;
		curr=curr->next;
	}
	printf("\nThe sum of the values in the linked list is: %d", sum);
}

void dispHighest() //function to display the highest value in the linked list
{
	int highest=0;
	curr=head;
	while(curr!=NULL)
	{
		if(curr->x>highest)
		{
			highest=curr->x;	
		}
		curr = curr->next;
	}
	printf("\nThe highest value in the linked list is: %d", highest);
}

void dispLowest() //function to display the lowest value in the linked list
{
	int lowest;
	curr=head;
	lowest=curr->x;
	while(curr!=NULL)
	{
		if(curr->x<lowest)
		{
			lowest=curr->x;
		}
		curr = curr->next;
	}
	printf("\nThe lowest value in the linked list is: %d", lowest);
}

void dispOdd() //function to display odd values in the linked list
{
	curr=head;
	printf("\nThe odd values in the linked list are:");
	while(curr!=NULL)
	{
		if(curr->x%2!=0)
		{
			printf("%3d", curr->x);
		}
		curr=curr->next;
	}
}

void dispEven() //function to display even values in the linked list
{
	curr=head;
	printf("\nThe even values in the linked list are:");
	while(curr!=NULL)
	{
		if(curr->x%2==0)
		{
			printf("%3d", curr->x);	
		}
		curr=curr->next;
	}
}
