#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int t,cnt=0;
    int n1=n;
    while(n1!=0)
    {
        t=n1%10;
        if(t==0)
        {
            // continue;
        }
        else if(n%t==0)
        {
            cnt++;
        }
        n1=n1/10;
    }
    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
