#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 bool 
 double
 char
 unsigned int
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int alpha = 1;
    int bravo = -52;
    int charles = 3;

    float cat = 5.0f; 
    float dog = 10.56f;
    float bird = 36.4545785f;

    bool isThisCool = true;
    bool areBirdsReal = false;
    bool doAndroidsDreamOfElectricSheep = false;

    double twoCats = 6.5;
    double twoDogs = 6.812345678945627;
    double twoBirds = 75.5764;

    char word = 'o';
    char excel = 'p';
    char ascii = 56;

    unsigned int a = 59;
    unsigned int b = 4;
    unsigned int c = 56;
    
    ignoreUnused(number, alpha, bravo, charles, cat, dog, bird, isThisCool, areBirdsReal,  doAndroidsDreamOfElectricSheep, twoCats, twoDogs, twoBirds, word, excel, ascii, a, b, c); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1) int
 */
bool legatoCheck(bool notePlaying, bool inRange)
{ 
    ignoreUnused(notePlaying, inRange);
    return {};
}
/*
 2)
 */

int limit(int value, int min = 1, int max = 127)
{ 
    ignoreUnused(value, min, max);
    return {};
}
/*
 3)
 */
int chooseString(bool isFirstNote, int eventNote, int handPosition)
{ 
    ignoreUnused(isFirstNote, eventNote, handPosition);
    return {};
}
/*
 4)
 */
int moveCapo(int fretNumber)
{ 
    ignoreUnused(fretNumber);
    return {};
}
/*
 5)
 */
float setLegatoTiming(int noteVelocity, double expConstant)
{ 
    ignoreUnused(noteVelocity, expConstant);
    return {};
}
/*
 6)
 */
int loadAudioFileIntoBuffer(int bufferSize = 1024)
{ 
    ignoreUnused(bufferSize);
    return {};
}
/*
 7)
 */
float calculateTotalPrice(float retailPrice, float discountPercent = 20.0f)
{ 
    ignoreUnused(retailPrice, discountPercent);
    return {};
}
/*
 8)
 */
bool previousNoteLegato(bool notePlaying, int lastNote)
{ 
    ignoreUnused(notePlaying, lastNote);
    return {};
}
/*
 9)
 */
int calculateControllerValue(int noteVelocity, int timingOffset = 120)
{ 
    ignoreUnused(noteVelocity, timingOffset);
    return {};
}
/*
 10)
 */
int findAsciiCode(char symbol)
{ 
    ignoreUnused(symbol);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto playLegato = legatoCheck(true, true);
    //2)
    auto controllerOutput = limit(64);
    //3)
    auto stringToPlay = chooseString(false, 62, 4);
    //4)
    auto capoPosition = moveCapo(5);
    //5)
    auto intervalDuration = setLegatoTiming(75, 4.1524688753);
    //6)
    auto impulseResponse = loadAudioFileIntoBuffer();
    //7)
    auto priceToPay = calculateTotalPrice(1300.0f);
    //8)
    auto trillFlag = previousNoteLegato(56, false);
    //9)
    auto controllerValue = calculateControllerValue(45, 0);
    //10)
    auto asciiCode = findAsciiCode('~');
    
    ignoreUnused(carRented, playLegato, controllerOutput, stringToPlay, capoPosition, intervalDuration, impulseResponse, priceToPay, trillFlag, controllerValue, asciiCode);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
