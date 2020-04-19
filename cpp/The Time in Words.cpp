#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {

    const string X[] = { "", "one ", "two ", "three ", "four ", "five ",
                    "six ", "seven ", "eight ", "nine ", "ten ", "eleven ",
                    "twelve ", "thirteen ", "fourteen ", "quarter ",
                    "sixteen ", "seventeen ", "eighteen ", "nineteen " };

    const string Y[] = { "", "", "twenty "};

    if(m>30)
    {
        m=60-m;
        if(m==15)
        {
            return X[15]+"to "+X[(h+1)%12];
        }
        if(m>19)
        {
            int temp = m%10;
            m=m/10;
            return Y[m]+X[temp]+"minutes to "+X[(h+1)%12];
        }
        if(m==1) return X[m]+"minute to "+X[(h+1)%12];
        return X[m]+"minutes to "+X[(h+1)%12];
    }
    else
    {
        if(m==30) return "half past "+X[h%12];
        if(m==0) return X[h]+"o' clock";
        else
        {
            if(m==15)
            {
                return X[15]+"past "+X[(h)%12];
            }
            if(m>19)
            {
                int temp = m%10;
                m=m/10;
                return Y[m]+X[temp]+"minutes past "+X[h%12];
            }
            if(m==1) return X[m]+"minute past "+X[h%12];
            return X[m]+"minutes past "+X[h%12];
        }
    }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}

