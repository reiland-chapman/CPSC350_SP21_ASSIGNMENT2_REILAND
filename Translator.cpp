#include "Translator.h"
#include "Model.h"

Translator::Translator() {

}

Translator::~Translator() {

}


string Translator::translateEnglishWord(string inputString) {
    string outputString;
    
    Model *mod = new Model();

    // Checks to see if there are two double characters by checking to see if the next char in the string is equal to the current char
    
    for (int i=0; i < inputString.length(); ++i)
    {
        if (i < inputString.length()-1) {
            if (inputString[i] == inputString[i+1]) {
                outputString = outputString + mod->translateDoubleCharacter(inputString[i]);
                i++;
            }
            else {
                outputString = outputString + mod->translateSingleCharacter(inputString[i]);
            }
        }
        else {
            outputString = outputString + mod->translateSingleCharacter(inputString[i]);
        }
    }
    
    return outputString + " ";
}

string Translator::translateEnglishSentence(string inputString) {

}

string Translator::translateTutWord(string inputString) {
    string outputString = "";
    
    Model *mod = new Model();

    //cout << "THE STRING!!!: " << inputString << endl;

    string portionOfWord = "";

    for (int i=0; i < inputString.length(); ++i) {
        portionOfWord += inputString[i];

        if (i < inputString.length()-1) {
            if ((portionOfWord[0] == 'e' || portionOfWord[0] == 'E') && (inputString[i+1] != 'x' && inputString[i+1] != 'X')) {
                outputString += portionOfWord[0];
                portionOfWord = "";
                continue;
            }
        }

        if (portionOfWord[0] == 'a' || portionOfWord[0] == 'e' || portionOfWord[0] == 'i' || portionOfWord[0] == 'o' || portionOfWord[0] == 'u' || portionOfWord[0] == 'A' || portionOfWord[0] == 'E' || portionOfWord[0] == 'I' || portionOfWord[0] == 'O' || portionOfWord[0] == 'U') {
            outputString += portionOfWord[0];
            portionOfWord = "";
            continue;
        }

        if (portionOfWord.compare("squa") == 0 || portionOfWord.compare("Squa") == 0) {
            
            if (i < inputString.length()-1) {
                if (inputString[i+1] == 't' || inputString[i+1] == 'T') {
                    if (i < inputString.length()-2) {
                        if (inputString[i+2] != 'a' && inputString[i+2] != 'e' && inputString[i+2] != 'i' && inputString[i+2] != 'o' && inputString[i+2] != 'u' && inputString[i+2] != 'A' && inputString[i+2] != 'E' && inputString[i+2] != 'I' && inputString[i+2] != 'O' && inputString[i+2] != 'U') 
                        {
                            outputString += "tt";
                            portionOfWord = "";
                            i++;
                            continue;
                        }
                        else {
                            outputString += inputString[i+2];
                            outputString += inputString[i+2];
                            //outputString += "dd";
                            portionOfWord = "";
                            i+= 2;
                            continue;
                        }
                    }
                }
                else {
                    outputString += (inputString[i+1] + inputString[i+1]);
                    portionOfWord = "";
                    i++;
                    continue;
                }
            }
        }

        //cout << "Current Portion of Word[" << i << "]: " << portionOfWord << endl << endl;
            
        if (mod->translateTutSyllable(portionOfWord).compare("") != 0) {
            outputString += mod->translateTutSyllable(portionOfWord);
            portionOfWord = "";
        }
        
    }
    
    //cout << "outputString: " << inputString << endl << endl;

    
    return outputString + " ";
}