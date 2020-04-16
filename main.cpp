#include <iostream>

using namespace std;

int main()
{
    cout << "Start value: (from 2 to" << endl << "18446744073709551615)" << endl;

    unsigned long long int prime;
    cin >> prime;

    cout << "Prime numbers:" << endl;

    while (true)
    {
        bool isDevider = false;
        unsigned long long int lastInForLoop = 0;


        for ( unsigned long long int i = 2; isDevider == false ; i++)
        {
            if( prime % i == 0)
            {
                isDevider = true;
                lastInForLoop = i;
            }
        }

        if(isDevider == true && lastInForLoop == prime)
        {
            cout << prime << " is NOT prime" << endl;
        }
        else
        {
            cout << prime << " is NOT prime" << endl;
        }

        prime++;
    }

    return 0;
}
