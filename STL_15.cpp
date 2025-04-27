// #include<bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio; cin.tie(0); cout.tie(0);

// void genareat_permutation(string s) {

//     for(int i = 0; i < s.length(); i++){
//         for(int j = 0; j < s.length(); j++) {
//             for(int k = 0; k < s.length(); k++){
//                 if(i != j && j != k && k != i){
//                     cout << s[i] << s[j] << s[k] << endl;
//                 }
//             }
//         }
//     }
// }

// int main() {
//     optimize();
//     string s = "abc";
//     genareat_permutation(s);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abc";
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    return 0;
}
