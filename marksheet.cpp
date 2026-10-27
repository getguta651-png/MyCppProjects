#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{

    char names[5][20];
    int marks[5][3];

    int total[5] = {0};
    double average[5] = {0.0};
    int top = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name of  studenta " << (i + 1) << " :";
        cin.getline(names[i], 20);
        cout << "Enter mark for " << names[i] << endl;

        for (int j = 0; j < 3; j++)
        {
            cout << "    M" << j + 1 << ": ";
            cin >> marks[i][j];
        }

        cin.ignore();
        cout << endl;

        for (int j = 0; j < 3; j++)
        {
            total[i] = total[i] + marks[i][j];
        }

        average[i] = total[i] / 3.0;
    }

    cout << left << setw(12) << "Name"
         << right << setw(6) << "M1"
         << setw(6) << "M2"
         << setw(6) << "M3"
         << setw(12) << "Total"
         << setw(14) << "Average " << endl;

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << left << setw(12) << names[i]
             << right << setw(6) << marks[i][0]
             << setw(6) << marks[i][1]
             << setw(6) << marks[i][2]
             << setw(11) << total[i]
             << setw(13) << fixed << setprecision(2) << average[i] << endl;

        if (total[i] > total[top])
        {
            top = i;
        }
    }

    cout << endl;

    cout << "\nTop student: " << names[top] << endl;

    cout << endl;

    return 0;
}