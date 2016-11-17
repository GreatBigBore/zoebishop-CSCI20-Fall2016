#include <iostream>
#include <string>
using namespace std;

class finalGradeCalc{
    public:
    double scoresToDecimals();
    void letterToNum();
    int scoreRequired();
    private:
    double decimalGrade;
    double weightedGrade;
}

finalGradeCalc::finalGradeCalc(){
    decimalGrade = 0;
    weightedGrade = 0
}

finalGradeCalc::scoresToDecimals(int pointsObtained, int totalPoints){
    decimalGrade = pointsObtained / totalPoints;
    weightedGrade = decimalGrade * categoryWeight;
}

finalGradeCalc::letterToNum(){
    
}

finalGradeCalc::scoreRequired(){
    finalGradeDecimal = desiredGrade - currentGrade;
    finalGradePoints = finalGradeDecimal / categoryWeight * totalPoints;
    return finalGradePoints;
}

int main(){
    int categoryWeights[3];
    int pointsObtained[50];
    int pointsPossible[50];
    int desiredGrade = 0;
    int finalPointsPossible = 0;
    
    cout << "Please input the weights of the categories: Assignments, Quizzes/Tests, Other" << endl;
    
for(int i = 0; i < 3; ++i){
    cin >> categoryWeights[i];
}
    cout << "Input your scores for each assignment in the first category and type done when you have inputted all of them." << endl;
for(int i = 0; i < 50; ++i){
    while(pointsObtained != 'done'){  
        cin >> pointsObtained[i];
        cin >> pointsPossible[i];
    }
}

    cout << "Input your desired letter grade in the class and the total points possible for your final." << endl;
    cin >> desiredGrade;
    cin >> finalPointsPossible;
    
    
    
}