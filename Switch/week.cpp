#include<iostream>
using namespace std;

int main () {
    
    int n;

    cout << "Enter the week number to find the corresponding weekday: ";
    cin >> n;

    switch (n == 1) {

        case 1: cout << "Sunday" << endl; 
        break;

        case 0: 
            switch (n == 2) {

                case 1: cout << "Monday" << endl;
                break;

                case 0:  
                    switch (n == 3) {

                        case 1: cout << "Tuesday" << endl;
                        break;
                        
                        case 0:
                            switch (n == 4) {

                                case 1: cout << "Wednesday" << endl;
                                break;

                                case 0:
                                    switch (n == 5) {

                                        case 1: cout << "Thursday" << endl;
                                        break;

                                        case 0: 
                                            switch (n == 6) {

                                                case 1: cout << "Friday" << endl;
                                                break;

                                                case 0: cout << "Saturday" << endl;
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
            break;
    }
    return 0;
}