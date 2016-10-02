#include <iostream>
#include <string>
using namespace std;

/* This program is designed to accept a value, convert it to 
    yards, and then convert it to miles, feet, meters, or inches
    Created on: 9.29.16 
    Created by: Zoe Bishop
    */
    
//contains the conversion functions for the program
class Distance{

public: 
    //sets the class variable yards_ to 0
    Distance(){
        yards_ = 0;
    }; 
    //assigns the specified argument yards to the class variable yards_
    void SetYards(double yards){
        yards_ = yards;
    }
    //gives the value in yards
    double GetYards() const{
        return yards_;
    }
    //converts the yards_ value to miles
    void SetMiles(double miles){
        yards_ = miles / 1760;
    }
    //converts the miles value back to yards_
    double GetMiles() const{
        return yards_ * 1760;
    }
    //converts the yards_ value to meters
    void SetMeters(double meters){
        yards_ = meters / .9144;
    }
    //converts the meters value back to yards_
    double GetMeters() const{
        return yards_ * .9144 ;
    }
    //converts the yards_ value to feet
    void SetFeet(double feet){
        yards_ = feet / 3;
    }
    //converts the feet value back to yards_
    double GetFeet() const{
        return yards_ * 3;
    }
    //converts the yards_ value to inches
    void SetInches(double inches){
        yards_ = inches / 36;
    }
    //converts the inches value back to yards_
    double GetInches() const{
        return yards_ * 36;
    }
    //prints the values for yards, miles, meters, feet, and inches
    void Print() const{
        cout << "Yards: " << GetYards() << endl;
        cout << "Miles: " << GetMiles() << endl;
        cout << "Meters: " << GetMeters() << endl;
        cout << "Feet: " << GetFeet() << endl;
        cout << "Inches: " << GetInches() << endl;
    }
    
private:
    double yards_;
    
};

int main(){
    Distance D1;
    D1.SetMiles(1);
    D1.Print();
    D1.SetMeters(16);
    D1.Print();
    D1.SetYards(20);
    D1.Print();
    D1.SetInches(100);
    D1.Print();
    D1.SetMeters(1);
    D1.Print();
}


  