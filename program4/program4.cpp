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

const int stopWordNum = 571;
const int wordMax = 50;

class concord{
public: 
    concord();
    int stopWordsCheck(string inputWord);
    void dupWordCheck(string inputWord, int lineNum);
    string lineToWords(ifstream& testfile);
    string getNewWord(int wordNum);
    int getWordCounts(int wordNum);
    int getLineNumber(int wordNum);
    int getTotalWordCount();
    void stopWordArray(ifstream& stoptxt);
private:
    string newWord;
    string stopWords[stopWordNum + 10];
    string uniqueWords[wordMax + 10];
    int wordCounts[wordMax + 10];
    int lineNumbers[wordMax + 10];
    int wordIndex;
    int lineNum;
};

concord::concord(){
    wordIndex = 0;
    lineNum = 0;
    
    for(int i = 0; i < wordMax; ++i){
        uniqueWords[i] = string();
        wordCounts[i] = 0;
        lineNumbers[i] = 0;
    }
}

//Splits up lines into individual words
string concord::lineToWords(ifstream& testfile){
   // while(!testfile.eof()){
   for(int i = 0; i < 1; ++ i){
        int wordStartIndex = 0;
        int wordEndIndex = 0;
        string inputLine = "poo ber";
        getline(testfile, inputLine);
        cout << inputLine << endl;
        ++lineNum;
        while(wordEndIndex != -1){
            wordEndIndex = inputLine.find(' ', wordStartIndex);
            if(wordEndIndex == -1){
                //return string();
               // newWord = inputLine.substr(wordStartIndex, 1);
                //cout << "'" << newWord <<  wordStartIndex << "'" << endl;
            }
            else{
                newWord = inputLine.substr(wordStartIndex, wordEndIndex - wordStartIndex);
                cout << "'" << newWord << "'" << endl;
                wordStartIndex = wordEndIndex + 1;
            }    
            int stopWordsVal = stopWordsCheck(newWord);
            if(stopWordsVal == 1){
                dupWordCheck(newWord, lineNum);
            }
        }
    }
}

//Checks to see if word in file is a stop word
int concord::stopWordsCheck(string inputWord){
    return 2;
     for(int i = 0; i < stopWordNum; ++i){
        if(stopWords[i] == inputWord){
            return 0;
        }
    }  
    return 1;
}

//Checks to see if word in file is a duplicate
void concord::dupWordCheck(string inputWord, int lineNum){
    return;
    for(int i = 0; i < getTotalWordCount(); ++i){
        if(uniqueWords[i] == inputWord){
            ++wordCounts[i];
            return;
        }
    } 
    uniqueWords[wordIndex] = inputWord; 
    lineNumbers[wordIndex] = lineNum;
    wordCounts[wordIndex] = 1;
        ++wordIndex;
}

string concord::getNewWord(int wordNum){
    return uniqueWords[wordNum];
}

int concord::getWordCounts(int wordNum){
    return wordCounts[wordNum];
}

int concord::getLineNumber(int wordNum){
    return lineNumbers[wordNum];
}

int concord::getTotalWordCount(){
    return wordIndex;
}

void concord::stopWordArray(ifstream& stoptxt){
    for(int i = 0; i < stopWordNum; ++i){
      stopWords[i] = string();
      getline(stoptxt, stopWords[i]);
    }
}

int main(){
    concord game;
    
    //Opens stop word file
    string stop = "stoptxt.txt";
    ifstream stoptxt;
    stoptxt.open(stop);
    
    game.stopWordArray(stoptxt);
  
    //Opens test file
    string input = "testfile.txt";
    ifstream testfile;
    testfile.open(input);
  
    //Runs functions
    game.lineToWords(testfile);
    
    //Prints results
    for(int i = 0; i < game.getTotalWordCount(); ++i){
        cout << game.getNewWord(i) << "First occured on line: " << game.getLineNumber(i);
        cout << " and occured a total number of " << game.getWordCounts(i) << " times." << endl;
    }
};