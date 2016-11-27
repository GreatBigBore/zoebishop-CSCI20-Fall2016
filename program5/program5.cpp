#include <iostream>
#include <string>
using namespace std;

/* This program accepts category weights and assignment scores
and outputs the necessary score on the final to get each letterGrades
grade in the class

Created On: 11.17.16
Created By: Zoe Bishop
*/
const int arraySize = 50;

class finalGradeCalc{
    public:
    finalGradeCalc(double weights[3]);
    double letterGradeToDecimal(char paramLetterGrade);
    double scoresToDecimals(double paramIndivAssignmentPoints[], int paramTotalCategoryPoints);
    double currentWeightedGrade(double paramUnweightedDecimal);
    double decimalToWeight(int categoryNumber, double unweightedDecimal);
   
    private:
    double weightedGrade;
    double paramUnweightedDecimal;
    double weights[3];
};

finalGradeCalc::finalGradeCalc(double weights[3]){
}

//Puts decimal values for each letter grade into an array index
double finalGradeCalc::letterGradeToDecimal(char paramLetterGrade){
   switch(paramLetterGrade){
       case 'A': 
       return .9;
       case 'B':
       return .8;
       case 'C':
       return .7;
       case 'D':
       return .6;
       case 'F':
       return .5;
       default:
       return 0;
   }
}

//Calculates the weighted value of each assignment and the current grade in the class
double finalGradeCalc::scoresToDecimals(double paramIndivAssignmentPoints[], int paramTotalCategoryPoints){
    double decimalGrade = 0;
    for(int i = 0; i < arraySize; ++i){
        decimalGrade += paramIndivAssignmentPoints[i];
    }
    decimalGrade /= paramTotalCategoryPoints;
    return decimalGrade;
}

//Calculates required score on final for each letter grade using current weighted grade in class
double finalGradeCalc::decimalToWeight(int categoryNumber, double paramUnweightedDecimal){
    return paramUnweightedDecimal * weights[categoryNumber];
}

double finalGradeCalc::currentWeightedGrade(double paramUnweightedDecimal){
    for(int i = 0; i < 3; ++i){
        double weightedDecimal = decimalToWeight(i, paramUnweightedDecimal);
        weightedGrade += weightedDecimal;
    }
    return weightedGrade;
}

int main(){
    double categoryWeights[3];
    string categoryNames[3] = {"Assignment", "Quiz/Test", "Other"};
    char letterGrades[5] = {'A', 'B', 'C', 'D', 'F'};
    int totalCategoryPoints[3];
    int finalPointsPossible = 0;
    double indivAssignmentPoints[3][arraySize];
    double currentWeightedGrade = 0;
    double necessaryFinalDecimal = 0;
    int necessaryFinalPoints = 0;
    double unweightedDecimal = 0;
    
    //Getting weights for each category
    cout << "Please input the weights of the categories: Assignment, Quiz/Test, Other" << endl;
for(int i = 0; i < 3; ++i){
    cin >> categoryWeights[i];
}

    //Creating object
    finalGradeCalc userOne(categoryWeights);
    
    //Getting user score and total points possible for each assignment    
for(int i = 0; i < 3; ++i){   
    int j = 0;
    cout << "How many total points were available in the " << categoryNames[i] << " category?" << endl;
    cin >> totalCategoryPoints[i];
    cout << endl << "Enter the scores you got on each " << categoryNames[i] << ". Enter -1 when done." << endl;
   do{
    cin >> indivAssignmentPoints[i][j]; 
    ++j;
   }
    while(indivAssignmentPoints[i][j-1] != -1);
    unweightedDecimal = userOne.scoresToDecimals(indivAssignmentPoints[i], totalCategoryPoints[i]);
}

    cout << "Input the total points possible for your final." << endl;
    cin >> finalPointsPossible;
    totalCategoryPoints[2] -= finalPointsPossible;

    currentWeightedGrade = userOne.currentWeightedGrade(unweightedDecimal);
    
    cout << "Right now your grade is: " << currentWeightedGrade << endl;
    cout << "Here is the minimum score you need on the final for each letter grade." << endl;
    
for(int i = 0; i < 5; ++i){
    necessaryFinalDecimal = (currentWeightedGrade - userOne.letterGradeToDecimal(letterGrades[i])) * categoryWeights[2];
    necessaryFinalPoints = finalPointsPossible * necessaryFinalDecimal;
           
    if(necessaryFinalPoints < 0){
        cout << "You can skip class! ";
    }
    
    cout << letterGrades[i] << ": " << necessaryFinalPoints << "/" << finalPointsPossible << endl;

}
}
