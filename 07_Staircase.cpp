#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int temp=n-1;
    char c=' ';
    for(int i=0;i<n;i++)
    {
        cout<<string(temp,c);
        for(int j=0;j<i+1;j++)
        {
            cout<<'#';
            
        }
        cout<<endl;
        temp-=1;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
