#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()  
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    ifstream fileI("PWORD.INP");
    fileI>>s;
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum += s[i]-'0';
        }
    }
    fileI.close();
    ofstream fileO("PWORD.OUT");
    fileO<<sum;
    fileO.close();

    return 0;
}