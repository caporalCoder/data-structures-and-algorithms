#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <list>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <iostream>
#include <fstream>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(), c.end()
#define mp(x, y) make_pair(x, y)
#define mem(a, val) memset(a, val, sizeof(a))
#define eb emplace_back

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    if (n == 1 && k > 0)
    {
        cout << "9" << endl;
        return 0;
    }

    string tmpStr = str;

    ll half = n / 2;
    ll i = half - 1, j = (n & 1) ? half + 1 : half;

    while (i >= 0 && k > 0)
    {
        if (tmpStr[i] > tmpStr[j])
        {
            tmpStr[j] = tmpStr[i];
            --k;
        }
        else if (tmpStr[j] > tmpStr[i])
        {
            tmpStr[i] = tmpStr[j];
            --k;
        }
        --i;
        ++j;
    }

    if (k > 0)
    {
        for (ll m = 0; m <= half && k > 0; ++m)
        {
            if (((tmpStr[m] != str[m]) || (tmpStr[n - m - 1] != str[n - m - 1])) && (tmpStr[m] < '9'))
            {
                if (k >= 1)
                {
                    tmpStr[m] = '9';
                    tmpStr[n - m - 1] = '9';
                    --k;
                }
            }
            else if ((tmpStr[m] == str[m]) && (tmpStr[n - m - 1] == str[n - m - 1]) && (tmpStr[m] < '9'))
            {
                if (k >= 2)
                {
                    tmpStr[m] = '9';
                    tmpStr[n - m - 1] = '9';
                    k -= 2;
                }
            }
        }
        if (k > 0 && (n & 1))
            tmpStr[half] = '9';
        if (tmpStr == string(tmpStr.rbegin(), tmpStr.rend()))
        {
            cout << tmpStr << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    else
    {
        if (tmpStr == string(tmpStr.rbegin(), tmpStr.rend()))
        {
            cout << tmpStr << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
