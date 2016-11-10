#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/* This program is a concordance. It accepts an input file
and compares it to a list of stop words. Any words that are 
not on the stop word list will be printed out with the
line number of the first occurence and how many times that
word was used.
Created on: 11.10.16
Created by: Zoe Bishop
*/

class concord{
    public:
    stopword();
    dupWord();
    newWord();
    private:
};

string lineToWords(string newWord){
    int wordStartIndex = 0;
    int wordEndIndex = 0;
    
    while(!testfile.eof){
        getline(testfile, inputLine);
        while(wordStartIndex != inputLine.length()){
            wordEndIndex = find(' ');
            newWord = substr(wordStartIndex, wordEndIndex - wordStartIndex);
            wordStartIndex = wordEndIndex + 1;
        }
    }
}

int stopWordCheck(stopWord[]){
     if(!(stopWord[i] == inputWord)){
        ++wordCount[i];
    }
}

int dupWordCheck(newWord[], wordCount[]){
    if(newWord[i] = inputWord;){
        ++wordCount[i];
        //LINE NUMBER
        find(newWord[i]);
    }
}

int main(){
    concord game;
    
    //Opens stop word file
    string stop = "stoptxt.txt";
    string stopWord[571];
    
    ifstream stoptxt;
    stoptxt.open(stop);
  
    //Stop words into a stop word array
    for(int i = 0; i < 571; ++i){
      getline(stoptxt, stopWord[i]);
    }
  
    //Opens test file
    string input = "testfile.txt";
    string inputWord;
  
    ifstream testfile;
    testfile.open(input);
  
    //Other stuff
    string newWords[50];
    int wordCount[50];
    int lineNum[50];
  
    //Runs functions
    for(int i = 0; i < 50; ++i){
      game.newWord;
      game.stopWord;
      game.dupWord;
    }
    
    //Prints results
    for(int i = 0; i < 50; ++i){
        cout << newWord[i] << "First occured on line: " << lineNum[i];
        cout << " and occured a total number of " << wordCount[i] << " times." << endl;
    }
};