#include <vector>
#include <iostream>
#include <string>

using namespace std;

const int MOD = 1000000007;

long substrings (string s) {
   int n = s.size ();
   vector<long> a (n), b (n); // a = weight, b = weight sum
   a[0] = 1, b[0] = 1;

   for (int i = 1; i < n; i++) {
      a[i] = (10 * a[i - 1]) % MOD;
      b[i] = (b[i - 1] + a[i]) % MOD;
   }

   long ans = 0;
   for (int i = 0; i < n; i++) {
      ans += ((s[i] - '0') * b[n - i - 1] * (i + 1)) % MOD;
      ans %= MOD;
   }

   return ans;
}

int main () {
   string n;
   cin >> n;
   cout << substrings (n) << endl;
}
