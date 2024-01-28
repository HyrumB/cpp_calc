#include <iostream>
#include <string>

/*sources:
1. https://stackoverflow.com/questions/8311058/n-or-n-or-stdendl-to-stdcout
2. https://stackoverflow.com/questions/26086600/warning-multi-character-character-constant-wmultichar
3. https://stackoverflow.com/questions/12230156/why-is-string-not-declared-in-scope
4. https://www.w3schools.com/cpp

4 is where i got most things

*/

int main(){
// you can declare multiple variables like so
    int num = 0, num2 = 24;
    bool running = true;
    //constants are declared using the const keyword
    //const double pi = 3.14;

    //source 3: told me i needed std infront of string
    std::string array[4];
    std::string str_input;
    int user_input;

    while (running != false){ 
        std::cout << "\nmake your choice\n";
        std::cout << "1: while loop \n";
        std::cout << "2: forloop \n";
        std::cout << "3: put strings in an array\n";
        std::cout << "4: end\n";
        std::cout << "> ";
        std::cin >> user_input ;
        switch (user_input){

            case 1:
                while (num <= num2){
                    //source 2 helped me know the diffrence between "n\" and 'n\'
                    std::cout << num << '\n';
                    num++;
                }
                break;

            case 2:
                for (int i = 0; i <= num2; i++ ){   
                    //source 2 helped me know the diffrence between "n\" and 'n\'
                    std::cout << i << '\n';

                }
                break;
            
            case 3:
                for (int i = 0; i < sizeof(array) / sizeof(int); i++) {   
                    std::cout << "input words :";
                    std::cin >> str_input;
                    array[i] = str_input; 
                }

            // ends the program
            case 4:
                running = false;
                break;
                
        }
    }
}
