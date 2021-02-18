#include <iostream>
#include <string>
using namespace std;

class Model {

    public:
        Model();
        ~Model();
        string translateSingleCharacter(char inputChar);
        string translateDoubleCharacter(char inputChar);
        string translateTutSyllable(string inputString);
};