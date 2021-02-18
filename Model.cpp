#include "Model.h"

Model::Model() {

}

Model::~Model() {

}

string Model::translateSingleCharacter(char inputChar) {
    string outputString;

    outputString += inputChar;

    // if it's not a vowel, add the suffix

    if (inputChar == 'b' || inputChar == 'B') {
        outputString += "ub";
    }
    else if (inputChar == 'c' || inputChar == 'C') {
        outputString += "ash";
    }
    else if (inputChar == 'd' || inputChar == 'D') {
        outputString += "ud";
    }
    else if (inputChar == 'f' || inputChar == 'F') {
        outputString += "uf";
    }
    else if (inputChar == 'g' || inputChar == 'G') {
        outputString += "ug";
    }
    else if (inputChar == 'h' || inputChar == 'H') {
        outputString += "ash";
    }
    else if (inputChar == 'j' || inputChar == 'J') {
        outputString += "ay";
    }
    else if (inputChar == 'k' || inputChar == 'K') {
        outputString += "uck";
    }
    else if (inputChar == 'l' || inputChar == 'L') {
        outputString += "ul";
    }
    else if (inputChar == 'm' || inputChar == 'M') {
        outputString += "um";
    }
    else if (inputChar == 'n' || inputChar == 'N') {
        outputString += "un";
    }
    else if (inputChar == 'p' || inputChar == 'P') {
        outputString += "ub";
    }
    else if (inputChar == 'q' || inputChar == 'Q') {
        outputString += "uack";
    }
    else if (inputChar == 'r' || inputChar == 'R') {
        outputString += "ug";
    }
    else if (inputChar == 's' || inputChar == 'S') {
        outputString += "us";
    }
    else if (inputChar == 't' || inputChar == 'T') {
        outputString += "ut";
    }
    else if (inputChar == 'v' || inputChar == 'V') {
        outputString += "uv";
    }
    else if (inputChar == 'w' || inputChar == 'W') {
        outputString += "ack";
    }
    else if (inputChar == 'x') {
        outputString = "ex";
    }
    else if (inputChar == 'X') {
        outputString = "Ex";
    }
    else if (inputChar == 'y' || inputChar == 'Y') {
        outputString += "ub";
    }
    else if (inputChar == 'z' || inputChar == 'Z') {
        outputString += "ub";
    }

    return outputString;
}

string Model::translateDoubleCharacter(char inputChar) {
    inputChar = tolower(inputChar);
    string outputString;

    if (inputChar == 'a' || inputChar == 'e' || inputChar == 'i' || inputChar == 'o' || inputChar == 'u') {
        outputString = "squat";
        outputString += inputChar;
    }
    else {
        outputString = "squa";
        outputString += inputChar;
    }

    return outputString;
}


string Model::translateTutSyllable(string inputString) {
    string outputString = "";

    if (inputString.compare("bub") == 0 
    || inputString.compare("Bub") == 0
    || inputString.compare("cash") == 0
    || inputString.compare("Cash") == 0
    || inputString.compare("dud") == 0
    || inputString.compare("Dud") == 0
    || inputString.compare("fuf") == 0
    || inputString.compare("Fuf") == 0
    || inputString.compare("gug") == 0
    || inputString.compare("Gug") == 0
    || inputString.compare("hash") == 0
    || inputString.compare("Hash") == 0
    || inputString.compare("jay") == 0
    || inputString.compare("Jay") == 0
    || inputString.compare("kuck") == 0
    || inputString.compare("Kuck") == 0
    || inputString.compare("lul") == 0
    || inputString.compare("Lul") == 0
    || inputString.compare("mum") == 0
    || inputString.compare("Mum") == 0
    || inputString.compare("nun") == 0
    || inputString.compare("Num") == 0
    || inputString.compare("pub") == 0
    || inputString.compare("Pub") == 0
    || inputString.compare("quack") == 0
    || inputString.compare("Quack") == 0
    || inputString.compare("rug") == 0
    || inputString.compare("Rug") == 0
    || inputString.compare("sus") == 0
    || inputString.compare("Sus") == 0
    || inputString.compare("tut") == 0
    || inputString.compare("Tut") == 0
    || inputString.compare("vuv") == 0
    || inputString.compare("Vuv") == 0
    || inputString.compare("wack") == 0
    || inputString.compare("Wack") == 0
    || inputString.compare("yub") == 0
    || inputString.compare("Yub") == 0
    || inputString.compare("zub") == 0
    || inputString.compare("Zub") == 0
    ) {
        outputString += inputString[0];
        //cout << "Statement 1: " << outputString << endl;
        return outputString;
    }

    if (inputString.compare("ex") == 0)
        return "x";

    if (inputString.compare("Ex") == 0)
        return "X";

    //cout << "NOT TUT" << endl;
    return "";
}