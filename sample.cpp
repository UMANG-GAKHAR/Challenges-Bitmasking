#include<bits/stdc++.h>
using namespace std;
vector<int> caps[101];
int dp[1025][101];
int allmask;
long long int uniqueCaps(int mask, int i) {
   if (mask == allmask) return 1;
   if (i > 100) return 0;
   if (dp[mask][i] != -1) return dp[mask][i];
   long long int ways = uniqueCaps(mask, i+1);
   int size = caps[i].size();
   for (int j = 0; j < size; j++) {
      if (mask & (1 << caps[i][j])) continue;
         else ways += uniqueCaps(mask | (1 << caps[i][j]), i+1);
         ways %= (1000000007);
      }
      return dp[mask][i] = ways;
   }
int main() {
   int n = 3;
   // Collection of person 1
   caps[4].push_back(0);
   caps[45].push_back(0);
   caps[10].push_back(0);
   // Collection of person 2
   caps[25].push_back(1);
   // Collection of person 3
   caps[45].push_back(2);
   caps[10].push_back(2);
   allmask = (1 << n) - 1;
   memset(dp, -1, sizeof dp);
   cout<<"The number of ways the person can wear unique cap in party is:\t"<<uniqueCaps(0, 1);
   return 0;
}
