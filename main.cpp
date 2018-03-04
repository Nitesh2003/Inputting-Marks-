#include <iostream>
using namespace std;

int main(){
    int Marks;
    int Counter = 0;

    int Highest_Math = 0;
    int Lowest_Math = 100;
    int Average_Math = 0;
    int Total_Math = 0;

    int Highest_Science = 0;
    int Lowest_Science = 100;
    int Average_Science = 0;
    int Total_Science = 0;

    int Highest_English = 0;
    int Lowest_English = 100;
    int Average_English = 0;
    int Total_English = 0;

    int Highest_IT = 0;
    int Lowest_IT = 100;
    int Average_IT = 0;
    int Total_IT = 0;

    int Highest_Overall = 0;
    int Lowest_Overall = 100;
    int Average_Overall = 0;
    int Total_Overall = 0;


    while (Counter <= 9) {    
        cout << "Enter the marks for Mathematics: ";
        cin >> Marks;

        if(!Marks) {
            return 0;
        } 
        else if (Marks < 0 || Marks > 100) {
            return 0;
        }

        if (Marks > Highest_Math) {
            Highest_Math = Marks;
        }
        
        if (Marks > Highest_Overall) {
            Highest_Overall = Marks;
        }
        if (Marks < Lowest_Math) {
            Lowest_Math = Marks;
        }
        if (Marks < Lowest_Overall) {
            Lowest_Overall = Marks;
        }
        
        Total_Overall = Total_Overall + Marks;
        Total_Math = Total_Math + Marks;
        Counter = Counter + 1;
    }

    Counter = 0;   
    Average_Math = (Total_Math/10);
    cout << "\n\n";
    Marks = 0;

    while (Counter <= 9) {    
        cout << "Enter the marks for Science: ";
        cin >> Marks;

        if (Marks > Highest_Science) {
            Highest_Science = Marks;
        }
        if (Marks > Highest_Overall) {
            Highest_Overall = Marks;
        }
        if (Marks < Lowest_Science) {
            Lowest_Science = Marks;
        }
        if (Marks < Lowest_Overall) {
            Lowest_Overall = Marks;
        }
        
        Total_Overall = Total_Overall + Marks;
        Total_Science = Total_Science + Marks;
        Counter = Counter + 1;
    }

    Counter = 0;
    Average_Science = (Total_Science/10);
    cout << "\n\n";
    Marks = 0;

    while (Counter <= 9) {    
        cout << "Enter the marks for English: ";
        cin >> Marks;

        if (Marks > Highest_English) {
            Highest_English = Marks;
        }
        if (Marks > Highest_Overall) {
            Highest_Overall = Marks;
        }
        if (Marks < Lowest_English) {
            Lowest_English = Marks;
        }
        if (Marks < Lowest_Overall) {
            Lowest_Overall = Marks;
        }

        
        Total_Overall = Total_Overall + Marks;
        Total_English = Total_English + Marks;
        Counter = Counter + 1;
    }

    Counter = 0;
    Average_English = (Total_English/10);
    cout << "\n\n";
    Marks = 0;


    while (Counter <= 9) {    
        cout << "Enter the marks for IT: ";
        cin >> Marks;

        if (Marks > Highest_IT) {
            Highest_IT = Marks;
        }
        if (Marks > Highest_Overall) {
            Highest_Overall = Marks;
        }
        if (Marks < Lowest_IT) {
            Lowest_IT = Marks;
        }
        if (Marks < Lowest_Overall) {
            Highest_Overall = Marks;
        }
        
        Total_Overall = Total_Overall + Marks;
        Total_IT = Total_IT + Marks;
        Counter = Counter + 1;
    }

    Average_IT = (Total_IT/10);
    Average_Overall = (Total_Overall/40);

    cout << "\n\nThe highest mark in Mathematics is: " << Highest_Math << endl;
    cout << "The lowest mark in Mathematics is: " << Lowest_Math << endl;
    cout << "The average mark in Mathematics is: " << Average_Math << endl;

    cout << "\nThe highest mark in Science is: " << Highest_Science << endl;
    cout << "The lowest mark in Science is: " << Lowest_Science << endl;
    cout << "The average mark in Science is: " << Average_Science << endl;

    cout << "\nThe highest mark in English is: " << Highest_English << endl;
    cout << "The lowest mark in English is: " << Lowest_English << endl;
    cout << "The average mark in English is: " << Average_English << endl;

    cout << "\nThe highest mark in IT is: " << Highest_IT << endl;
    cout << "The lowest mark in IT is: " << Lowest_IT << endl;
    cout << "The average mark in IT is: " << Average_IT << endl;

    cout << "\nThe overall highest mark is: " << Highest_Overall << endl;
    cout << "The overall lowest mark is: " << Lowest_Overall << endl;
    cout << "The overall average mark is: " << Average_Overall << endl;


}
    