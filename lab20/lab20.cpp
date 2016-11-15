#include <iostream> 
#include <cstring>
using namespace std;
 
int main()
{
                char firststr[10]; //creates char array of size 10
                int firstname = 0; //initializes int firstname to 0
                char *head = firststr; //initializing pointer to user input firststr
                char *tail = firststr; //initializing pointer to user input firststr
                cout << "Please enter a 10 letter word or less" << endl; //outputs the text and an endline
                cin >> firststr; //accepts user input and stores it in firststr
                strlen(firststr); //gets length of firststr
                firstname = strlen(firststr); //stores length of firststr in firstname
                cout << "Your word is " << firststr << endl; //outputs user's word
                
                //checks to make sure user input is less than 10 characters
                if (firstname<10) //runs if int firstname is < 10
                {
                                //outputs each character in firststr until it reaches a null character
                                while (*head != '\0') //runs loop until 
                                {
                                                cout << *head;
                                                head++;
                                }
                }
                //outputs warning if user word exceeds ten characters
                else
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
                }
                cout << endl;
                //gets the memory address of the last character in user's word
                tail = &firststr[strlen(firststr) - 1];
                
                if (firstname < 10)
                {
                                //
                                while (*tail>0)
                                {
                                                cout << *tail;
                                                tail--;
                                }
                }
                cout << endl;
                head = firststr;
                tail = &firststr[strlen(firststr) - 1];
                head++;
                tail--;
                if (*head == *tail)
                {
                                cout << "It is an palindrome!" << endl;
                }
                else
                {
                                cout << "It is not an palindrome" << endl;
                }
 
                return 0;
}