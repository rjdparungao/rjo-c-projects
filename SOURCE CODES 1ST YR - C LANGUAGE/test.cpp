//library imports
#include <stdio.h>   
#include <stdlib.h>

// Global Variables
char choice;        //For Switch case 
int order, sort;    //For Switch case
int i, j, k, n; 
int temp;

// Initialize for previous and next pointers of Nodes
struct node
{
    struct node *prev;
    int x;
    struct node *next;
};

//node pointers for linked list
struct node *head, *curr, *tail;

//Function Prototyping
//create linked list function
void createDoubly();

//display functions - Normal or Reverse
void displayNorm();
void displayRev();

//sort functions - Ascending or Descending
void sortAscend();
void sortDescend();

//insert and delete functions
void insNode();
void delNode();

//search Function
void searchNum();

//Main Body of the Program
int main() 
{

    //local variables
    int loop = 1;
  
    while (loop == 1)  //Loops the Menu 
    {   
        system("cls"); //Clears Terminal
        
        if(head == NULL) 
        //Menu only shows Creation of Doubly Linked List and Exit choices
    	{
            //Menu of Options
    		printf("\n\t\tMAIN MENU\n");    
       		printf("_________________________________________\n\n");
        	printf("A. Create a Doubly Linked List\n");
    		printf("G. Exit\n");
        	printf("_________________________________________\n");
        	printf("\nChoose an Option from the Menu: ");
        	scanf("\n");
        	scanf("%c", &choice);
    	}
        else 
        //Once Doubly Linked List is created, other options show up
        {  
            //Menu of Options
        	printf("\n\t\tMAIN MENU\n");   
        	printf("_________________________________________\n\n");
        	printf("A. Create a Doubly Linked List\n");
        	printf("B. Display a Doubly Linked List\n");
        	printf("C. Sort a Doubly Linked List\n");
        	printf("D. Insert a Node\n");
        	printf("E. Delete a Node\n");
        	printf("F. Search a Number in the List\n");
        	printf("G. Exit\n");
        	printf("__________________________________________\n");
        	printf("\nChoose an Option from the Menu: ");
        	scanf("\n");
        	scanf("%c", &choice);
		}

        switch(choice)
        {
        case 'A': case 'a':
            // Creating Doubly Linked List
            createDoubly();     
            break;
        case 'B': case 'b':
            if(head == NULL)
            {
                printf("\nEnter a Linked List first");
                break;
            }
            printf("How would you like to display the Linked List?\n");
            printf("1. Normal Order\n");
            printf("2. Reverse Order\n");
            printf("Choose an Option: ");
            scanf("%d", &order);

            //Choosing for Displaying Order of Linked List
            switch (order)  
            {
            case 1:
                //Calls displayNorm Function
                displayNorm(); 
                break;
            case 2:
                //Calls displayRev Function
                displayRev(); 
                break;           
            }
            break;
        case 'C': case 'c':
            //sorting the list
            if(head == NULL)
            {
                printf("\nEnter a Linked List first");
                break;
            }
            
            printf("How would you like the Linked List to be sorted?\n");
            printf("1. Ascending Order\n");
            printf("2. Descending Order\n");
            printf("Choose an Option: ");
            scanf("%d", &sort);
            
            //Choosing Ascending or Descending Order
            switch(sort)    
            {
                case 1:
                    sortAscend(); //Calls SortAscend Function
                    printf("\nList has been sorted in ascending order.\n");
                    break;
                case 2:
                    sortDescend(); //Calls SortDescend Function
                    printf("\nList has been sorted in descending order.\n");
                    break;
            }
            break;
        case 'D': case 'd':
            //Inserting a Node
            if (head == NULL)
            {
                printf("\nEnter a Linked List first");
                break;
            }
            
            insNode(); //Calls insNode Function
            break;
        case 'E': case 'e':    
            //Deleting a Node
            if (head == NULL)
            {
                printf("\nEnter a Linked List first");
                break;
            }
            
            delNode(); //Calls delNode Function
            break;
        case 'F': case 'f':     
            //Searching a Number
            if(head == NULL)
            {
                printf("\nEnter a Linked List first");
                break;
            }

            searchNum(); //Calls searchNum Function
            break;
        case 'G': case 'g': 
            //prompts the user the program has been terminated    
            printf("\nProgram Exited!\nThank you for using the Program!");
            loop = 0;
            break;
        default:
            printf("\nInvalid input. Please enter a valid choice!\n");
            break;
        }

        printf("\n\n");      
        system("pause");
    }
    return 0;
}

