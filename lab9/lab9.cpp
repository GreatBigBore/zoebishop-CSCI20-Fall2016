#include <iostream>
#include <string>
using namespace std;

class TemperatureConverter{

public: 
    void SetTempFromKelvin(double kelvinValue); //mutator
    double GetTempFromKelvin() const; //accessor
    
    void SetTempFromCelsius(double celsiusValue);
    void SetTempFromFahrenheit(double fahrenheitValue);
    
    double GetTempAsCelsius() const;
    double GetTempAsFahrenheit() const;
    
    void PrintTemps() const;
    
    TemperatureConverter(); //default constructor
    TemperatureConverter(double kelvin_); 
private:
    double kelvin_;
};

TemperatureConverter::TemperatureConverter(){
    kelvin_ = 0;
};
 
TemperatureConverter::TemperatureConverter(double kelvin_){
    kelvin_ = 0;
    return;
} //constructor overload

    void TemperatureConverter::SetTempFromKelvin(double kelvinValue){
        kelvin_ = kelvinValue;
        return;
    };
    double TemperatureConverter::GetTempFromKelvin() const{
        return kelvin_;
    };
    void TemperatureConverter::SetTempFromCelsius(double celsiusValue){
        kelvin_ = celsiusValue + 273.15;
        return;
    };
        double TemperatureConverter::GetTempAsCelsius() const {
        return kelvin_ - 273.15;
    };
    void TemperatureConverter::SetTempFromFahrenheit(double fahrenheitValue){
        kelvin_ = 5 * (fahrenheitValue - 32) / 9 + 273.15;
        return;
    };
    double TemperatureConverter::GetTempAsFahrenheit() const {
        return kelvin_ -273.15 * (9 / 5) + 32;
    };
    
    void TemperatureConverter::PrintTemps() const{
        cout << GetTempFromKelvin() << endl;
        cout << GetTempAsCelsius() << endl;
        cout << GetTempAsFahrenheit() << endl; 
        return;
    }
    
    
    

