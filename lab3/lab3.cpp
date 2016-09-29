#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
    string adjective;
    string noun;
    string noun2;
    string verb;
    string game;
    int plays = 0;
    float average = 0;
    char percent ='%';
    
    cout << "It's time to play Mad Libs!" << endl;
    cout << "To begin, please enter an adjective." << endl;
    cin >> adjective;
    cout << "Now enter a noun." << endl;
    cin  >> noun;
    cout << "And another noun." << endl;
    cin >> noun2; 
    cout << "Now a present-tense verb." << endl;
    cin >> verb;
    cout << "Now a type of game that you can play." << endl;
    cin >> game;
    cout << "Now a number." << endl;
    cin >> plays;
    cout << "Now another number with a decimal on it." << endl;
    cin >> average;
    
    
    cout << "Once upon a time there was a " << adjective << " " << noun << "." << endl;
    cout << "This " << noun << "'s" << " friend was a " << noun2 << "." << endl;
    cout << "When the " << noun << " and " << noun2 << " were together, they liked to " << verb << "."<< endl;
    cout << "They also liked to play games." << endl; 
    cout <<"One game that the " << noun << " and " << noun2 << " liked to play was " << game << "." << endl; 
    cout << "They liked it so much they would play it " << plays << " times a day!" << endl;
    cout << "The " << noun << " liked to brag, because his winning average was " << average << percent << "!" << endl;
    cout << "But the " << noun2 << " didn't mind because they were such good friends." << endl;
    cout << "The end." << endl;
    
}