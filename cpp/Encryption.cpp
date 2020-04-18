#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
    vector<char>v;
    string word = "";
    int n = s.length();
    for(int i = 0; i<n; i++)
    {
        if(s[i]!= ' ') v.push_back(s[i]);
    }
    int vsize = v.size();
    double root = sqrt(vsize);
    //cout<<"root: "<<root<<endl;
    int row = floor(root);
    int col = ceil(root);
    
    while(row*col < vsize)
    {
        if(row<col)row++;
        else col++;
    }
    //cout<<"row and col: "<<row<<" "<<col<<endl;
    for(int i = 0; i<col; i++)
    {
        for(int j = i; j<vsize; )
        {
            word+=v[j];
            j+=col;
        }
        word+=" ";
    }
    return word;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
