#include <iostream>
using namespace std;

int main () {

    int a, b, c, d, e;
    float percentage;

    cout << "Enter the marks in Physics: ";
    cin >> a;

    cout << "Enter the marks in Chemistry: ";
    cin >> b;

    cout << "Enter the marks in Biology: ";
    cin >> c;

    cout << "Enter the marks in Mathematics: ";
    cin >> d;

    cout << "Enter the marks in Computer: ";
    cin >> e;

    percentage = (a+ b + c + d + e) / 5;

    cout << "Your percentage is " << percentage << "%." << endl;

    switch (percentage >= 90) {

        case 1: 
            cout << "You've got Grade A!" << endl;
            break;

            case 0: 
                switch (percentage >= 80) {
                    case 1: cout << "You've got Grade B!" << endl;
                        break;

                    case 0: 
                        switch (percentage >= 70) {
                            case 1: cout << "You've got Grade C!" << endl;
                                break;

                            case 0: 
                                switch (percentage >= 60) {
                                    case 1: cout << "You've got Grade D!" << endl;
                                        break;

                                    case 0: 
                                        switch (percentage >= 40) {
                                            case 1: cout << "You've got Grade E!" << endl;
                                            break;

                                            case 0: cout << "You've got Grade F!" << endl;
                                            break;
                                        }
                                        break;
                                }
                                break;
                        }
                        break;
                }
                break;
    }

}