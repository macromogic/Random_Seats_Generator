#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int c, char ** argv)
{
    int lines, rows;
    cin >> lines >> rows;
    vector<string> vect;
    string tmp;
    while (cin >> tmp && tmp[0] != '-')
    {
        vect.push_back(tmp);
    }

    set<pair<int, int> > empty_seat;
    int x, y;
    while (cin >> x >> y)
        empty_seat.insert(make_pair(x, y));

    srand(time(0));
    rand();
    random_shuffle(vect.begin(), vect.end());

    for (int j = 0, cnt = 0; j < rows; ++j)
    {
        for (int k = 0; k < lines; ++k)
        {
            string cur;
            if (empty_seat.count(make_pair(j, k)))
                cur = "";
            else
                cur = vect[cnt++];

            if (c > 1)
                cout << setw(10) << cur;
            else
                cout << cur << ",";
        }
        cout << endl;
    }
    return 0;
}
