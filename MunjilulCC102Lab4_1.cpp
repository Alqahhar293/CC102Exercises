#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char again;

    do {
        int students, quizzes;

        cout << "Enter number of students: ";
        cin >> students;

        cout << "Enter number of quizzes: ";
        cin >> quizzes;

        double scores[students][quizzes];
        double average;

        for (int i = 0; i < students; i++) {
            cout << "\nStudent " << i + 1 << " scores:\n";
            for (int j = 0; j < quizzes; j++) {
                cout << "Quiz " << j + 1 << ": ";
                cin >> scores[i][j];
            }
        }

        cout << "\nStudent\t";
        for (int j = 0; j < quizzes; j++) {
            cout << "Q" << j + 1 << "\t";
        }
        cout << "Average\n";

        for (int i = 0; i < students; i++) {
            double sum = 0;

            cout << i + 1 << "\t";
            for (int j = 0; j < quizzes; j++) {
                cout << scores[i][j] << "\t";
                sum += scores[i][j];
            }

            average = sum / quizzes;
            cout << fixed << setprecision(2) << average << endl;
        }

        cout << "\nRun program again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}
