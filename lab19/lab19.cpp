#include <iostream>
#include <fstream>
using namespace std;

int main (){
    ifstream inFS;
    inFS.open("nums.txt");
    int numList[3][4];
    int average = 0;
    
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 4; ++j){
            inFS >> numList[i][j];
            cout << numlist[i][j];
        }
    }
 
    
    /*for(i = 0; i < 3; ++i){
        sum = sum + numList[i][0];
    }*/
    inFS.close();
}