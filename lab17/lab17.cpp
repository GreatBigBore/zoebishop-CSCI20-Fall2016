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
cout << endl << "Name: " << firstName << " " << lastName << endl;
cout << "Which of the three usernames would you like?" << endl;

//Outputs first username type ex.ZoBishop
 cout << endl << firstName[0] << firstName[1] << lastName << endl;
 
 //Outputs second username type ex.ZoeBishop
 cout << firstName << lastName << endl;
 
 //Outputs third username type ex.ZBishop
 cout << firstName[0] << lastName << endl;
}
}