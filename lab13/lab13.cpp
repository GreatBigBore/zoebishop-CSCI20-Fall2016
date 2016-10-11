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
    while (currentTimeHour <= 2 && currentTimeMin < 60){
        if (currentTimeMin < 10){
             cout << "1:0" << currentTimeMin << endl;
        }
        else{
        cout << "1:" << currentTimeMin << endl;
        }
        ++ currentTimeMin;
    }
    
    //resets minute value and outputs minutes from 2:00 = 2:59
    currentTimeMin = 0;
    while (currentTimeHour <= 2 && currentTimeMin < 60){
        if (currentTimeMin < 10){
            cout << "2:0" << currentTimeMin << endl;
        }
        else{
        cout << "2:" << currentTimeMin << endl;
        }
        ++ currentTimeMin;
    }
    
    int startTimeHour;
    int endTimeHour;
    int startTimeMin;
    int endTimeMin;
    
    //accepts user input for hour values
    cout << "Please input a start time hour value between 1 and 12." << endl;
    cin >> startTimeHour;
    cout << "Please input a start time hour value between 0 and 59." << endl;
    cin >> startTimeMin;
    cout << endl << "Please input an end time hour value between 1 and 12." << endl;
    cin >> endTimeHour;
    cout << endl << "Please input an end time hour value between 0 and 59." << endl;
    cin >> endTimeMin;
    cout << endl;
    
    currentTimeHour = startTimeHour;
    currentTimeMin = startTimeMin;
    
    //outputs 15 minutes intervals between user-specified hours
     while (currentTimeHour <= endTimeHour){
        while (currentTimeMin < 60){
            if (currentTimeMin == 0){
                cout << currentTimeHour << ":0" << currentTimeMin << endl;
            }
            else{
            cout << currentTimeHour << ":" << currentTimeMin << endl;
            }
            currentTimeMin = currentTimeMin + 15;
        }
        if (currentTimeMin == 60){
            currentTimeMin = 0;
        }
            ++ currentTimeHour;
    }
}
