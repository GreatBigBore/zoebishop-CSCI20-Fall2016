#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*This program is designed to play a game of rock,
    paper, scissors with the user. It accepts user
    intput and gives the user an option of 
    playing 3, 5, or 7 rounds.
    Created On: 10.18.16
    Created By: Zoe Bishop
    */
    
/*Function that compares the user's input to 
    the computer's choice to decide if the user
    won or lost the round
    */
int game(int userValue){
    int gameResult;
    srand(time(0));
    int compValue = (rand() % 3) + 1;
    
    //If there is a tie it does not add or subtract from the user's score
    if (userValue == compValue){
        gameResult = gameResult + 0;
        cout << "The computer picked the same one as you!" << endl;
        cout << "It's a tie!" << endl;
    }
    //Decides if user won or lost if they choose rock
    if (userValue == 1){
        if (compValue == 2){
            gameResult = gameResult;
            cout << "Computer picked paper. You picked rock." << endl;
            cout << "You lost this round!" << endl;
        }
        else if (compValue == 3){
            gameResult = gameResult + 1;
            cout << "Computer picked scissors. You picked rock." << endl;
            cout << "You won this round!" << endl;
        }
    }
    //Decides if user won or lost if they choose paper
    if (userValue == 2){
        if (compValue == 1){
            gameResult = gameResult + 1;
            cout << "Computer picked rock. You picked paper." << endl;
            cout << "You won this round!" << endl;
        }
        else if (compValue == 3){
            gameResult = gameResult;
            cout << "Computer picked scissors. You picked paper." << endl;
            cout << "You lost this round!" << endl;
        }
    }
    //Decides if user won or lost if they choose scissors
    if (userValue == 3){
        if (compValue == 1){
            gameResult = gameResult;
            cout << "Computer picked rock. You picked scissors." << endl;
            cout << "You lost this round!" << endl;
        }
        else if (compValue == 2){
            gameResult = gameResult + 1;
            cout << "Computer picked paper. You picked scissors." << endl;
            cout << "You won this round!" << endl;
        }
    }
    return gameResult;
}

int main(){
    int totalRounds;
    int userChoice;
    int gameResult;
   
    cout << "Time to play Rock, Paper, Scissors." << endl; 
    cout << "To begin, please select if you would like to play 3, 5, or 7 rounds." << endl;
    cin >> totalRounds;
    
    cout << endl << "First round: Please select 1 for rock, 2 for paper, or 3 for scissors." << endl;
    cin >> userChoice;
    gameResult = gameResult + game(userChoice);
   
    cout << endl << "Second round: Please select 1 for rock, 2 for paper, or 3 for scissors." << endl;
    cin >> userChoice;
    gameResult = gameResult + game(userChoice);
   
    cout << endl << "Third round: Please select 1 for rock, 2 for paper, or 3 for scissors." << endl;
    cin >> userChoice;
    gameResult = gameResult + game(userChoice);
    
    //Adds two more rounds if the user chose 5 or 7 rounds
    if(totalRounds == 5 || totalRounds == 7){
        cout << endl << "Fourth round: Please select 1 for rock, 2 for paper, or 3 for scissors." << endl;
        cin >> userChoice;
        gameResult = gameResult + game(userChoice);
       
        cout << endl << "Fifth round: Please select 1 for rock, 2 for paper, or 3 for scissors." << endl;
        cin >> userChoice;
        gameResult = gameResult + game(userChoice);
    }
    
    //Adds two more rounds if the user chose 7 rounds
    if(totalRounds == 7){
         cout << endl << "Sixth round: Please select 1 for rock, 2 for paper, or 3 for scissors."<< endl;
        cin >> userChoice;
        gameResult = gameResult + game(userChoice);
        
        cout << endl << "Seventh round: Please select 1 for rock, 2 for paper, or 3 for scissors." << endl;
        cin >> userChoice;
        gameResult = gameResult + game(userChoice);
    }
    
    cout << endl << "You won " << gameResult << " games." << endl;
    cout << "That is " << gameResult << " out of " << totalRounds << " games." << endl;
    if (gameResult >= (.5 * totalRounds)){
        cout << "You won!" << endl;
    }
    else if (gameResult < (.5 * totalRounds)){
        cout << "You lost!" << endl;
    }
}
