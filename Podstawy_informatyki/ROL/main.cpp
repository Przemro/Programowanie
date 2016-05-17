#include <iostream>

using namespace std;

int main()
{
    int t,a,l,k;
    cin >> t;

    while(t)
    {
        cin >> l;
        cin >> k;
        int tab[l][k];

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cin >> tab[i][j];
            }
        }

        a = tab[0][0];

        for (int i = 0; i < k; i++)
        {
            tab[0][i] = tab[0][i+1];
        }
        tab[1][0] = a;


        for (int i = 0; i < l; i++)
        {
            cout << endl;
            for (int j = 0; j < k; j++)
            {
                cout << tab[i][j] << endl;
            }
        }
        cout << endl;
        t--;
    }
    return 0;
}
