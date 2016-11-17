#include <iostream>
#include <string>
using namespace std;

/* This program accepts category weights and assignment scores
and outputs the necessary score on the final to get each letter
grade in the class

Created On: 11.17.16
Created By: Zoe Bishop
*/

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
    double totalWeightedGrade;
    
};

//Puts each category weight into an array index
finalGradeCalc::finalGradeCalc(double weights[3]){
    for(int i = 0; i < 3; ++i){
       categoryWeights[i] =  weights[i];
    }
    totalWeightedGrade = 0;
}

//Puts decimal values for each letter grade into an array index
void finalGradeCalc::letterGradeToDecimal(){
    for(int i = 0; i < 5; ++i){
        for(int j = 1; j > .5; j -= .1){
          letterGradeDecimal[i] = j;  
        }
    }
}

//Calculates the weighted value of each assignment and the current grade in the class
double finalGradeCalc::scoresToDecimals(int pointsObtained[50], int totalPoints[50]){
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 50; ++j){
            decimalGrade[j] = pointsObtained[j] / totalPoints[j];
            weightedGrade[j] = decimalGrade[j] * categoryWeights[i];
            totalWeightedGrade += weightedGrade[j];
        } 
    }
}

//Calculates required score on final for each letter grade using current weighted grade in class
int finalGradeCalc::scoreRequired(int totalFinalPoints){
    int finalGradePoints[5];
    for(int i = 0; i < 5; ++i){
        double finalGradeDecimal = letterGradeDecimal[i] - totalWeightedGrade;
        finalGradePoints[i] = finalGradeDecimal / categoryWeights[2] * totalFinalPoints;
        return finalGradePoints[i];
    }    
}

int main(){
    double categoryWeights[3];
    int pointsObtained[50];
    int pointsPossible[50];
    int finalPointsPossible = 0;
    
    //Getting weights for each category
    cout << "Please input the weights of the categories: Assignments, Quizzes/Tests, Other" << endl;
for(int i = 0; i < 3; ++i){
    cin >> categoryWeights[i];
}

    //Creating object
    finalGradeCalc userOne(categoryWeights);
    
    //Getting user score and total points possible for each assignment
    cout << "Input your scores for each assignment in the first category and enter a -1 when you have inputted all of them." << endl;
for(int i = 0; i < 3; ++i){
    while(pointsObtained[i] != -1){  
        cin >> pointsObtained[i];
        cin >> pointsPossible[i];
    }
}

    userOne.scoresToDecimals(pointsObtained, pointsPossible);

    cout << "Input the total points possible for your final." << endl;
    cin >> finalPointsPossible;
    
    for(int i = 0; i < 5; ++i){
        if( userOne.scoreRequired(finalPointsPossible) < 0){
            cout << "You can skip class!";
        }
    }
}