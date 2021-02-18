#include <iostream>
#include <string>

#include "FileProcessor.h"

using namespace std;

int main(int argc, char** argv) {

    string inputFile = argv[1];
    string outputFile = argv[2];
    string translationDirection = argv[3];

    // cout << "inputFile: " << inputFile << endl;
    // cout << "outputFile: " << outputFile << endl;
    // cout << "translationDirection: " << translationDirection << endl;

    FileProcessor *fp = new FileProcessor();

    fp->processFile(inputFile , outputFile, translationDirection);

    delete fp;
    return 0;
}
