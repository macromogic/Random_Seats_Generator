#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<string> vect;

int base = 0;

/*
class rand_gen
{
    int operator()()
    {
        return rand() % base;
    }
};
*/

int main()
{
    int lines, rows;
    cin >> lines >> rows;
    base = lines * rows;
    vect.resize(base);
    string tmp;
    int i = 0;
    while (cin >> tmp && i < base)
    {
        vect[i++] = tmp;
    }

    srand(time(0));
    rand();
    random_shuffle(vect.begin(), vect.end());

    for (int j = 0; j < rows; ++j)
    {
        for (int k = 0; k < lines; ++k)
        {
            cout << vect[j * lines + k] << ",";
        }
        cout << endl;
    }
    return 0;
}
