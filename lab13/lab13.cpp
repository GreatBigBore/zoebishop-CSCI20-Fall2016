#include <iostream>
#include <string>
using namespace std;

/* This program is designed to output every minute value between 1:00 and 2:59
    and then to output every 15 minute intervals between two inputted hour values.
    Created by: Zoe Bishop
    Created on: 10.11.16
    */

int main(){
    
    int currentTimeHour = 1;
    int currentTimeMin = 0;

    cout << "Here is a list of every minute between 1:00 and 2:59: " << endl;
    
   //outputs minutes from 1:00 - 1:59
    while (currentTimeHour <= 2 && currentTimeMin <= 60){
        cout << currentTimeMin << endl;
        ++ currentTimeMin;
    }
    
    //resets minute value and outputs minutes from 2:00 = 2:59
    currentTimeMin = 0;
    while (currentTimeHour <= 2 && currentTimeMin <= 60){
        cout << currentTimeMin << endl;
        ++ currentTimeMin;
    }
    
    int startTimeHour;
    int endTimeHour;
    
    //accepts user input for hour values
    cout << "Please input a start time hour value between 1 and 12." << endl;
    cin >> startTimeHour;
    cout << endl << "Please input an end time hour value between 1 and 12." << endl;
    cin >> endTimeHour;
    
    currentTimeHour = startTimeHour;
    
    //outputs 15 minutes intervals between user-specified hours
     while (currentTimeHour <= endTimeHour){
        currentTimeMin = 0;
        cout << endl << currentTimeMin << endl;
        cout << currentTimeMin + 15 << endl;
        cout << currentTimeMin + 30 << endl;
        cout << currentTimeMin + 45 << endl;
        cout << currentTimeMin + 60 << endl;
        ++currentTimeHour;
    }
}
