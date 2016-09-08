#include <iostream>
#include <string> 
using namespace std;

/* This program calculates the hours a person has worked in one year, 
    their gross annual pay, and their gross net pay, given hours worked in
    one week and the hourly rate of pay.
    
    Author: Zoe Bishop
    Date: 09/08/2016
*/

int main (){

    string firstName;
    string lastName;
    int hoursWorked;
    float hourlyRate;
    int hoursYearly;
    float grossPay;
    float netPay;
    
    // Getting data from user
    cout << "Please input your name. ";
    cin >> firstName >> lastName;
    cout << "Please input your hours worked in one week. ";
    cin >> hoursWorked;
    cout << "Please input your hourly rate of pay. ";
    cin >>  hourlyRate;
    
    // Calculating output values
    hoursYearly = hoursWorked * 52;
    grossPay = hourlyRate * hoursWorked * 52;
    netPay = grossPay * .83;
    
    // Print data in a wage slip
    cout << "Wage Slip" << endl;
    cout << firstName << " " << lastName << endl;
    cout << hoursYearly << " worked in one year." << endl;
    cout << "$" << hourlyRate << " per hour" << endl;
    cout << "$" << grossPay << " per year before taxes." << endl;
    cout << "$" << netPay << " per year after taxes." << endl;
    
}