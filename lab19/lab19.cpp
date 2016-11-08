#include <iostream>
#include <fstream>
using namespace std;

 int rowCalc(int[] row){
        int sum = 0;
        sum = sum + nums[i][0];
        cout << nums[i][0];
        cout << sum;
    }
int colCalc(int[] column){
        int sum = 0;
        sum = sum + nums[0][j];
        cout << nums[0][j];
        cout << sum;
    }

int main (){
    ifstream inFS;
    inFS.open("nums.txt");
    int numList[3][4];
    int average = 0;
    int sum = 0;
    
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
        rowCalc(numList[i]);
    }
    
    for(int j = 0; j < 4; ++j){
        colCalc(numList[j]);
    }
    
    cout << average << endl;

}