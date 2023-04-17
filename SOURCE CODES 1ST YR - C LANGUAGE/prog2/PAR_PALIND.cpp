#include<stdio.h>
#include<string.h>
int main(){
	//variables
	char word[20];
	int check=0,length;
	//gets user input
	printf("Please enter a word: ");
	scanf("%s", &word);
	//gets the value of the length of the string using strlen function
	length=strlen(word);
	
	for(int i=0; i<length; i++){ //loop to compare the values of the letters to determine if it is a palindrome
		if(word[i]==word[(length-1)-i]){
			check=1; //sets check to 1 if they are equal
		} else {
			check=0;//sets check to 0 if they are not
			break;
		}	
	}
	//tests the value of int variable check
	if(check==1){ //if check is equal to 1 it is a palindrome
		printf("\n%s is a palindrome", word); 
	} else { //if int variable check is 0 it is not a palindrome
		printf("\n%s is not a palindrome", word);
	}
	return 0;
}
