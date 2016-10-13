#include <iostream>
#include <string>
using namespace std;

int main(){   
    string firstName;
    string lastName;
    string maritalStatus;
    double adjustedIncome;
    double correctTax;
    double taxWithheld;
   
    cout << "Please input your name." << endl;
    cin >> firstName >> lastName;
    cout << endl << "Are you married?" << endl;
    cin >> maritalStatus;
    cout << endl << "And what are your gross wages?" << endl;
    cin >> adjustedIncome;
    cout << endl << "And how much was withheld from you in taxes?" << endl;
    cin >> taxWithheld;
    cout << endl;
  
    if (maritalStatus == "no"){
        adjustedIncome = adjustedIncome - 3900 - 6100;
        if (adjustedIncome > 0){
        if (adjustedIncome <= 8925){
            correctTax = adjustedIncome * .1;
        }
        else if (adjustedIncome <= 36250){
            correctTax = (adjustedIncome - 8925) * .15 + 892.5;
        }
        else if (adjustedIncome <= 87850){
            correctTax = (adjustedIncome - 36250) * .25 + 4991.25;
        }
        else if (adjustedIncome > 87850){
            correctTax = (adjustedIncome - 87850) * .28 + 17891.25;
        }
        }
    }
    else 
        adjustedIncome = adjustedIncome - 3900 - 3900 - 6100 -6100;
        if (adjustedIncome > 0){
       if (adjustedIncome <= 17850){
            correctTax = adjustedIncome * .1;
        }
        else if (adjustedIncome <= 72500){
            correctTax = (adjustedIncome - 17850) * .15 + 1785;
        }
        else if (adjustedIncome > 72500){
            correctTax = (adjustedIncome - 72500) * .28 + 9982.5;
        }
        }
      
     cout << "Name: " << firstName << " " << lastName << endl;
     cout << "Total adjusted gross income: " << adjustedIncome << endl;
     
     
     if (adjustedIncome < 0){
         cout << "No tax owed." << endl;
     }
    else if (taxWithheld > correctTax) {
        cout << "Total tax owed: " << correctTax << endl;
        cout << firstName << " " << lastName << " is entitled to a refund of $" << taxWithheld - correctTax << endl;
    } 
    else {
        cout << "Total tax owed: " << correctTax << endl;
        cout << firstName << " " << lastName <<  " will have to pay $" << correctTax - taxWithheld << " more in taxes" << endl;
    }
    
}