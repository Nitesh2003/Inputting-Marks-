#include <iostream>
using namespace std;

bool isMathOperator( char Symbol ) {
    return (Symbol != '+') && (Symbol != '-') && (Symbol != '*') && (Symbol != '/');
}


int main() {
    string Question = "Yes";
    while (Question == "Yes") {
        int Num1;
        int Num2;
        char Symbol;
        int Answer;
        


        cout << "Calculator" << endl;
        cout << "Type your first number: ";
    
        cin >> Num1;

        if (Num1 == 0) {
        
        } else if (!Num1) {
            cout << "Wrong input.";
            return 0;
        }

        cout << "Type your second number: ";
        cin >> Num2;

        if (Num1 == 0) {
        
        } else if (!Num1) {
            cout << "Wrong input.";
            return 0;
        }

        cout << "What operation do you want to use(+,-,*,/): ";
        cin >> Symbol;
    
        if ( isMathOperator(Symbol) ) {
            cout << "Wrong input." << endl;
            return 0;
        } else if (Symbol == '+') {
            Answer = Num1 + Num2;
            cout << "The answer is " << Answer << endl;
            cout << "Want to Continue(Yes or No): ";
            cin >> Question;
        } else if (Symbol == '-') {
            Answer = Num1 - Num2;
            cout << "The answer is " << Answer << endl;
            cout << "Want to Continue(Yes or No): ";
            cin >> Question; 
        } else if (Symbol == '*') {
            Answer = Num1 * Num2;
            cout << "The answer is " << Answer << endl;
            cout << "Want to Continue(Yes or No): ";
            cin >> Question;
        } else if (Symbol == '/') {
            Answer = Num1/Num2;
            cout << "The answer is " << Answer << endl;
            cout << "Want to Continue(Yes or No): ";
            cin >> Question;
        }
        }
        }
