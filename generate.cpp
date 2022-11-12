
using namespace std; 
#include <bits/stdc++.h>
#define sz(s) int(s.size())
#define all(vec)  vec.begin(),  vec.end()

string digit = "0123456789";
string symbol = "!@#$%^&*()_+{}|:<>?`~";
string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string lower_case = "abcdefghijklmnopqrstuvwxyz";

void Accepted(){
  
  int number_of_characters;       
  
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

  cout << "Your password is: " << password << endl;

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
  return 0;
}
