#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/*class concord{
    public:
    private:
};
*/

int main(){
    string stop = "stoptxt.txt";
    string stopWords[571];
    
    ifstream stoptxt;
    stoptxt.open(stop);
  
  for(int i = 0; i < 571; ++i){
      getline(stoptxt, stopWords[i]);
      cout << stopWords[i] << endl;
  }
  
  string input = "testfile.txt";
  string inputWords[50];
  
  ifstream testfile;
  testfile.open(input);
  
  for(int i = 0; i < 50; ++i){
      getline(testfile, inputWords[i]);
      cout << inputWords[i] << endl;
  }
  
  string newWords[50];
  int wordCount[50];
  int lineNum[50];
  
  for(int i = 0; i < 571; ++i){
    if(stopWords[i] == inputWords[i]){
        
    }
    else if(inputWords[i] == )
        ++wordCount[i];
    }
    else{
        newWords[i] = inputWords[i];
        ++wordCount[i];
        //LINE NUMBER
    }

    for(int i = 0; i < 50; ++i){
        cout << newWords[i] << "First occured on line: " << lineNum[i];
        cout << " and occured a total number of " << wordCount[i] << " times." << endl;
    }
}