#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



string dayOfProgrammer(int year) {
    string str1="12.09."; //Leap
    string str2="13.09."; //Non Leap
    ostringstream y;
    y<<year;

    if(year<1917)
    {
        if(year%4==0) return str1+y.str();
        else return str2+y.str();
    }
    else if(year==1918) return "26.09."+y.str();
    else 
    {
        if(year%4==0)
        {
            if(year%100==0)
            {
                if(year%400==0) return str1+y.str();
                else return str2+y.str();   
            }
            else return str1+y.str();
        }
        else return str2+y.str(); 
    }    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
