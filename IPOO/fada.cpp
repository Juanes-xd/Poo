#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {1, 4, 7, 7, 12};
    // vector<string>nums = {"Camila","Ana","Sofia","Josefina"};
    int n = 5;
    int max = nums[0];
    int cantMax = 1;
    int e = nums[0];
    int cant = 0;
    for (int i = 1; i < n; i++)
    {
        cout << nums[i];
        if (nums[i] == e)
        {
            cant = cant + 1;
        }
        else if (cantMax < cant)
        {
            e = nums[i];
            cout << "Se ejecuta; " + e;
            cant = 1;
            cantMax = cant;
        }
    }
    if (cantMax < cant)
    {
        cantMax = cant;
        cout << "Resultado fina:" + cantMax;
    }

    return cantMax;
}