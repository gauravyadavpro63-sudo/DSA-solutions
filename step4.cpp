// step 4.1//

#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
  //   int count=0;
  // while(n>0){
  //   n=n/10;
  //   count=count+1;
  // }
  // cout<<count;
  int count = int(log10(n) + 1); // due to division time complexity is logn//
  return count;
}

int reverse(int n)
{
  int rev = 0;
  while (n > 0)
  {
    int num = n % 10;
    rev = rev * 10 + num;
    n = n / 10;
  }
  return rev;
}

int pallindrome(int n)
{
  int rev = 0;
  int dup = n;
  while (n > 0)
  {
    int num = n % 10;
    rev = rev * 10 + num;
    n = n / 10;
  }
  if (rev == dup)
  {
    return true;
  }
  return false;
}

// int armstrong(int n) 
// {
//  #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int original = n;
//     int sum = 0;

//     // count digits
//     int digits = 0;
//     int temp = n;
//     while (temp > 0) {
//         digits++;
//         temp /= 10;
//     }

//     // calculate sum
//     temp = n;
//     while (temp > 0) {
//         int d = temp % 10;
//         sum += pow(d, digits);
//         temp /= 10;
//     }

//     if (sum == original)
//         cout << "Armstrong";
//     else
//         cout << "Not Armstrong";

//     return 0;
// }
// }

int divisior(int n)
{

  // for(int i=1;i<=n;i++){
  //   if(n%i==0){
  //     cout<<" "<<i;
  // }
  // }
  vector<int> ls;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      ls.push_back(i);
      if ((n / i) != i)
      {
        ls.push_back(n / i);
      }
    }
  }
  sort(ls.begin(), ls.end());
  for (auto it : ls)
  {
    cout << it << " ";
  }
}

int prime(int n)
{
  int count = 0;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      count++;

      if ((n / i) != i)
      {
        count++;
      }
    }
  }
  if (count == 2)
  {
    cout << "true";
  }
  else
  {
    cout << "false";
  }
}



int main()
{
  int p;
  cin >> p;
  for (int i = 1; i <= p; i++)
  {
    int n;
    cin >> n;
    // cout<<count(n);
    // cout<<reverse(n);
    // cout<<pallindrome(n);
    // armstrong(n);
    // divisior(n);
    // prime(n);
    
  }
}







// #include <bits/stdc++.h>
// using namespace std;

// bool isArmstrong(int n) {
//     int original = n;
//     int digits = 0;

//     // Count digits
//     int temp = n;
//     while (temp > 0) {
//         digits++;
//         temp /= 10;
//     }

//     temp = n;
//     int sum = 0;

    // Calculate digit^digits manually
    // while (temp > 0) {
//         int digit = temp % 10;

//         int power = 1;
//         for (int i = 0; i < digits; i++) {
//             power *= digit;
//         }

//         sum += power;
//         temp /= 10;
//     }

//     return sum == original;
// }

// int main() {
//     int n;
//     cin >> n;

//     if (isArmstrong(n))
//         cout << "Armstrong";
//     else
//         cout << "Not Armstrong";
// }