#include <iostream>

using namespace std;

int main()
{
    cout << "Start value: (from 2 to" << endl << "18446744073709551615)" << endl;

    unsigned long long int prime;
    cin >> prime;

    cout << "+ or -" << endl;

    string plus_Or_Minus;
    cin >> plus_Or_Minus;

    cout << "Prime numbers:" << endl;

    while ( prime >= 2 )
    {
        bool isDivider = false;
        unsigned long long int lastInForLoop = 0;


        for ( unsigned long long int i = 2; isDivider == false ; i++)
        {
            //cout << i << endl;

            if( prime % i == 0 )
            {
                isDivider = true;
                lastInForLoop = i;
            }
        }

        if( isDivider == true && lastInForLoop == prime )
        {
            cout << prime << " ";
        }

        if( plus_Or_Minus == "+")
            prime++;
        else if( plus_Or_Minus == "-" )
            prime--;
    }

    getchar();
    getchar();

    return 0;
}
