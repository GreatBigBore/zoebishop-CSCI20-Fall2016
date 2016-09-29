#include <iostream>
using namespace std; 

int main () {
     
    float coinAmount = 0; 
    
    int quarterValue = 25;
    int dimeValue = 10;
    int nickelValue = 5;
    int pennyValue = 1;
    
    float deductible = 10.9;
     
    cin >> coinAmount;
    cout << "You have entered " << coinAmount << " cents." << endl;
    
    int quarterAmount = coinAmount / quarterValue;
    coinAmount = coinAmount - (quarterAmount * quarterValue);
    int dimeAmount = coinAmount / dimeValue;
    coinAmount = coinAmount - (dimeAmount * dimeValue);
    int nickelAmount = coinAmount / nickelValue;
    coinAmount = coinAmount - (nickelAmount * nickelValue);
    int pennyAmount = coinAmount / pennyValue;
    coinAmount = (quarterAmount * quarterValue) + (dimeAmount * dimeValue) + (nickelAmount * nickelValue) + (pennyAmount * pennyValue);

    cout << "That was " << quarterAmount << " quarters, " << endl; 
    cout << dimeAmount << " dimes, " << endl;
    cout << nickelAmount << " nickels, and " << endl;
    cout << pennyAmount << " pennies." << endl;
    
    cout << "The total is $" << coinAmount / 10 << ".";
    cout << " After the fee you get $" << coinAmount / deductible << " in cash.";
    
    
}