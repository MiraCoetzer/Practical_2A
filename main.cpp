#include <iostream>

using namespace std;

int main()
{
    const int ERROR_CODE = -1;
    const int SUCCESS_CODE = 0;

    // Menu Output
    cout << "Menu: " << endl;
    cout << "Option A: Accuracy score of a machine learning model. " << endl;
    cout << "Option B: Number of VPL exercises completed. " << endl;
    char chOption = '\0';
    cout << "Enter Option > ";
    cin >> chOption;

    // Cases for menu input
    switch(chOption)
    {
    case 'A':
    case 'a':
        {
            cout << "Enter the accuracy score of your machine learning model: ";
            int intAccuracy = 0;
            cin >> intAccuracy;

            // Conditions for erroneous input
            if (intAccuracy < 0 || intAccuracy > 100 || cin.fail()) {
                cerr << "Accuracy must be a number between 0 and 100." << endl;
                exit(ERROR_CODE);
            }

            // Output for each accuracy range
            else {
                if (intAccuracy <= 50) {
                    cout << "Low accuracy! Consider retraining the model. " << endl;
                }
                else if (intAccuracy <= 70) {
                    cout << "Moderate accuracy. Room for improvement. " << endl;
                    }
                else if (intAccuracy <= 90) {
                    cout << "Good accuracy. Your model is performing well. " << endl;
                }
                else if (intAccuracy <=100) {
                    cout << "Excellent accuracy. Well done! " << endl;
                }


                }
            break;
        }
    case 'B':
    case 'b':
        {
            cout << "Enter the number of VPL exercises that you have completed: ";
            int intExercises = 0;
            cin >> intExercises;

            // Conditions for erroneous input
            if (intExercises < 0) {
                cerr << "Input cannot be negative. " << endl;
                exit(ERROR_CODE);
            }
            else if (cin.fail()) {
                cerr << "Input must be a number. " << endl;
            }

            // Output based on number of exercises completed
            else {
                (intExercises < 5) ? (cout << "The more VPL exercises you successfully complete, the higher your chances of obtaining a perfect practical mark." << endl) :
                    (cout << "Keep it up. " << endl);
            }
            break;
        }
    default:
        {
            // Output for erroneous menu input
            cerr << "Option must be A or B. " << endl;
            exit(ERROR_CODE);
        }

    }

    return(SUCCESS_CODE);
}
