#include <iostream>
#include <string>
using namespace std;

/* This program accepts category weights and assignment scores
and outputs the necessary score on the final to get each letter
grade in the class

Created On: 11.17.16
Created By: Zoe Bishop
*/
const int arraySize = 50;

class finalGradeCalc{
    public:
    finalGradeCalc(double weights[3]);
    double letterGradeToDecimal(char letter);
    double scoresToDecimals(int categoryPoints[], int totalCategoryPoints);
    double totalWeightedGrade();
    double decimalToWeight(int eachCategory);
   
    private:
    double letterGradeDecimal[5];
    double weightValue[3];
    double weightedGrade;
    int totalCategoryPoints[3];
    int assignPoints[3][arraySize];
    double categoryWeights[3];
};

finalGradeCalc::finalGradeCalc(double weights[3]){
    for(int i = 0; i < 3; ++i){
        categoryWeights[i] = weights[i];
    }
}

//Puts decimal values for each letter grade into an array index
double finalGradeCalc::letterGradeToDecimal(char letter){
   switch(letter){
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
double finalGradeCalc::scoresToDecimals(int categoryPoints[], int totalCategoryPoints){
   double decimalGrade = 0;
    for(int i = 0; i < arraySize; ++i){
        decimalGrade += categoryPoints[i];
    }
    return decimalGrade;
}

//Calculates required score on final for each letter grade using current weighted grade in class
double finalGradeCalc::decimalToWeight(int eachCategory){
    return weightValue[eachCategory] * categoryWeights[eachCategory];
}

double finalGradeCalc::totalWeightedGrade(){
    for(int i = 0; i < 3; ++i){
        double decimal = scoresToDecimals(assignPoints[i], totalCategoryPoints[i]);
        double weightDecimal = decimalToWeight(i);
        weightedGrade += weightDecimal;
    }
    return weightedGrade;
}

int main(){
    double categoryWeights[3];
    string categories[3] = {"Assignment", "Quiz/Test", "Other"};
    char letterGrades[5] = {'A', 'B', 'C', 'D', 'F'};
    int totalCategoryPoints[3];
    int finalPointsPossible = 0;
    int assignPoints[3][arraySize];
    double weightedGrade = 0;
    double necessaryFinalDecimal = 0;
    double necessaryFinalPoints = 0;
    double totalFinalPoints = 0;

    
    //Getting weights for each category
    cout << "Please input the weights of the categories: Assignments, Quizzes/Tests, Other" << endl;
for(int i = 0; i < 3; ++i){
    cin >> categoryWeights[i];
}

    //Creating object
    finalGradeCalc userOne(categoryWeights);
    
    //Getting user score and total points possible for each assignment    
for(int i = 0; i < 3; ++i){   
    int j = 0;
    cout << "How many total points were available in the " << categories[i] << " category?" << endl;
    cin >> totalCategoryPoints[i];
    cout << endl << "Enter the scores you got on each " << categories[i] << ". Enter -1 when done." << endl;
    while(assignPoints[i][j] != -1){
        cin >> assignPoints[i][j];
        ++j;
    }
}

    cout << "Input the total points possible for your final." << endl;
    cin >> finalPointsPossible;
    totalCategoryPoints[1] -= finalPointsPossible;

    weightedGrade = userOne.totalWeightedGrade();
    
    cout << "Right now your grade is: " << weightedGrade << endl;
    cout << "Here is the minimum score you need on the final for each letter grade." << endl;
    
for(int i = 0; i < 5; ++i){
    necessaryFinalDecimal = (weightedGrade - userOne.letterGradeToDecimal(letterGrades[i])) * categoryWeights[1];
    necessaryFinalPoints = totalFinalPoints * necessaryFinalDecimal;
    cout << letterGrades[i] << ": " << necessaryFinalPoints << "/" << finalPointsPossible << endl;
   
    if(necessaryFinalPoints < 0){
        cout << "You can skip class!";
    }
}
}
