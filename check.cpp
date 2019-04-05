#include <bits/stdc++.h>
#include <string.h>
using namespace std;
typedef long long int ll;
#define rep(i, l, r) for (ll i = (l); i < (r); ++i)

int main()
{
    char x;
    string t1, prev;
    //char prev[1000];
    string t2;
    cin >> prev;
    t2.clear();
    x = getchar();
    while (x = getchar())
    {
        if (x == '\n' || x == '\0')
        {
            cout << prev << endl;
            cout << "1: " << t2 << endl;
            break;
        }
        else
            t2.push_back(x);
    }
    ll count = 1;
    ll ans =0;
    while (cin >> t1)
    {
        t2.clear();
        x = getchar();
        while (x = getchar())
        {
            if (x == '\n' || x == '\0')
            {
                if (prev == t1)
                {
                    count++;
                    cout << count << ": " << t2 << endl;
                }
                else
                {
                    if (count>1){
                        ans++;
                    }
                    cout << endl;
                    prev = t1;
                    count = 1;
                    cout << t1 << endl;
                    cout << count << ": " << t2 << endl;
                }
                break;
            }
            else
                t2.push_back(x);
        }
    }
    cout << ans << endl;
    return 0;
}