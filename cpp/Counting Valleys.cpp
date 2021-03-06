#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

    int valley = 0, res = 0;
    for(int i = 0; i<s.length(); i++)
    {
        if (s[i] == 'D')
        {
            valley--;
            if(valley == -1) res++;
        }
        if (s[i] == 'U') valley++;
        
    }
    return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
