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

TemperatureConverter::TemperatureConverter(double kelvin_){
    kelvin_ = 0;
    return;
} //constructor overload
    void TemperatureConverter::SetTempFromCelsius(double celsiusValue){
        kelvin_ = celsiusValue + 273.15;
        return;
    };
        double TemperatureConverter::GetTempAsCelsius() const {
        return kelvin_;
    };
    void TemperatureConverter::SetTempFromFahrenheit(double fahrenheitValue){
        kelvin_ = 5 * (fahrenheitValue - 32) / 9 + 273.15;
        return;
    };
    double TemperatureConverter::GetTempAsFahrenheit() const {
        return kelvin_;
    };
    
    void TemperatureConverter::PrintTemps() const{
        cout << GetTempFromKelvin;
        cout << GetTempAsCelsius;
        cout << GetTempAsFahrenheit; 
        return;
    }
    
    
    

