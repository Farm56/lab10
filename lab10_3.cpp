#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    int count = 0;
    double sum = 0;
    double sum_sq = 0;
    double num;

    ifstream source("score.txt");
    while (source >> num) {
        sum += num;
        sum_sq += num * num;
        count++;
    }
    source.close();

    double mean = sum / count;
    double std_dev = sqrt((sum_sq / count) - (mean * mean));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << std_dev << endl;

    return 0;
}