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
    
     cout << "Welcome to the fat cafe! Here is our list of menu items:" << endl;
    
    for(int i = 0; i < 10; ++i){
        cout << i + 1 << "." << menu[i] << endl;
    }
    
    cout << "What would you like to order? Please enter the corresponding order number." << endl;
    cout << "When you are done ordering, enter a 0." << endl;
    cin >> userOrder;
    
   while(userOrder != 0){
    cout << endl <<  "Anything else?" << endl;
    cin >> userOrder;
    totalOrder[userOrder] = totalOrder[userOrder] + 1;
   }
   
   for(int j = 0; j < 10; ++j){
       cout << totalOrder[j] << menu[j] << endl;
   }
}
