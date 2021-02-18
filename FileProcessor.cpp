#include "FileProcessor.h"
#include "Translator.h"

FileProcessor::FileProcessor() {

}

FileProcessor::~FileProcessor() {

}

void FileProcessor::processFile(string inputFile, string outputFile, string translationDirection) {
    // cout << "input file: " << inputFile << endl;
    // cout << "output file: " << outputFile << endl;

    Translator *trans = new Translator();
    

    string fileContents;

    ifstream inFS;
    inFS.open(inputFile);

    ofstream outFS;
    outFS.open(outputFile);

    // Goes through each word in the file, translates it, then writes the translated string to the output file

    while (!inFS.eof()) {
        inFS >> fileContents;
        if (!inFS.fail()) {
            string translatedText;
            //cout << "string: " << fileContents << endl;
            if (translationDirection.compare("E2T") == 0)
                translatedText = trans->translateEnglishWord(fileContents);
            else if (translationDirection.compare("T2E") == 0)
                translatedText = trans->translateTutWord(fileContents);
            else
                cout << "Invalid translation direction" << endl;
            //cout << "[[Translated text: " << translatedText << "]]" << endl;
            outFS << translatedText;
        }
    }
    
    inFS.close();
    outFS.close();

    delete trans;

}
