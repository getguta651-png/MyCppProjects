#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    char names[5][20];
    int marks[5][3];

    int totals[5];
    double averages[5];
    int top = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter name for student " << (i + 1) << ": ";
        cin.getline(names[i], 20);

        totals[i] = 0;

        cout << "Enter marks for 3 subject " << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Subject " << j + 1 << ": ";
            cin >> marks[i][j];

            totals[i] = totals[i] + marks[i][j];
        }
        averages[i] = totals[i] / 3.0;

        cin.ignore();
        cout << endl;

        if (i == 0 || totals[i] > totals[top])
        {
            top = i;
        }
    }

    cout << "\n\n===============STUDENT MARK SHEET===============\n\n";

    cout << "Name\t\tM1\tM2\tM3\tTotal\tAvg\n";

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << "\t\t"
             << marks[i][0] << "\t"
             << marks[i][1] << "\t"
             << marks[i][2] << "\t"
             << totals[i] << "\t"
             << fixed << setprecision(1) << averages[i] << "\n";
    }

    cout << endl;

    cout << "\nTop student: " << names[top] << endl;

    return 0;
}
