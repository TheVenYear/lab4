#include <locale>
#include <iostream>
#include <vector>

using namespace std;

void skin(int n, vector<int> array)
{
    int i, j, move, temp;
    for (move = n / 2; move > 0; move /= 2)
    {
        for (i = move; i < n; i++)
        {
            temp = array[i];
            for (j = i; j >= move; j -= move)
            {
                if (temp < array[j - move])
                {
                    array[j] = array[j - move];
                }

                else
                {
                    break;
                }

            }

            array[j] = temp;
            cout << "иру: " << move << endl;

            for (int i = 0; i < n; i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    setlocale(LC_ALL,"Rus");
    vector<int> array { 309, 92, 31, 46, 12, 44, 56, 32, 109, 100, 27, 126 , 125 };
    skin(array.size(), array);

    return 0;
}
