// #include <bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int main()
// {
//     optimize();
//     vector<pair<int, int>> p;
//     p = { {2, 3}, {1, 5}, {2, 1}, {2, 3} };

//     sort(p.begin(), p.end());
//     for(auto x : p){
//         cout << x.first << " " << x.second << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    vector<pair<int, int>> p;
    p = { {2, 3}, {1, 5}, {2, 1}, {2, 3} };

    sort(p.begin(), p.end());
    for(auto [x, y] : p){
        cout << x << " " << y << endl;
    }

    return 0;
}