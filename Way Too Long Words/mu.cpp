#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string x;
  vector<string> v;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    if (x.length() > 10) {
      v.push_back(x.front() + to_string(x.length() - 2) + x.back() + "\n");
    } else {
      v.push_back(x + "\n");
    }
  }
  for (auto x : v) {
    cout << x;
  }
  printf("hello");
  return 0;
}

// int main() {
//   int n;
//   cin >> n;
//   string x;
//   for (int i = 0; i < n; ++i) {
//     cin >> x;
//     if (x.length() > 10) {
//       cout << x.front() + to_string(x.length() - 2) + x.back() + "\n";
//     } else {

//       cout << x + "\n";
//     }
//   }
//   return 0;
// }
