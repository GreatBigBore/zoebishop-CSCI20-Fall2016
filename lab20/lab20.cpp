#include <iostream> //includes input and output functions from c++ library
#include <cstring> //includes cstring functions from c++ library
using namespace std; //shortcut so we don't have to include std in each line of code
 
int main() //main program code
{
                char firststr[10]; //creates char array of size 10
                int firstname = 0; //initializes int firstname to 0
                char *head = firststr; //initializing pointer to user input firststr
                char *tail = firststr; //initializing pointer to user input firststr
                cout << "Please enter a 10 letter word or less" << endl; //outputs the text and an endline to screen
                cin >> firststr; //accepts user input and stores it in firststr
                strlen(firststr); //gets length of firststr
                firstname = strlen(firststr); //stores length of firststr in firstname
                cout << "Your word is " << firststr << endl; //outputs user's word
                
                //checks to make sure user input is less than 10 characters
                if (firstname<10) //runs if int firstname is < 10
                {
                                //outputs each character in firststr until it reaches a null character
                                while (*head != '\0') //runs loop until it finds a null character in the firststr array
                                {
                                                cout << *head; //outputs the char 
                                                head++; //adds one to head to ensure we don't have infinite loop
                                }
                }
                //outputs warning if user word exceeds ten characters
                else //runs if the if statement above is not satisfied
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; //outputs text and endline to screen
                }
                cout << endl; //outputs an endline to screen
                
                tail = &firststr[strlen(firststr) - 1]; //gets memory address of last character in user word and stores that char in tail
                
                if (firstname < 10) //runs if int firstname is < 10
                {
                                //runs until it reaches the 'beginning' of the array (index 0)
                                while (*tail>0)//checks to make sure the index value is > 0
                                {
                                                cout << *tail; //outputs user word backward
                                                tail--; //subtracts one from tail
                                }
                }
                cout << endl; //outputs an endilne to screen
                head = firststr; //stores firststr in head
                tail = &firststr[strlen(firststr) - 1]; //gets memory address of last character in user word and stores that char in tail
                head++; //adds one to head
                tail--; //subtracts one from tail
                //runs if head and tail hold the same char values for every index
                if (*head == *tail) //checks to see if the user word is the same backwards and forwards
                {
                                cout << "It is a palindrome!" << endl; //outputs text and an endline to screen
                }
                //runs if the if statement is not satisfied
                else
                {
                                cout << "It is not a palindrome" << endl; //outputs text and endline to screen
                }
 
                return 0; //returns 0 to confirm end of program
}