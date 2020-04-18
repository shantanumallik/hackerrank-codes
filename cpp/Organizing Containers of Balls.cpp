#include <bits/stdc++.h>

using namespace std;

// Complete the organizingContainers function below.
string organizingContainers(vector<vector<int>> container, int n) {
    set<int>a;
    set<int>b;
    int col_sum = 0, row_sum = 0;
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            col_sum+=container[j][i];
            row_sum+=container[i][j];
        }
        a.insert(col_sum);
        b.insert(row_sum);
        col_sum = 0;
        row_sum = 0;

    }
    if(a == b) return "Possible";
    return "Impossible";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> container(n);
        for (int i = 0; i < n; i++) {
            container[i].resize(n);

            for (int j = 0; j < n; j++) {
                cin >> container[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string result = organizingContainers(container, n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
