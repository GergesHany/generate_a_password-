#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std; 
using namespace __gnu_pbds;

#define EPS 1e-18
#define sz(s) int(s.size())  
#define Pair pair < ll, ll >
#define rall(s)  s.rbegin(), s.rend()
#define TC int t; cin >> t; while(t--)
#define getline(s) getline(cin >> ws, s)
#define all(vec)  vec.begin(),  vec.end()
#define updmin(a, b) a = min((ll)a, (ll)b)
#define updmax(a, b) a = max((ll)a, (ll)b)
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define endd(s) return void(cout << s << "\n")
#define watch(x) cout << (#x)<<" = "<<x<< "\n"
#define fixed(n) cout << fixed << setprecision(n)
#define ceill(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define cin_2d(vec, n, m) for(int i=0;i<n;i++) for(int j=0;j<m&&cin>>vec[i][j];j++);
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define ordered_set tree<ll, null_type, less <ll>, rb_tree_tag,tree_order_statistics_node_update>
#define multi_ordered_set tree<ll, null_type, less_equal <ll>, rb_tree_tag,tree_order_statistics_node_update>

typedef long long ll;
const ll N = 1e5 + 5;
typedef long double ld;
typedef unsigned long long ull;
const ll Mod = 1'000'000'007;
const ll INF = 2'000'000'000;
const double PI = acos(-1.0);
int dx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
 
void Gerges_Hany(){
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  #ifndef ONLINE_JUDGE  
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}

template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x;
    return in;
}
 
template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) { 
    for (const T &x : v) out << x << ' '; 
    return out;
}

string digit = "0123456789";
string symbol = "!@#$%^&*()_+{}|:<>?`~";
string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string lower_case = "abcdefghijklmnopqrstuvwxyz";

void Accepted(){
  
  ll number_of_characters;       
  
  sacn:
    cout << "Enter the number of characters: ";
    cin >> number_of_characters;

  if (number_of_characters < 8) {
    cout << "The number of characters must be greater than or equal to 8" << endl;
    goto sacn;
  }

   
  shuffle(all(digit), mt19937(chrono::steady_clock::now().time_since_epoch().count()));
  shuffle(all(symbol), mt19937(chrono::steady_clock::now().time_since_epoch().count()));
  shuffle(all(upper_case), mt19937(chrono::steady_clock::now().time_since_epoch().count()));
  shuffle(all(lower_case), mt19937(chrono::steady_clock::now().time_since_epoch().count()));
  

  string password;       
  int part_1 = round(number_of_characters * (25.0 / 100.0));
  int part_2 = round(number_of_characters *  (30.0 / 100.0));
  
  cout << part_1 << " " << part_2 << endl;

  for (int i = 0; i < part_1; i++) {
    password += upper_case[rand() % sz(upper_case)];
    password += lower_case[rand() % sz(lower_case)];
  }

  for (int i = 0; i < part_2; i++) {
    password += symbol[rand() % symbol.size()];
    password += digit[rand() % digit.size()];
  }

  shuffle(all(password), mt19937(chrono::steady_clock::now().time_since_epoch().count()));

  watch(password);

}

int main()
{
  
 // Gerges_Hany();
  int testcaces = 1, T = 1;
  // cin >> testcaces;
  while (testcaces--){  
    // cout << "Case #" << T++ << ": ";
    Accepted();
  }   
  Time;
  return 0;
}