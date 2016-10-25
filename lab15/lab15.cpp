#include <iostream>
#include <string>
using namespace std;

int main(){
    string userOrder;
    
    string menu[10];
    menu[0] = "Cookie";
    menu[1] = "Cake";
    menu[2] = "Pie";
    menu[3] = "Doughnut";
    menu[4] = "Scone";
    menu[5] = "Brownie";
    menu[6] = "Cupcake";
    menu[7] = "Fudge";
    menu[8] = "Gelato";
    menu[9] = "Popsicle";
    
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
        cout << menu[i] << endl;
    }
    
    cout << "What would you like to order?" << endl;
    cin >> userOrder;
    
   while(userOrder != "no"){
    cout << endl <<  "Anything else?" << endl;
    cin >> userOrder;
    menu[i]
    totalOrder[i] = totalOrder[i] + 1;
   }
   
   for(int j = 0; int j < 10; ++j){
       cout << totalOrder[i] << menuOrder[i] << endl;
   }
}
