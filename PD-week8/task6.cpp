#include <iostream>

using namespace std;

main()
{

    int digit;
    int transformation;

    cout << "How many numbers you want to enter :";
    cin >> digit;

    cout << "How many times you want to perfom an even/odd transformation : ";
    cin >> transformation;

    int number[digit];
    for (int idx = 0; idx < digit; idx++)
    {
        cout << "ENTER NUMBER AT INDEX " << idx << " : ";
        cin >> number[idx];
        if (number[idx] % 2 == 0)
        {
            for (int j = 0; j < transformation;j++)
            {
                number[idx] = number[idx] - 2;
            }
        }
        else
        {
             for (int j = 0; j < transformation;j++)
            {
                number[idx] = number[idx] + 2;
            }
        }
    }
    for ( int idx=0 ; idx<digit ; idx++){
                cout <<number[idx] << ",";

    }
}