#include <iostream>
#include <string>
#include <cmath>
#include <typeinfo>


/*sources:
1: W3Schools
2: https://stackoverflow.com/questions/12028203/c-how-do-i-do-exception-handling-for-switch-case
3: https://stackoverflow.com/questions/45201434/c-how-to-split-a-user-input-string-into-multiple-strings
*/


double trigonometricRatios(double x, const std::string trigSymbol){
    
    if (trigSymbol == "sin"){
        return sin(x);
    }
    else if (trigSymbol == "cos"){
        return cos(x);
    }
    else if (trigSymbol == "tan"){
        return tan(x);
    }
    else{
        std::cout << "ERROR: unknown symbol:  " << trigSymbol << " \n";
        return 0.0;
    }
}


double basicMath(double x, char symbol, double y){
    

    switch(symbol){
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '^':
            return pow(x, y);
        
        default:
            std::cout << "ERROR: unknown input " << symbol << " \n";

            if (typeid(x) != typeid(1) || typeid(y) != typeid(1)){
                std::cout << "ERROR: unknown input " << symbol << " \n";
                return 0.0;
            }
            else if (typeid(symbol) == typeid('a')){
                std::cout << "ERROR: unknown input " << x << " \n";
                return 0.0;
            }
            else if (typeid(symbol) == typeid('a')){
                std::cout << "ERROR: unknown input " << y << " \n";
                return 0.0;
            }

        return 0;
    }
}

float bedMassSolver(std::string equation){
    std::cout << equation;
    return 0.0;
}


int main(){
    // pre-setting up variables
    bool running = true;
    int userInputMenu;
    float ans;
    float num1;
    float num2;
    char symbol;
    std::string trigSymbol;
    int user_input_math;

    // A while loop so the program doesnt end unless the user wants it to.
    while (running != false){
        userInputMenu = 0;

        std::cout << "\nWelcome to calculator";
        std::cout << "\nmake your choice\n";
        std::cout << "1: basic math \n";
        std::cout << "2: trigonometric ratios \n";
        std::cout << "3: end \n";
        std::cout << "> ";
        
        // While statment to make sure the correct input is given, 
        // and that an infinite loop doesnt happen. pulled from source 2
        while (!(std::cin >> userInputMenu) && (userInputMenu < 1 || userInputMenu > 4)) {
            std::cout << "Invalid selection - Please input 1 to 3 only.\n";
            
            // reset error flags
            std::cin.clear();

            // removes any trace of the old user_input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        
        switch (userInputMenu){
        
        case 1:
            
            std::cout << "\ninput the basic math problem you wish to solve ";
            std::cout << "EX: x + y | x - y | x * y | x / y |\n";
            std::cout << "> ";
            std::cin >> num1 >> symbol >> num2; // source 3 taught me this
            


            ans = basicMath( num1, symbol, num2);

            std::cout << "the answer is : " << ans << "\n\n";
            break;
        
        case 2:
            std::cout << "\ninput trigonomic ratio and the number \n";
            std::cout << "EX: sin x | cos x | tan x \n";
            std::cout << "> ";

            std::cin >> trigSymbol >> num1; // source 3 taught me this

            ans = trigonometricRatios( num1, trigSymbol);

            std::cout << "the answer is : " << ans << "\n\n";
            break;

        case 3:
            running = false;
            break;
        
        default:
            std::cout << "ERROR: unknown input  \n";
            break;
        }
        
    }
}


