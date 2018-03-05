#include <iostream>
using namespace std;

int main() {
    int Code;
    int Chocolates = 0;
    int Toffees = 0;
    int Jellies = 0;
    int First_Number;


    for (int Counter = 0; Counter < 10; Counter++) {
        cout << "Enter the code: "; 
        cin >> Code;
        First_Number = Code/1000;

        if (First_Number == 0){
            cout << "Wrong Input" << endl;
            return 0;
        }
        
        if (First_Number == 1) { 
            Chocolates = Chocolates + 1;
        }
        else if (First_Number == 2) {
            Toffees = Toffees + 1;
        }
        else if (First_Number == 3) {
            Jellies = Jellies + 1; 
        } 
        else if(First_Number == 0) {
            cout << "Wrong Input" << endl;
            return 0;
        }
    }
    cout << "The number of chocolates are " << Chocolates << endl;
    cout << "The number of toffees are " << Toffees << endl;
    cout << "The number of jellies are " << Jellies << endl;
}