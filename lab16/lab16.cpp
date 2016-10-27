#include <iostream>
#include <string>
using namespace std;

int main(){
    int userOrder;
    
    string menu[10];
    menu[0] = " Cookie";
    menu[1] = " Cake";
    menu[2] = " Pie";
    menu[3] = " Doughnut";
    menu[4] = " Scone";
    menu[5] = " Brownie";
    menu[6] = " Cupcake";
    menu[7] = " Fudge";
    menu[8] = " Gelato";
    menu[9] = " Popsicle";
    
    int totalOrder[10];
    totalOrder[0] = 0;
    totalOrder[1] = 0;
    totalOrder[2] = 0;
    totalOrder[3] = 0;
    totalOrder[4] = 0;
    totalOrder[5] = 0;
    totalOrder[6] = 0;
    totalOrder[7] = 0;
    totalOrder[8] = 0;
    totalOrder[9] = 0;
    
    double price[10][2];
    totalOrder[0][0] = 15;
    totalOrder[0][1] = 10;
    totalOrder[1][0] = 4.5;
    totalOrder[1][1] = 10;
    totalOrder[2][0] = 3.65;
    totalOrder[2][1] = 10;
    totalOrder[3][0] = 12;
    totalOrder[3][1] = 10;
    totalOrder[4][0] = 8.75;
    totalOrder[4][1] = 10;
    totalOrder[5][0] = 7;
    totalOrder[5][1] = 10;
    totalOrder[6][0] = 8.75;
    totalOrder[6][1] = 10;
    totalOrder[7][0] = 3.5;
    totalOrder[7][1] = 10;
    totalOrder[8][0] = 3;
    totalOrder[8][1] = 10;
    totalOrder[9][0] = 12;
    totalOrder[9][1] = 10;
    
     cout << "Welcome to the fat cafe! Here is our list of menu items:" << endl;
    
    for(int i = 0; i < 10; ++i){
        cout << i + 1 << "." << menu[i] << endl;
    }
    
    cout << "What would you like to order? Please enter the corresponding order number." << endl;
    cout << "When you are done ordering, enter a 0." << endl;
    cin >> userOrder;
    totalOrder[userOrder - 1] = totalOrder[userOrder - 1] + 1;
    cout << "That will be $"<< price[userOrder - 1][0] << "." << endl;
    int totalPrice = price[userOrder - 1][0];
    cout << "There are " << price[1][userOrder - 1] - 1 << " " << menu[userOrder - 1] << " left." << endl;
    
   while(userOrder != 0){
    cout << endl <<  "Anything else?" << endl;
    cin >> userOrder;
    cout << "That will be $"<< price[userOrder - 1][0] << "." << endl;
    totalPrice = totalPrice + price[userOrder - 1][0];
    cout << "There are " << price[1][userOrder - 1] - 1 << " " << menu[userOrder - 1] << " left." << endl;
    totalOrder[userOrder - 1] = totalOrder[userOrder - 1] + 1;
    
   }
   
   for(int j = 0; j < 10; ++j){
       cout << totalOrder[j] << menu[j] << endl;
   }
   cout << "Your total price will be $" << totalPrice << endl;
}
