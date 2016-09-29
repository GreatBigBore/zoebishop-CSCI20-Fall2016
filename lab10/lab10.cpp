#include <iostream>
using namespace std;

int main(){
    
double suzyAge = 25;
double johnAge = 21;
cout << "25 < 21 is false: " << (suzyAge < johnAge) << endl;

double x =7;
double y = 7;
cout << "7 >= 7 is true: " << (x >= y) << endl;

double a = 1;
double b = 9;
cout << "1 == 9 is false: " << (a == b) << endl;

double limit = 20;
double count = 10;
cout << "(20 * 10) / 2 > 0 is true: " << ((limit * count) / 2 > 0) << endl;

double t = -4;
double z = 0;
cout << "-4 > 5 || 0 < 2 is true: " << (t > 5 || z < 2) << endl;

double variable = -5;
cout << "!(-5 > 0) is true: " << (!(variable >0)) << endl;

a = 16;
cout << "16 / 4 < 8 && 16 >= 4 is true: " << (a / 4 < 8 && a >= 4) << endl;

x = -2;
y = 5;
cout << "-2 * 5 < 10 || 5 * -2 < 10 is true: " << (x * y < 10 || y * z < 10) << endl;

double j = -2;
double k = 5;
double l = 4;
cout << " !(-2 * 4 < 10 || 5 / -2 * 4 < 5 * 2 is true: " << (!(j * l < 10) || y / x * 4 < y * 2) << endl;

cout << "When the value displayed is a 0, that means that it is false. If it is 1, that means it is true." << endl;
}