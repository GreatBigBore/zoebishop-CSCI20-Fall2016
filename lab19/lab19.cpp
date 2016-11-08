#include <iostream>
#include <fstream>
using namespace std;

int main (){
    ifstream inFS;
    inFS.open("nums.txt");
    int numList[3][4];
    int rowSums[3];
    int colSums[4];
    int average = 0;
    
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 4; ++j){
            inFS >> numList[i][j];
            average = average + numList[i][j];
        }
    }
    
    inFS.close();
    average = average / 12;
    
    ofstream outFS;
    outFS.open("output.txt");

    for(int i = 0; i < 3; ++i){
        rowSums[i] = 0;
        for(int j = 0; j < 4; ++j){
            outFS << numList[i][j] << "   ";
            rowSums[i] += numList[i][j];
        }
        outFS << rowSums[i] << endl;
        rowSums[i] = 0;
    }
    
    for(int j = 0; j < 4; ++j){
        colSums[j] = 0;
        for(int i = 0; i < 3; ++i){
            colSums[j] += numList[i][j];
        }
        outFS << colSums[j] << "  ";
    }
    
   outFS << endl << "The average of these numbers is: " << average << endl;
      

}