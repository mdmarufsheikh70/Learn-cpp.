#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_front(20);
    dq.push_front(10);

    for(auto u : dq) {
        cout << u << " ";
    }
    cout << endl;
    cout << "After delete at font and back" << endl;

    dq.pop_back();
    dq.pop_front();

   for(int i = 0; i < dq.size(); i++) {
        if(i==0){
            cout << "   ";
        }
        cout << dq[i] << " ";
   }

    return 0;
}