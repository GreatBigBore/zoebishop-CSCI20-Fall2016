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
    string stopWord[571];
    string newWord[50];
    int wordCount[50];
    int lineNum[50];
    
    stopword();
    dupWord();
    newWord();
    private:
    string newWord;
};

//Splits up lines into individual words
string lineToWords(string newWord){
    int wordStartIndex = 0;
    int wordEndIndex = 0;
    
    while(!testfile.eof){
        getline(testfile, inputLine);
        while(wordStartIndex != inputLine.length()){
            wordEndIndex = find(' ', wordStartIndex);
            newWord = substr(wordStartIndex, wordEndIndex - wordStartIndex);
            wordStartIndex = wordEndIndex + 1;
            
            int stopWordVal = stopWordCheck(newWord);
            int dupWordVal = dupWordCheck(newWord);
            } 
        }
    }
}

//Checks to see if word in file is a stop word
int stopWordCheck(inputWord){
     for(int i = 0; i < 571; ++i){
        if(stopWord[i] == inputWord){
            return 0;
        }
    }  
    return 1;
}

//Checks to see if word in file is a duplicate
int dupWordCheck(inputWord){
    for(int i = 0; i < 50; ++i){
        if(newWord[i] == inputWord){
            return 0;
        }
    }   
    return 1;
}

int dupWordAdd(dupWordVal){
    for(int i = 0; i < 50; ++i){
        if(dupWordVal == 1){
            ++wordCount[i];
        }
    }
}

int main(){
    concord game;
    
    //Opens stop word file
    string stop = "stoptxt.txt";
    ifstream stoptxt;
    stoptxt.open(stop);
  
    //Stop words into a stop word array
    for(int i = 0; i < 571; ++i){
      getline(stoptxt, stopWord[i]);
    }
  
    //Opens test file
    string input = "testfile.txt";
    ifstream testfile;
    testfile.open(input);
  
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