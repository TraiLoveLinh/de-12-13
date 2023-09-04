#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    ifstream fileI("XE.INP");
    int n;
    fileI>>n;
    vector<int> car(n);
    vector<int> no;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        fileI>>car[i];
        sum+=car[i];
        if (car[i]>20)
            no.push_back(i+1); 
    }
    fileI.close();
    ofstream fileO1("CAN.OUT");
    fileO1<<sum;
    fileO1.close();
    ofstream fileO2("HUY.OUT");
    if (no.empty())
        fileO2<<0;
    else
    {
        for(auto x=no.begin(); x!=no.end();x++){
            fileO2<<*x<<endl;
        }
    }
    fileO2.close();
    return 0;
}