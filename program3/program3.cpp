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
    
class Game{
    public: 
        Game();
        int play();
        string numToChoice(int choice);
        int gameRound(int roundNumber);
    private:
        int wins;
        int ties;
};

Game::Game(){
        srand(time(0));
        wins = 0;
        ties = 0;
}
    
int Game::play(int numRounds){

    int roundResult = 0;

    for (int i = 0; i < numRounds; ++i){
        roundResult = gameRound(i);
        if(roundResult == 0){
            ties = ties + 1;
        }
        else if(roundResult == 1){
            wins = wins + 1;
        }
    }
    string sWins = "";
    string sTies = "";
    if(wins != 1){
        sWins = "s";
    }
    if(ties != 1){
        sTies = "s";
    }
    cout << "You won " << wins << " round" << sWins << " and tied " << ties << " round" << sTies << "." << endl;
    cout << "That is " << wins + ties << " out of " << numRounds << "." << endl;
    int totalScore = wins + ties;
    if (totalScore >= (.5 * numRounds)){
        cout << "You won!" << endl;
    }
    else if (totalScore < (.5 * numRounds)){
        cout << "You lost!" << endl;
    }
}

string Game::numToChoice(int choice){
    switch(choice){
        case 1:
            return "rock";
            break;
        case 2:
            return "paper";
            break;
        case 3:
            return "scissors";
            break;
    }
}
int Game::gameRound(int roundNumber, int userChoice){
    int userChoice = 0;
    int compChoice = (rand() % 3) + 1;
    int roundResult = -2;
    
    if (userChoice > compChoice || (userChoice == 1 && compChoice == 3)){
        roundResult = 1;
    }
    else if (userChoice == compChoice){
        roundResult = 0;
    }
    else{
        roundResult = -1;
    }
    cout << "You chose " << numToChoice(userChoice) << "." << endl;
    cout << "The computer chose " << numToChoice(compChoice) << "." << endl;
    switch(roundResult){
        case -1: 
            cout << "You lost!" << endl;
            break;
        case 0:
            cout << "It's a tie!" << endl;
            break;
        case 1: 
            cout << "You won!" << endl;
            break;
    }
    cout << endl;
    return roundResult;
}

int main(){
    int numRounds;
    int roundNumber;
    int userChoice;
    
    cout << "Round " << roundNumber + 1 << endl;
    cout << "Please enter 1 for rock, 2 for paper, and 3 for scissors." << endl;
    cin >> userChoice;
    
    Game gamePlay(numRounds);
    Game gameRound(roundNumber, userChoice);
    Game userGame;
    userGame.play();
}


    
    
  