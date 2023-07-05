#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 8;
    vector<int> c = {-2, -5, 6, -2, -3, 1, 5, -6};
    int k;

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            if (c[i] > 0 && c[j] > 0)
            {
                // cout << "I: " << c[i] << "\n";
                // cout << "J: " << c[j] << "\n";
                // i = 0;
                // j = n;
                for (k = c[i]; k <= c[j]; k++)
                {
                    int resultado = resultado + c[k];
                    cout << resultado << "\n";
                }
            }
            else
            {
                cout << c[i];
            }
        }
    }

    return 0;
}