#include <iostream>
#include <string>
using namespace std;

void staticChorus(){
   cout << "Old MACDONALD had a farm" <<endl;
   cout << "E-I-E-I-O" << endl;
   
};

void variableChorus (string animal, string sound){
    cout << "And on his farm he had a " << animal << endl;
    cout << "E-I-E-I-O" << endl;
    cout << "With a " << sound << " " << sound << " here" << endl;
    cout << "And a " << sound << " " << sound << " there" << endl;
    cout << "Here a " << sound << ", there a " << sound << endl;
    cout << "Everywhere a " << sound << " " << sound << endl;
    
};

int main(){
    string animal1 = "cow";
    string animal2 = "dog";
    string animal3 = "cat";
    string animal4 = "bird";
    
    string sound1 = "moo";
    string sound2 = "bark";
    string sound3 = "meow";
    string sound4 = "squawk";
    
    cout << "Old MacDonald" << endl;
    cout << endl;
    staticChorus();
    variableChorus(animal1, sound1);
    staticChorus();
    cout << endl;
    staticChorus();
    variableChorus(animal2, sound2);
    staticChorus();
    cout << endl;
    staticChorus();
    variableChorus(animal3, sound3);
    staticChorus();
    cout << endl;
    staticChorus();
    variableChorus(animal4, sound4);
    staticChorus();

}