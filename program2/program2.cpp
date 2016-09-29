#include <iostream>
#include <string>
using namespace std;

class Distance{

public: 

    Distance(){
        yards_ = 0;
    }; 

    void SetYards(double yards){
        yards_ = yards;
    }
    double GetYards() const{
        return yards_;
    }
    
    void SetMiles(double miles){
        yards_ = miles / 1760;
    }
    double GetMiles() const{
        return yards_ * 1760;
    }
    
    void SetMeters(double meters){
        yards_ = meters / .9144;
    }
    double GetMeters() const{
        return yards_ * .9144 ;
    }
    
    void SetFeet(double feet){
        yards_ = feet / 3;
    }
    double GetFeet() const{
        return yards_ * 3;
    }
    
    void SetInches(double inches){
        yards_ = inches / 36;
    }
    double GetInches() const{
        return yards_ * 36;
    }
    
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


  