void createDoubly()
{
    printf("\nA. CREATE A DOUBLY LINKED LIST\n");
    
    //sets all node pointers to NULL
    head=curr=tail = NULL;
    
    //Allocate a Node
    curr=(struct node*)malloc(sizeof(struct node)); 

    printf("Enter a value to be included in the list: ");
    scanf("%d", &curr->x);

    //Creation of Head Node and Linked List
    while(curr->x!=0)
    {
        //if head is NULL
        if(head == NULL) 
        {
            head = curr;        //makes curr the head node
            head->prev = NULL;  //sets head->prev to NULL
            head->next = NULL;  //sets head->next to NULL
            tail = curr;        //makes curr also the tail node
        }
        //if head is not NULL
        else
        {
            tail->next = curr; //points tail->next to curr
            curr->prev = tail; //points curr->prev to tail
            curr->next = NULL; //sets curr->next to NULL
            tail = curr;       //makes curr the tail node
        }
        //Allocation of Nodes 
        curr=(struct node *)malloc(sizeof(struct node));
        printf("Enter a value to be included in the list: ");  
        scanf("%d", &curr->x);
    }
}

void displayNorm()
{   
    printf("\nB. DISPLAY THE DOUBLY LINKED LIST\n1. Normal Order\n");
    //Displays the Created/Result List Normally

    curr = head;

    printf("\nThe list displayed in normal order: ");
    do
    {
        printf("%d ", curr->x); //prints the value in the list
        curr = curr->next;      //traverses the list forward
    } while (curr!=NULL);
}

void displayRev() 
{
    printf("\nB. DISPLAY THE DOUBLY LINKED LIST\n2. Reverse Order\n");
    //Displays the Created/Result List in Reverse

    curr = tail;

    printf("\nThe list displayed in reversed order: ");
    
    do
    {
            printf("%d ", curr->x); //prints the value in the list
            curr = curr->prev;      //traverses the list backward
    } while (curr!=NULL);
}

void sortAscend()
{   
    //Balloon Sort --> Ascending Order
    //use of new node pointers for sorting
    struct node *i, *j;

    //Double For-Loops for Cycling through 2 pointers pointing to 2 Nodes for Comparison
    for(i = head; i->next != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            //checks if i->x is greater than j->x
            if(i->x > j->x)
            {
                //switching algorithm
                temp = j->x; //stores lower value to temp
                j->x = i->x; //passes the value of i->x to j->x
                i->x = temp; //passes the value of temp to i->x
            }
        }
        
    }
}

void sortDescend()
{
    //Balloon Sort --> Descending Order
    //use of new node pointers for sorting
    struct node *i, *j;

    /*Double For-Loops for Cycling through 2 pointers pointing to 2 Nodes 
    for Comparison but in Descending Order*/
    for(i = head; i->next != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            //checks if i->x is less than j->x
            if (i->x < j->x)
            {
                //switching algorithm
                temp = j->x; //stores higher value to temp
                j->x = i->x; //passes the value of i->x to j->x
                i->x = temp; //passes the value of temp to i->x
            }
        }
        
    }
}

void insNode()
{
    printf("\nD. INSERT A NODE IN THE LIST\n");
    //new node pointer to compare to inserted node
    struct node *comp; 
    
    //Calls the sortAscend function and sorts the list first before entering a node
    sortAscend(); 
    do
    {
        curr = (struct node *)malloc(sizeof(struct node)); //allocates a node to insert
        printf("Enter a value to be inserted: ");
        scanf("%d", &curr->x);

        if (curr->x == 0) 
        {   
            //Zero is an invalid input
            printf("\nCannot enter a value of 0!\n");
            goto endFunc;
        }
        if(head->x >= curr->x)  //if new node is greater than or equal to head,
        {
            head->prev = curr;  //node will be inserted before head node
            curr->next = head;  //sets new node's next pointer to head
            head = curr;        //assigns new node as head
            head->prev = NULL; 
            printf("\nThe node has been inserted!");
        }
        else if(tail->x <= curr->x) //if new node is less than or equal to tail node
        {   
            tail->next = curr;  //points tail next pointer to curr
            curr->prev = tail;  //points curr prev pointer to tail
            tail = curr;        //assign tail to curr
            tail->next = NULL;  //terminate the list
            printf("\nThe node has been inserted!");
        }   
        else //checks the rest of the list for insertion of node
        {   
            comp = head;
            while(comp != NULL)
            {
                if(comp->x >= curr->x)
                {   
                    comp->prev->next = curr; //points previous node's next pointer to curr
                    curr->prev = comp->prev; //points prev pointer of curr to previous node
                    comp->prev = curr;       //curr is now pointing to comp->prev
                    curr->next = comp;       //comp is now pointing to curr->next
                    printf("\nThe node has been inserted!");
                    goto endFunc;
                }
                comp = comp->next;
            }
        }
    endFunc:        
    
        //prompts the user to enter y/n corresponding if they would like to enter again
        printf("\nDo you want to insert another node? (y/n): "); 
        scanf("%s", &choice);

        //checks choice 
        switch(choice) 
        {
            case 'Y': case 'y':
                k = 0; //loops again to insert a new node + data
                break;
            case 'N': case 'n':
                k = 1; //terminates loop
                break;
        }
    } while (k == 0);
}

