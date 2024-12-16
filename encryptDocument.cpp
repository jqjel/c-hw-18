#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

#include "caesar.h"
#include "document.h"


int main() {
    ifstream fin("message.txt");
    vector<string> words;
    loadDocument(fin, words);
    for(int i = 0; i < words.size(); ++i){
        words[i] = encrypt_word(words[i], -12);
    }

    ofstream fout("revealed_message.txt");
    writeDocument(fout, words, " ");
  

}




    reportFile << "Review with highest score: " << highestReviewIndex << endl;
    reportFile << "Review with lowest score: " << lowestReviewIndex << endl;

