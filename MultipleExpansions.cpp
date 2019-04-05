#include <bits/stdc++.h>
#include <string.h>
using namespace std;
typedef long long int ll;

int main()
{
    char x;
    string t1, prev;
    string t2, prevt2;
    cin >> prev;
    x = getchar();
    while (x = getchar())
    {
        if (x == '\n' || x == '\0')
        {
            /* cout << prev << endl;
            cout << "1: " << t2 << endl;*/
            break;
        }
        else
            t2.push_back(x);
    }
    ll index = 1;
    ll count = 1;
    //ll ans = 0;
    //cout << "{";
    while (cin >> t1)
    {
        prevt2 = t2;
        t2.clear();
        x = getchar();
        while (x = getchar())
        {
            if (x == '\n' || x == '\0')
            {
                if (prev == t1)
                {
                    cout << index << ": " << prevt2 << endl;
                    count++;
                    index++;
                }
                else
                {
                    if (count > 1)
                    {
                        cout << index << ": " << prevt2 << endl;
                        index++;
                        //ans++;
                    }
                    //cout << endl;
                    prev = t1;
                    count = 1;
                    //cout << t1 << endl;
                    //cout << count << ": " << t2 << endl;
                }
                break;
            }
            else
                t2.push_back(x);
        }
    }
    //cout << "}";
    //cout << ans << endl;
    return 0;
}