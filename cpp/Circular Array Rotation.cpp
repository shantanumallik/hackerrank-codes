#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the circularArrayRotation function below.
vector<long long> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<long long>result;
    int size = a.size();
    for(int x:queries)
    {
        int index = (x-(k%size));

        if(index<0){

            result.push_back(a[size-1 + index + 1]);
            //continue;
        }
        else result.push_back(a[index]);
    }
    return result;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nkq_temp;
    getline(cin, nkq_temp);

    vector<string> nkq = split_string(nkq_temp);

    int n = stoi(nkq[0]);

    int k = stoi(nkq[1]);

    int q = stoi(nkq[2]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    vector<int> queries(q);

    for (int i = 0; i < q; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<long long> result = circularArrayRotation(a, k, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
