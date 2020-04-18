#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int liked = 1;
    int mod = 0;
    int people = 5;
    int reach = 0;
    for(int i = 0; i<n; i++)
    {
        mod = people/2;
        people = mod*3;
        reach+= mod;
    }
    return reach;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
