#include <iostream>
using namespace std;

int main() {
    int mainChoice;

    do {
        int curChoice, lengthChoice, tempChoice, weightChoice;
        double inputCur, inputLength, inputTemp, inputWeight;

        cout << "==== Multi-Converter Program ====" << endl
             << "1: Currency Converter" << endl
             << "2: Length Converter" << endl
             << "3: Temperature Converter" << endl
             << "4: Weight Converter" << endl
             << "5: Exit" << endl << endl;
        cout << "Enter your choice: ";
        cin >> mainChoice;

        if (mainChoice == 1) {
            cout << endl << "== CURRENCY CONVERTER ==" << endl
                 << "1: PKR to USD" << endl
                 << "2: PKR to Euro" << endl
                 << "3: PKR to UAE Dirham" << endl
                 << "4: PKR to Saudi Riyal" << endl;
            cout << "Enter choice: ";
            cin >> curChoice;

            cout << "Enter amount in PKR: ";
            cin >> inputCur;

            switch (curChoice) {
                case 1:
                    cout << inputCur << " PKR = " << inputCur * 0.0036 << " USD" << endl;
                    break;
                case 2:
                    cout << inputCur << " PKR = " << inputCur * 0.0033 << " Euros" << endl;
                    break;
                case 3:
                    cout << inputCur << " PKR = " << inputCur * 0.013 << " UAE Dirham" << endl;
                    break;
                case 4:
                    cout << inputCur << " PKR = " << inputCur * 0.0135 << " Saudi Riyal" << endl;
                    break;
                default:
                    cout << "Invalid choice." << endl;
            }
        }

        else if (mainChoice == 2) {
            cout << endl << "== LENGTH CONVERTER ==" << endl
                 << "1: Miles to Kilometers" << endl
                 << "2: Meters to Kilometers" << endl
                 << "3: Yards to Meters" << endl
                 << "4: Feet to Inches" << endl;
            cout << "Enter choice: ";
            cin >> lengthChoice;

            cout << "Enter value: ";
            cin >> inputLength;

            switch (lengthChoice) {
                case 1:
                    cout << inputLength << " Miles = " << inputLength * 1.60934 << " Km" << endl;
                    break;
                case 2:
                    cout << inputLength << " Meters = " << inputLength / 1000.0 << " Km" << endl;
                    break;
                case 3:
                    cout << inputLength << " Yards = " << inputLength * 0.9144 << " Meters" << endl;
                    break;
                case 4:
                    cout << inputLength << " Feet = " << inputLength * 12 << " Inches" << endl;
                    break;
                default:
                    cout << "Invalid choice." << endl;
            }
        }

        else if (mainChoice == 3) {
            cout << endl << "== TEMPERATURE CONVERTER ==" << endl
                 << "1: Celsius to Fahrenheit" << endl
                 << "2: Fahrenheit to Celsius" << endl
                 << "3: Celsius to Kelvin" << endl
                 << "4: Fahrenheit to Kelvin" << endl;
            cout << "Enter choice: ";
            cin >> tempChoice;

            cout << "Enter temperature: ";
            cin >> inputTemp;

            switch (tempChoice) {
                case 1:
                    cout << inputTemp << " C = " << (inputTemp * 9 / 5) + 32 << " F" << endl;
                    break;
                case 2:
                    cout << inputTemp << " F = " << (inputTemp - 32) * 5.0 / 9.0 << " C" << endl;
                    break;
                case 3:
                    cout << inputTemp << " C = " << inputTemp + 273.15 << " K" << endl;
                    break;
                case 4:
                    cout << inputTemp << " F = " << (inputTemp - 32) * 5.0 / 9.0 + 273.15 << " K" << endl;
                    break;
                default:
                    cout << "Invalid choice." << endl;
            }
        }

        else if (mainChoice == 4) {
            cout << endl << "== WEIGHT CONVERTER ==" << endl
                 << "1: Grams to Milligrams" << endl
                 << "2: Kilograms to Pounds" << endl
                 << "3: Ounces to Carats" << endl
                 << "4: Grams to Ounces" << endl;
            cout << "Enter choice: ";
            cin >> weightChoice;

            cout << "Enter value: ";
            cin >> inputWeight;

            switch (weightChoice) {
                case 1:
                    cout << inputWeight << " g = " << inputWeight * 1000.0 << " mg" << endl;
                    break;
                case 2:
                    cout << inputWeight << " kg = " << inputWeight * 2.205 << " lbs" << endl;
                    break;
                case 3:
                    cout << inputWeight << " oz = " << inputWeight * 141.7 << " carats" << endl;
                    break;
                case 4:
                    cout << inputWeight << " g = " << inputWeight / 28.35 << " oz" << endl;
                    break;
                default:
                    cout << "Invalid choice." << endl;
            }
        }

        else if (mainChoice == 5) {
            cout << "Exiting the converter. Goodbye!" << endl;
            break;
        }

        else {
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl << endl;

    } while (true);

    return 0;
}
