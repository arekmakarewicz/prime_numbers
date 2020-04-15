#include <iostream>

using namespace std;

int main()
{
    unsigned long long prime = 2;

    //cout << "Hello World!" << endl;
    cout << "Prime numbers:" << endl;
    //cout << sizeof (prime) << endl;

    while (true)
    {
        bool flag = false;

        for ( unsigned long long i = 2; flag == true || i >= prime; i++)
        {
            if( prime % i == 0)
            {
                flag = true;
            }
        }
        if(flag == false)
        {
            cout << prime << endl;
        }

        prime++;
    }

    return 0;
}
