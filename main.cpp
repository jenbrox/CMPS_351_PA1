#include <iostream>
#include <string>
using namespace std;

/*
 * ABOUT THIS PROGRAM:
 * This program contains four functions. This program provides unit conversions from degrees Fahrenheit to Celsius, Celsius to Fahrenheit, and pounds to kilograms.
 * The user is prompted to select the type of conversion they need from a menu and the converted rate is provided to them on the print screen.
 * The program will continue and the menu will be shown to the user until the user provides the exit option. If the user inputs an option that is not on the menu, they will be prompted for proper input.
 */

//declaring functions this program will use outside of main()
double convertToCelsius(auto f);
double convertToFahrenheit(auto c);
double convertToKilograms(auto p);

int main() {

    int choice;
    do {

        //present the user with the menu of conversion options
        cout << "______________________________________________\n";
        printf("%-20s%-20s%-10s\n", "To convert", "to", "enter");
        cout << "----------------------------------------------\n";
        printf("%-20s%-20s%-10s\n", "Fahrenheit", "Celsius", "1");
        printf("%-20s%-20s%-10s\n", "Celsius", "Fahrenheit", "2");
        printf("%-20s%-20s%-10s\n", "Pounds", "Kilograms", "3");
        cout << "\nEnter '4' to exit." << endl;
        cout << "----------------------------------------------\nEnter your selection here:";

        //read selection from the user and use that selection to call the applicable function
        cin >> choice;

        switch(choice){
            case 1: {
                cout << "\nConvert Fahrenheit to Celsius. Enter the temperature:";
                double fahrenheit;
                cin >> fahrenheit;
                double celsiusConversion = convertToCelsius(fahrenheit);
                cout << (fahrenheit) << " degrees fahrenheit converted to celsius is " << (celsiusConversion) << ".\n" << endl;
                break;
            }
            case 2: {
                cout << "\nConvert Celsius to Fahrenheit. Enter the temperature:";
                double celsius;
                cin >> celsius;
                double fahrenheitConversion = convertToFahrenheit(celsius);
                cout << (celsius) << " degrees celsius converted to fahrenheit is " << (fahrenheitConversion) << ".\n" << endl;
                break;
            }
            case 3: {
                cout << "\nConvert pounds to kilograms. Enter the weight in pounds:";
                double pounds;
                cin >> pounds;
                double kilogramsConversion = convertToKilograms(pounds);
                cout << (pounds) << " pounds converted to kilograms is " << (kilogramsConversion) << ".\n" << endl;
                break;
            }
            case 4:
                cout << "Program exited successfully." << endl;
                break;
            default:
                cout << "Invalid selection. Please input either 1, 2, 3, or 4.\n" << endl;
                continue;

        }

    } while (choice != 4);

    return 0;
}
/* This function converts fahrenheit to celsius.
 * Pre-condition:
 *      A temperature in fahrenheit is provided.
 * Post-condition:
 *      The celsius value of the fahrenheit temperature is calculated and returned.
 */
double convertToCelsius(auto f){

    double celsius = (f - 32) * (5 / 9.0);
    return celsius;
}
/* This function converts celsius to fahrenheit.
 * Pre-condition:
 *      A temperature in celsius is provided.
 * Post-condition:
 *      The fahrenheit value of the celsius temperature is calculated and returned.
 */
double convertToFahrenheit(auto c){

    double fahrenheit = c * (9/5.0) + 32;
    return fahrenheit;

}
/* This function converts pounds to kilograms.
 * Pre-condition:
 *      A weight in pounds is provided.
 * Post-condition:
 *      The kilogram value of the weight in pounds is calculated and returned.
 */
double convertToKilograms(auto p){

    double kilograms = (p * 0.45359237);
    return kilograms;

}
