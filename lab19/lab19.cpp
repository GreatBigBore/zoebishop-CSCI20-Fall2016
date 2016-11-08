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
            cout << numList[i][j] << " ";
            average = average + numList[i][j];
        }
    }
    
    inFS.close();
    average = average / 12;

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 4; ++j){
            for(int k = 0; k < 3; ++k){
                rowSums[k] = numList[i][j];
            }
        }
    }
    
    for(int j = 0; j < 4; ++j){
        for(int i = 0; i < 3; ++i){
            for(int k = 0; k < 4; ++k){
                colSums[k] = numList[i][j];
            }
        }
    }
 
   cout << "The average of these numbers is: " << average << endl;
   

}