#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    int count = 0;
    float sum = 0.0;
    float sum_of_square = 0.0;
    string textline;

    ifstream source("score.txt");

    while (getline(source, textline))
    {
        float x;
        stringstream ss(textline);
        ss >> x;

        sum += x;
        sum_of_square += x * x;
        count++;
    }

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum / count << "\n";
    cout << "Standard deviation = "
         << sqrt((sum_of_square / count) - pow(sum / count, 2));

    return 0;
}
