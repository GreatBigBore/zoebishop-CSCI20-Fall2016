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
    TemperatureConverter(double kelvinValue); 
private:
    double kelvin_;
};

TemperatureConverter::TemperatureConverter(){
    kelvin_ = 0;
};
 
TemperatureConverter::TemperatureConverter(double kelvinValue){
    kelvin_ = kelvinValue;
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
       double celsiusValue = 5 * (fahrenheitValue - 32 ) / 9;
        kelvin_ = celsiusValue + 273.15;
        return;
    };
    double TemperatureConverter::GetTempAsFahrenheit() const {
       double celsiusValue = kelvin_ - 273.15;
        return 32 + (celsiusValue * 1.8);
    };
    
    void TemperatureConverter::PrintTemps() const{
        cout << "Temp in Kelvin " << GetTempFromKelvin() << endl; 
        cout << "Temp in Celsius " << GetTempAsCelsius() << endl;
        cout << "Temp in Fahrenheit " << GetTempAsFahrenheit() << endl; 
        return;
    }
    
    
    

