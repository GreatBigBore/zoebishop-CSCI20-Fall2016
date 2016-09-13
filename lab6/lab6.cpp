#include <iostream>
using namespace std; 

void monsterAscii(){
    cout << "^        ^" << endl;
    cout << "  |    |" << endl;
    cout << "=        =" << endl;
    cout << "  *    * " << endl;
    cout << "   *  *  " << endl;
    cout << "    **   " << endl;
    cout << endl;
    cout << "Copyright Zoe Bishop 2016." << endl;
};

struct MonsterStruct {

    string monsterName;
    string monsterHead;
    string monsterEyes;
    string monsterEars;
    string monsterNose;
    string monsterMouth;
};

int main (){
    
    MonsterStruct monsterOne;
    
    monsterOne.monsterName = "OneMonster";
    monsterOne.monsterHead = "Zombus, "; 
    monsterOne.monsterEyes = "Spritem, "; 
    monsterOne.monsterEars = "Vegitas, ";
    monsterOne.monsterNose = "None, ";
    monsterOne.monsterMouth = "Wackus."; 
    
    MonsterStruct monsterTwo;
    
    cout << "Enter a monster name, head type, eye type, ear type, nose type, and mouth type.";
    cin >> monsterTwo.monsterName >> monsterTwo.monsterHead >> 
    monsterTwo.monsterEyes >> monsterTwo.monsterEars >> monsterTwo.monsterNose
     >> monsterTwo.monsterMouth;
    
    MonsterStruct monsterThree;
    
    monsterThree.monsterName = "Pickles";
    monsterThree.monsterHead = "Franken, "; 
    monsterThree.monsterEyes = "Spritem, "; 
    monsterThree.monsterEars = "Vegitas, ";
    monsterThree.monsterNose = "Vegitas, ";
    monsterThree.monsterMouth = "Wackus.";
    
    MonsterStruct monsterFour;
    
    monsterFour.monsterName = "Curtain";
    monsterFour.monsterHead = "Zombus, "; 
    monsterFour.monsterEyes = "Vegitas, "; 
    monsterFour.monsterEars = "Spritem, ";
    monsterFour.monsterNose = "Wackys, ";
    monsterFour.monsterMouth = "Vegitas.";
    
    MonsterStruct monsterFive;
    
    monsterFive.monsterName = "Cat";
    monsterFive.monsterHead = "Happy, "; 
    monsterFive.monsterEyes = "Wackus, "; 
    monsterFive.monsterEars = "Wackus, ";
    monsterFive.monsterNose = "Spritem, ";
    monsterFive.monsterMouth = "Spritem.";
    
    cout << monsterOne.monsterName << ":" << monsterOne.monsterHead 
    << monsterOne.monsterEyes << monsterOne.monsterEars << 
    monsterOne.monsterNose << monsterOne.monsterMouth << endl;
    
    cout << monsterTwo.monsterName << ":" << monsterTwo.monsterHead 
    << monsterTwo.monsterEyes << monsterTwo.monsterEars << 
    monsterTwo.monsterNose << monsterTwo.monsterMouth << endl;
    
    cout << monsterThree.monsterName << ":" << monsterThree.monsterHead 
    << monsterThree.monsterEyes << monsterThree.monsterEars << 
    monsterThree.monsterNose << monsterThree.monsterMouth << endl;
    
    cout << monsterFour.monsterName << ":"  << monsterFour.monsterHead 
    << monsterFour.monsterEyes << monsterFour.monsterEars << 
    monsterFour.monsterNose << monsterFour.monsterMouth << endl;
    
    cout << monsterFive.monsterName << ":" << monsterFive.monsterHead 
    << monsterFive.monsterEyes << monsterFive.monsterEars << 
    monsterFive.monsterNose << monsterFive.monsterMouth << endl;
    cout << endl;
    
    monsterAscii();

}