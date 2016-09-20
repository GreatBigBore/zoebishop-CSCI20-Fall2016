#include <iostream>
#include <string>
using namespace std;

double ToPound (double kiloValue){
    return (kiloValue * 2.2); 
};

double ToKilo (double poundValue){
    return (poundValue / 2.2);
};

int main(){
    double originalKilo;
    double originalPound;
    
    cout << "Enter a value in kilograms and the program will convert it to pounds." << endl;
    cin >> originalKilo;
    cout << originalKilo << " kilograms = " << ToPound(originalKilo) << " pounds." << endl;
    cout << "Enter a value in pounds and the program will convert it to kilograms." << endl;
    cin >> originalPound;
    cout << originalPound << " pounds = " << ToKilo(originalPound) << " kilograms." << endl;
}