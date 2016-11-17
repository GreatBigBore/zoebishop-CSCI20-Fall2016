#include <iostream>
#include <string>
using namespace std;

class finalGradeCalc{
    public:
    finalGradeCalc(double weights[3]);
    void letterGradeToDecimal();
    double scoresToDecimals(int pointsObtained[50], int totalPoints[50]);
    int scoreRequired(int totalFinalPoints);
    private:
    double decimalGrade[50];
    double weightedGrade[50];
    double letterGradeDecimal[5];
    double categoryWeights[3];
    
};

finalGradeCalc::finalGradeCalc(double weights[3]){
    for(int i = 0; i < 3; ++i){
       categoryWeights[i] =  weights[i];
    }
}

void finalGradeCalc::letterGradeToDecimal(){
    for(int i = 0; i < 5; ++i){
        for(int j = 1; j > .5; j -= .1){
          letterGradeDecimal[i] = j;  
        }
    }
}

double finalGradeCalc::scoresToDecimals(int pointsObtained[50], int totalPoints[50]){
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 50; ++j){
            decimalGrade[j] = pointsObtained[j] / totalPoints[j];
            weightedGrade[j] = decimalGrade[j] * categoryWeights[i];
        } 
    }
}

int finalGradeCalc::scoreRequired(int totalFinalPoints){
    double finalGradeDecimal = letterGradeDecimal - weightedGrade;
    int finalGradePoints = finalGradeDecimal / categoryWeights[2] * totalFinalPoints;
    return finalGradePoints;
}

int main(){
    double categoryWeights[3];
    int pointsObtained[50];
    int pointsPossible[50];
    int finalPointsPossible = 0;
    
    finalGradeCalc userOne(double categoryWeights[3]);
    
    cout << "Please input the weights of the categories: Assignments, Quizzes/Tests, Other" << endl;
for(int i = 0; i < 3; ++i){
    cin >> categoryWeights[i];
    userOne.finalGradeCalc(categoryWeights[i]);
}

    cout << "Input your scores for each assignment in the first category and enter a -1 when you have inputted all of them." << endl;
for(int i = 0; i < 50; ++i){
    while(pointsObtained != -1){  
        cin >> pointsObtained[i];
        cin >> pointsPossible[i];
    }
    userOne.scoresToDecimals(pointsObtained[i], pointsPossible[i]);
}

    cout << "Input the total points possible for your final." << endl;
    cin >> finalPointsPossible;
    
    userOne.scoresToDecimals();
    userOne.scoreRequired(finalPointsPossible);
    
}