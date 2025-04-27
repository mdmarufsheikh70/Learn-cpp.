#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    optimize();
    pair<int, int> p;
    p.first = 20;
    p.second = 10;
    cout << p.first << " " << p.second << endl;
    swap(p.first, p.second);
    cout << p.first << " " << p.second;
    return 0;
}