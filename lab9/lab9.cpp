#include <iostream>
#include <string>
using namespace std;

class TemperatureConverter{

public: 
    void SetTempFromKelvin(double kelvinValue);
    double GetTempFromKelvin() const;
    
    void SetTempFromCelcius();
    void SetTempFromFahrenheit();
    
    double GetTempAsCelcius();
    double GetTempAsFahrenheit();
    
    void PrintTemps() const;
    
    TemperatureConverter();
private:
    double kelvin_;
};

TemperatureConverter::TemperatureConverter(){
    kelvin_ = 0;
    return;
}
    void TemperatureConverter::SetTempFromCelcius(double celsiusValue){
        kelvin_ = celsiusValue + 273.15;
        return;
    };
    void TemperatureConverter::SetTempFromFahrenheit(double fahrenheitValue){
        kelvin_ = 5 * (fahrenheitValue - 32) / 9 + 273.15;
        return;
    };
    double TemperatureConverter::GetTempAsCelcius() const {
        return kelvin_;
    };
    double TemperatureConverter::GetTempAsFahrenheit() const {
        return kelvin_;
    };
    
    void TemperatureConverter::PrintTemps() const{
        cout << GetTempFromKelvin;
        cout << GetTempAsCelcius;
        cout << GetTempAsFahrenheit; 
        return;
    }
    
    
    

