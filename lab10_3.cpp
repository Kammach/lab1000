//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <sstream>

using namespace std;

string formatDouble(double x) {
    ostringstream out;
    out << fixed << setprecision(3) << x;
    string s = out.str();
    while (s.back() == '0') s.pop_back();
    if (s.back() == '.') s.pop_back();
    return s;
}

int main(){
    ifstream file("score.txt");

    double x, sum = 0.0, sum_sq = 0.0;
    int N = 0;

    while (file >> x) {
        sum += x;
        sum_sq += x * x;
        N++;
    }
    file.close();

    double mean = sum / N;
    double sd = sqrt((sum_sq / N) - (mean * mean));

    cout << "Number of data = " << N << endl;
    cout << "Mean = " << formatDouble(mean) << endl;
    cout << "Standard deviation = " << formatDouble(sd) << endl;

    return 0;
}
