#include "std_lib_facilities.h"

int main()
{
    int num1{};
    int num2{};

    vector<string>string_vals{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<int>int_vals{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    cout << "Enter a digit or spell it out: " << '\n';
    
    string word_digit{};
    cin >> word_digit;
        bool found = false;

        // Check if the input is a spelled-out number
        for (size_t i = 0; i < string_vals.size(); ++i) {
            if (word_digit == string_vals[i]) {
               // cout << int_vals[i] << '\n';
                num1 = int_vals[i];
                found = true;
                break;
            }
        }

        // If not found, check if the input is a digit
        if (!found) {
            for (size_t i = 0; i < int_vals.size(); ++i) {
                if (word_digit == to_string(int_vals[i])) {
                    //cout << string_vals[i] << '\n';
                    num1 = stoi(word_digit);
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << "Invalid input." << '\n';
        }
        // ---------------Enter sign----------------------------
        cout << "Enter one of the following: +, -, *, or /: ";
        char sign{};
        cin >> sign;
        // ---------------------------------------------------------------

        cout << "Enter another digit or spell it out: " << '\n';

        string word_digit2{};
        cin >> word_digit2;
        found = false;

        // Check if the input is a spelled-out number
        for (size_t i = 0; i < string_vals.size(); ++i) {
            if (word_digit2 == string_vals[i]) {
                // cout << int_vals[i] << '\n';
                num2 = int_vals[i];
                found = true;
                break;
            }
        }

        // If not found, check if the input is a digit
        if (!found) {
            for (size_t i = 0; i < int_vals.size(); ++i) {
                if (word_digit2 == to_string(int_vals[i])) {
                    //cout << string_vals[i] << '\n';
                    num2 = stoi(word_digit2);
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << "Invalid input." << '\n';
        }

        switch (sign)
        {
        case '+':
            cout << num1 << " " << sign << " " << num2 << " is " << num1 + num2;
            break;
        case '-':
            cout << num1 << " " << sign << " " << num2 << " is " << num1 - num2;
            break;
        case '*':
            cout << num1 << " " << sign << " " << num2 << " is " << num1 * num2;
            break;
        case '/':
            cout << num1 << " " << sign << " " << num2 << " is " << num1 / num2;
            break;
        default:
            cout << "";
        }
    

    return 0;
}
