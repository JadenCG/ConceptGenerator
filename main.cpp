#include <iostream>
#include "GenerationMethods.h"

using namespace std;

class Prompt {
    //The prompt class organizes various attributes of a randomly-generated prompt.
    //Technically speaking, this isn't necessary as the user will unlikely access a previous idea.
    public:

        string adjective; //self-explanatory variables
        string color;
        string size;
        string profession;
        string species;
        string keyFeature; //keyFeature will be an optional parameter which must be included if the user requests it
        //i.e. "Draw a mad king. MUST INCLUDE: keyFeature"

        //A constructor for a prompt
        /*
        Prompt(string adjective, string color, string size, string profession, string species, string keyFeature) {
        this.adjective = adjective;
        this.color = color;
        this.size = size;
        this.profession = profession;
        this.species = species;
        this.keyFeature = keyFeature;
        }
        */
};

int main()
{
    GenerationMethods generateService; //Unsure if this is correct; my past experience with Java/C# indicates creating an object from a class should be unecessary.

    //begin the program with an introduction
    generateService.introMessage();
    //next, ask for input followed by the processCommand() method

    //if the input equals "quit" or something like it, return 0 (stop the program)
    return 0;
}

//processCommand:
//check cases for a valid command (split into args?)
//ie, 1 a q may be split and processed as 1 prompt to generate, all potential options, and quit after generation
//maybe rather than being a, q, etc, ! should be used first to indicate it is a random response

//command planning (referencing the prompt class/obj)
//a c si p sp kF being adjectives, color, size, profession, species, keyFeature respectively
//if each string equals itself, generate a random thing from a provided list
//otherwise, interpret the string as-is
//kF is an exception, if it remains "kF" state "No Key Features are required for this prompt". Otherwise state "must include: [Object]"
