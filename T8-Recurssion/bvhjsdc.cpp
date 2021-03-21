#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int sumdigits(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10 + sumdigits(n/10));
    
}

// Complete the superDigit function below.
int superDigit(string n, int k) {
   int p = 0;
for (int i = 0; i < n.size(); i++) {
  p += (n[i] - 48) * pow(10, (n.size() - i - 1));
}

int j = sumdigits(p);
int l = j*k;
while(l>10)
{
     l = sumdigits(l);
    
     
}
return l;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    string n = nk[0];

    int k = stoi(nk[1]);

    int result = superDigit(n, k);

    fout << result << "\n";

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

