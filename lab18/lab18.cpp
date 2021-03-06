#include <iostream>
#include <string>
using namespace std;

/* This program is designed to accept a user
first name and last name and generate three
username options from it.
Date Created: 1.11.16
Created By: Zoe Bishop */

int main(){

string firstName;
string lastName;

cout << endl << "Please enter your first name." << endl;
cin >> firstName;
cout << endl << "Please enter your last name." << endl;
cin >> lastName;

//Checks to make sure name is within limits
if(firstName.length() > 10 || lastName.length() > 20){
    cout << endl << "Your name exceeds the maximum length. Please enter a different name." << endl;
}

//Checks to make sure first and last names are different
else if(firstName == lastName){
    cout << endl << "These two names are the same. Please enter a different name." << endl;
}

string userName1 = firstName;
string userName2 = firstName;
string userName3 = firstName;

cout << endl << "Name: " << firstName << " " << lastName << endl;
cout << "Which of these usernames would you like?" << endl;

userName1 = firstName.replace(2,8,lastName);
cout << userName1 << endl;

userName2 = userName2.append(lastName);
cout << userName2 << endl;

userName3 = firstName.replace(1,8, lastName);
cout << userName3 << endl;

}