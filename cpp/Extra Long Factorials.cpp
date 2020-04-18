#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
    deque<int> d;
    d[0]=1;
    int size_d = 1;
    int carry = 0;
    for(int i = 2; i<=n; i++)
    {
        for(int j = size_d-1; j>=0; j--)
        {
            //cout<<"j now: "<<j<<endl;
            //cout<<"d[j]: "<<d[j]<<endl;
            int product = d[j]*i + carry;
            //cout<<"product after multiplication: "<<product<<endl;
            d[j] = product%10;
            //cout<<"d[j] after multiplication: "<<d[j]<<endl;
            //cout<<"insert val 1: "<<d[j]<<endl;
            carry = product/10;
            //cout<<"carry now: "<<carry<<endl;
        }
        while(carry)
        {
            d.push_front(carry%10);
            //cout<<"pushed carry: "<<carry%10<<endl;
            carry/=10;
            size_d++;
            //cout<<"size_d: "<<size_d<<endl;
        }
        //cout<<"after multiplying with "<<i<<": "<<endl;
        //cout<<"size now: "<<size_d<<endl;
        //for(int k = 0; k<size_d; k++) cout<<d[k]<<" ";
        //cout<<endl;
        //cout<<"End ITERATION"<<endl;

    }

    for(int k = 0; k<size_d; k++) cout<<d[k];
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
