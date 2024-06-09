#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string s;
    string smax;
    int imax = 0;
    ifstream F1("F1.txt");
    ofstream F2("F2.txt");
    while (getline(F1, s))
    {
        int a_count = 0;
        bool f = true;
        if (s[s.size()-1] == 97)
        {
            F2 << s << endl;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 97)
            {
                a_count++;
            }
        }
        if (a_count > imax && s[s.size()-1] == 97)
        {
            smax = s;
            imax = a_count;
        }
    }
    std::cout << smax;
}