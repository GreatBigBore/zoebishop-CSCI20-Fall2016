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
        string numToChoice(int choice);
        int playRound(int userChoice);
        int getCompChoice();
        int getRoundResult();
    private:
        int compChoice;
        int roundResult;
};

Game::Game(){
        compChoice = 0;
        roundResult = 0;
        srand(time(0));
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

int Game::getCompChoice(){
    return compChoice;
}

int Game::getRoundResult(){
    return roundResult;
}

int Game::playRound(int userChoice){
    compChoice = (rand() % 3) + 1;
    roundResult = -2;
    
    if (userChoice > compChoice || (userChoice == 1 && compChoice == 3)){
        roundResult = 1;
    }
    else if (userChoice == compChoice){
        roundResult = 0;
    }
    else{
        roundResult = -1;
    }
}

int main(){
    int numRounds = 0;
    int userChoice = 0;
    int compChoice = 0;
    int roundResult = 0;
    int ties = 0;
    int wins = 0;
    
    Game userGame;
    
    cout << "Time to play Rock, Paper, Scissors!" << endl;
    cout << "First, please choose if you would like to play 3, 5, or 7 rounds." << endl;
    cin >> numRounds;
  
    for(int i = 0; i < numRounds; ++i){
        cout << "Round " << i + 1 << endl;
        cout << "Please enter 1 for rock, 2 for paper, and 3 for scissors." << endl;
        cin >> userChoice;
        userGame.playRound(userChoice);
        cout << "You chose " << userGame.numToChoice(userChoice) << "." << endl;
        compChoice = userGame.getCompChoice();
        cout << "The computer chose " << userGame.numToChoice(compChoice) << "." << endl;
        roundResult = userGame.getRoundResult();
        
        if(roundResult == 0){
            ties++;
            cout << "You tied!" << endl;
        }
        else if(roundResult == 1){
            wins++;
            cout << "You won!" << endl;
        }
        else{
            cout << "You lost!" << endl;
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
    
    cout << "You won " << wins << " game" << sWins << " and tied " << ties << " game" << sTies << "." << endl;
    cout << "That is " << wins + ties << " out of " << numRounds << " games." << endl;
    
    if ((wins+ ties) >= (.5 * numRounds)){
        cout << "You won!" << endl;
    }
    else if ((wins + ties) < (.5 * numRounds)){
        cout << "You lost!" << endl;
    }

}


    
    
  