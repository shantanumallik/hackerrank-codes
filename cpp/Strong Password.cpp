#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    //if(n<6) return (6-n);
    int count = 0;
    string numbers = "0123456789", lower_case = "abcdefghijklmnopqrstuvwxyz", upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", special_characters = "!@#$%^&*()-+";
    int  num = password.find_first_of(numbers);
    int lcase = password.find_first_of(lower_case);
    int ucase = password.find_first_of(upper_case);
    int sc = password.find_first_of(special_characters);
    if(num == -1) count++;
    if(lcase == -1) count++;
    if(ucase == -1) count++;
    if(sc == -1) count++;
    if ((6-n)>count) return 6-n;
    return count;
    //cout<<num<<" "<<lcase<<" "<<ucase<<" "<<sc<<endl;
    //return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

