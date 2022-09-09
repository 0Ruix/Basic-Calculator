#include <iostream>

using std::cout;
using std::cin;

int main(){

    double first_Num;
    double second_Num;
    char sign;

    double result;

    bool waiting = true;

    cout << "Enter a number :" << "\n";
    cin >> first_Num;

    cout << "Enter the second number " << "\n";
    cin >> second_Num;

    while (waiting){
        cout << "Enter a symbol. (* is for multipicaliton, / for division, + for for addition, - for subtraction)" << "\n";
        cin >> sign;

        switch (sign)
        {
        case '*':
            result = first_Num * second_Num;
            break;
        case '/':
            result = first_Num / second_Num;
            break;
        case '+':
            result = first_Num + second_Num;
            break;
        case '-':
            result = first_Num - second_Num;
            break;
        default:
            cout << "Invalid Char" << "\n";
        }

        waiting = false;

    }
    
    if (waiting)
    cout << "Answer is " << result << " \n------------------------------------------------------";


    return 0;
}