#include <iostream>
#include <cstring>
using namespace std;

/* This program is designed to accept a user
first name and last name and generate three
username options from it.
Date Created: 1.11.16
Created By: Zoe Bishop */

int main(){

//Creates arrays for first and last name    
char firstName[10];
char lastName[20];

cout << endl << "Please enter your first name." << endl;
cin >> firstName;
cout << endl << "Please enter your last name." << endl;
cin >> lastName;

for(int i = 0; i < 10; ++i){
    firstName[i] = tolower(firstName[i]);
}

for(int j = 0; j < 20; ++j){
    lastName[j] = tolower(lastName[j]);
}

int fNameLen = strlen(firstName);
int lNameLen = strlen(lastName);

//Checks to make sure name is within array limits
if(fNameLen > 10 || lNameLen > 20){
    cout << endl << "Your name exceeds the maximum length. Please enter a different name." << endl;
}

//Checks to make sure first and last names are different
else if(strcmp(firstName, lastName) == 0){
    cout << endl << "These two names are the same. Please enter a different name." << endl;
}

else{
char firstUsername[22]; 
char secondUsername[30];
char thirdUsername[21];

//Clears memory in arrays first and third username so we don't get weird characters
memset(firstUsername, 0, 22);
memset(secondUsername, 0, 30);
memset(thirdUsername, 0, 21);

//Copies alloted amount of first name into username
strncpy(firstUsername, firstName, 2);
strncpy(secondUsername, firstName, 10);
strncpy(thirdUsername, firstName, 1);

//Combines the part of the first name with total last name for whole username
strcat(firstUsername, lastName);
strcat(secondUsername, lastName); 
strcat(thirdUsername, lastName); 

cout << endl << "Name: " << firstName << " " << lastName << endl;
cout << "Which of the three usernames would you like?" << endl;

//Outputs first username type ex.ZoBishop
 cout << endl << firstUsername << endl;
 
 //Outputs second username type ex.ZoeBishop
 cout << secondUsername << endl;
 
 //Outputs third username type ex.ZBishop
 cout << thirdUsername << endl;
}
}