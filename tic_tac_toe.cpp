#include<iostream>
#include<windows.h>
using namespace std;

int main() {
    char ch;
    do {
        system("CLS");
        int i = 0;
        char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

        do {
            cout << endl << endl;
            cout << arr[0][0] << "  | " << arr[0][1] << "  | " << arr[0][2] << endl;
            cout << "___|____|___" << endl;
            cout << arr[1][0] << "  | " << arr[1][1] << "  | " << arr[1][2] << endl;
            cout << "___|____|___" << endl;
            cout << arr[2][0] << "  | " << arr[2][1] << "  | " << arr[2][2] << endl;
            cout << "   |    |    " << endl;

            int a;
            cout << "\nEnter player A" << endl;
            cin >> a;

            switch (a) {
                case 1:
                    if (arr[0][0] != 'X' && arr[0][0] != 'O') {
                        arr[0][0] = 'X';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 2:
                    if (arr[0][1] != 'X' && arr[0][1] != 'O') {
                        arr[0][1] = 'X';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 3:
                    if (arr[0][2] != 'X' && arr[0][2] != 'O') {
                        arr[0][2] = 'X';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 4:
                    if (arr[1][0] != 'X' && arr[1][0] != 'O') {
                        arr[1][0] = 'X';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 5:
                    if (arr[1][1] != 'X' && arr[1][1] != 'O') {
                        arr[1][1] = 'X';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 6:
                    if (arr[1][2] != 'X' && arr[1][2] != 'O') {
                        arr[1][2] = 'X';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 7:
                    if (arr[2][0] != 'X' && arr[2][0] != 'O') {
                        arr[2][0] = 'X';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 8:
                    if (arr[2][1] != 'X' && arr[2][1] != 'O') {
                        arr[2][1] = 'X';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 9:
                    if (arr[2][2] != 'X' && arr[2][2] != 'O') {
                        arr[2][2] = 'X';
                    } else {
                        cout << "Xlready Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                default:
                    cout << "Invalid input, please try again in the next turn" << endl;
                    Sleep(3000);
            }

            if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] ||
                arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] ||
                arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] ||
                arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] ||
                arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] ||
                arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] ||
                arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] ||
                arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
                cout << "***************Congratulations**************\n        Player A won the Game" << endl;
                break;
            }

            cout << "\nEnter player B" << endl;
            cin >> a;

            switch (a) {
                case 1:
                    if (arr[0][0] != 'X' && arr[0][0] != 'O') {
                        arr[0][0] = 'O';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 2:
                    if (arr[0][1] != 'X' && arr[0][1] != 'O') {
                        arr[0][1] = 'O';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 3:
                    if (arr[0][2] != 'X' && arr[0][2] != 'O') {
                        arr[0][2] = 'O';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 4:
                    if (arr[1][0] != 'X' && arr[1][0] != 'O') {
                        arr[1][0] = 'O';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 5:
                    if (arr[1][1] != 'X' && arr[1][1] != 'O') {
                        arr[1][1] = 'O';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 6:
                    if (arr[1][2] != 'X' && arr[1][2] != 'O') {
                        arr[1][2] = 'O';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 7:
                    if (arr[2][0] != 'X' && arr[2][0] != 'O') {
                        arr[2][0] = 'O';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 8:
                    if (arr[2][1] != 'X' && arr[2][1] != 'O') {
                        arr[2][1] = 'O';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                case 9:
                    if (arr[2][2] != 'X' && arr[2][2] != 'O') {
                        arr[2][2] = 'O';
                    } else {
                        cout << "Already Filled, try in the next turn" << endl;
                        Sleep(1000);
                    }
                    break;
                default:
                    cout << "Invalid input, please try again in the next turn" << endl;
                    Sleep(3000);
            }

            if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] ||
                arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] ||
                arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] ||
                arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] ||
                arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] ||
                arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] ||
                arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] ||
                arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
                cout << "***************Congratulations**************\n        Player B won the Game" << endl;
                break;
            }

            system("CLS");
            i++;
        } while (i < 5);

        cout << "Press Y if you want to continue... " << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    return 0;
}
