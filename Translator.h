#include <iostream>
#include <string>
using namespace std;

class Translator {

    public:
        Translator();
        ~Translator();
        string translateEnglishWord(string inputString);
        string translateEnglishSentence(string inputString);
        string translateTutWord(string inputString);
};