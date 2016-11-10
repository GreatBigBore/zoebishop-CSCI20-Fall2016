#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class concord{
    public:
    private:
};


int stopWord{
     if(!(stopWord[i] == inputWord)){
        ++wordCount[i];
    }
}

int dupWord{
    if(newWord[i] = inputWord;){
        ++wordCount[i];
        //LINE NUMBER
        find(newWord[i]);
    }
}

newWord{
    int wordStartIndex = 0;
    int wordEndIndex = 0;
    
    for(int i = 0; i < 571; ++i){
        getline(testfile, inputWord);
        for(int j = 0; j < 571; ++j){
            while(char != ' '){
                wordEndIndex = find(' ');
                substr(wordStartIndex, wordEndIndex - wordStartIndex);
            
                wordStartIndex = wordEndIndex + 1;
         }
     } 
}

int main(){
    concord game;
    
    string stop = "stoptxt.txt";
    string stopWord[571];
    
    ifstream stoptxt;
    stoptxt.open(stop);
  
  for(int i = 0; i < 571; ++i){
      getline(stoptxt, stopWord[i]);
      cout << stopWord[i] << endl;
  }
  
  string input = "testfile.txt";
  string inputWord;
  
  ifstream testfile;
  testfile.open(input);
  
  string newWords[50];
  int wordCount[50];
  int lineNum[50];
  
  for(int i = 0; i < 50; ++i){
      game.newWord;
      game.stopWord;
      game.dupWord;
  }

    for(int i = 0; i < 50; ++i){
        cout << newWord[i] << "First occured on line: " << lineNum[i];
        cout << " and occured a total number of " << wordCount[i] << " times." << endl;
    }
};