#include <iostream>
#include <cstring>
#include <string>
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

cout << endl << "Name: " << firstName << " " << lastName << endl;
cout << "Which of the three usernames would you like?" << endl;

//Outputs first username type ex.ZoBishop
 cout << endl << firstName[0] << firstName[1] << lastName << endl;
 
 //Outputs second username type ex.ZoeBishop
 cout << firstName << lastName << endl;
 
 //Outputs third username type ex.ZBishop
 cout << firstName[0] << lastName << endl;
}