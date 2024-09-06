#include <iostream>

using namespace std;


int main()
{
    // masiv 3x3
    int a[3][3];
    int sum = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Entrer " << sum << " namber: ";
            cin >> a[i][j];

            sum++;

        }

    }

    cout << "===============================" << endl;

    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 3; j++)

        {

            cout << a[i][j] << " ";

        }

        cout << endl;

    }
}