void delNode()
{
    printf("\nE. DELETE A NODE IN THE LIST\n");
	do
	{
        //prompts the user to enter a value to be removed from the list
        printf("\nEnter a value to be deleted from the list: "); 
        //gets the user input and assigns value to n
        scanf("%d", &n); 

        curr = head;
        i = 0;
    
    	do  
    	{
        	if(curr->x == n)    //Loop that checks if the number is in the list
        	{
            	i++;            //increments int variable i based on how many times the number is seen in the list
        	}
        	curr = curr->next;  //Traverses list

    	} while (curr != NULL);
    
   
        if(i == 0) //if i is 0 then number is not in the list
        {
            printf("\nSystem cannot delete that number. The number %d is not in the list.\n", n);
        }
    
        curr = head;

        while (i != 0) 
        {    
            //if curr is equal to head or tail
            if (curr == head || curr == tail) 
            {
                if (curr == head && curr == tail) //deletes the last node remaining
                {
                    head = NULL; 
                    tail = NULL;
                    i--;
                }
                else if (head->x == n) //deletes head node if int x value is equal to n
                {
                    curr = head; 
                    head = head->next;
                    head->prev = NULL;
                    i--;
                    
                }
                else if (tail->x == n) //deletes tail node if int x value is equal to n
                {
                    curr = tail;
                    tail = tail->prev;
                    tail->next = NULL;
                    i--;
                }
            } 
            else //else checks nodes in between head and tail
            {
                if (curr->x == n)
                {
                    curr->prev->next = curr->next; 
                    curr->next->prev = curr->prev;
                    i--;
                }
            }
            if (curr->next == NULL) //checks if the next node is not NULL
                curr = curr->prev;  //if next node is NULL, assigns curr to previous node
                
            else //if not 
                curr = curr->next;  //assigns curr to the next node
        }

        if (head == NULL)
        {
            printf("\nThe number/s has been deleted! No more nodes remaining.");
            break;
        }
        else
            printf("\nThe number/s has been deleted!");
               
        //prompts the user to enter y/n corresponding if they would like to enter again
        printf("\nDo you want to delete another number? (y/n): "); 
        scanf("%s", &choice);

        switch(choice) //checks choice 
    	{
        case 'Y': case 'y':
            k = 0; //loops again to delete a node
            break;
        case 'N': case 'n':
            k = 1; //terminates loop
            break;
    	}
	} while (k == 0);
}
    
//function for searching a number in the list
void searchNum()
{
    printf("\nF. SEARCH A NUMBER IN THE LIST\n");
    curr = head;
    do 
    {
        curr = head; 
        k = n = j = 0; 
        //Prompts the user to enter a number to search in the list
        printf("\nEnter a number to be searched in the list: "); 
        //gets the input and places value in integer variable n
        scanf("%d", &n); 

        do  
        {
            //Loop that checks if number is in the list.
            if(curr->x == n) 
            {
                /*increments integer variable k based on 
                how many times the number occured in the list*/
                k++; 
            }
            curr = curr->next; //Traverses list
            
        } while (curr != NULL); 

        curr = head;

        if(k > 0)
        {   
            //if the number is in the list
            printf("\nThe number %d is in the list!\n\nIt is in the node number/s: ", n);

            do
            {   
                j++; //increments j

                if(curr->x == n)
                    printf("node %d ", j); //prints the node numbers where the number was found 
                curr = curr->next;         //traverses the list

            } while (curr != NULL);
            
            //prints how many times the number occured in the list
            printf("\nThe number %d has %d occurrence/s in the list.\n\n", n, k);
        }
        else
            //if the number is not in the list
            printf("\nThe number %d is not the list\n", n);

        printf("\nDo you want to search another number? (y/n): "); //prompts the user to enter y/n corresponding if they would like to search a number again
        scanf("%s", &choice);

        switch(choice) //checks the user's choice 
        {
        case 'Y': case 'y':
            k = 0; //continues loop
            break;
        case 'N': case 'n':
            k = 1; //terminates loop
            break;
        }

    } while (k == 0);
}
/*      End of Code     */
