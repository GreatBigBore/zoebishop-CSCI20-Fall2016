#include <iostream>
#include <string>
using namespace std;

/* Created by: Zoe Bishop
    Created on: 10.6.16
    This program is designed to tell you what animal you are
    based on a series of questions that it asks.
    */

int main(){
    
    char outdoorPref;
    char runPref;
    char cheesePref;
    char swimPref;
    
    cout << "Please answer with lowercase y or n." << endl;
    cout << "Do you like the outdoors?" << endl;
    cin >> outdoorPref;
    
    //Takes initial input and reroutes answer to next question
    switch(outdoorPref){
        case 'y':
        cout << endl << "Do you like to run?" << endl;
        cin >> runPref;
        break;
        case 'n':
        cout << endl << "Do you like cheese?" << endl;
        cin >> cheesePref;
        break;
    }
    
    //Takes second input and provides appropriate answer
    switch (runPref){
        case 'y':
            cout << endl << "You are a horse!" << endl;
            break;
        case 'n':
            cout << endl << "You are a turtle!" << endl;
    }
    
    //Takes second input and provides appropriate answer
   if (cheesePref == 'y'){
        cout << endl << "You are a mouse!" << endl;
   }
    else if (cheesePref == 'n'){
        cout << endl << "Do you like to swim?" << endl;
        cin >> swimPref;
            
            //If second question answer is no, reroutes to a third question
            if (swimPref == 'y'){
                cout << endl << "You are a fish!" << endl;
            }
            else if (swimPref == 'n'){
                cout << endl << "You are a cat!" << endl;
            }
    }
}