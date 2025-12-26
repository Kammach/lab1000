#include <iostream>
using namespace std;

int main() {
    int count[5] = {}; // A, B, C, D, F
    char grade;
    int student = 1;

    cout << "Please input grade of each student (A-F) or input 0 to exit.\n\n";

    do {
        cout << "Student [" << student << "]: ";
        cin >> grade;

        if (grade == '0') {
            break;
        } else if (grade == 'A') {
            count[0]++;
            student++;
        } else if (grade == 'B') {
            count[1]++;
            student++;
        } else if (grade == 'C') {
            count[2]++;
            student++;
        } else if (grade == 'D') {
            count[3]++;
            student++;
        } else if (grade == 'F') {
            count[4]++;
            student++;
        } else {
            cout << "\nWrong input. Please input again.\n\n";
        }

    } while (true);

    int total = count[0] + count[1] + count[2] + count[3] + count[4];

    cout << "\nIn total " << total << " students.\n\n";
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;

    return 0;
}
