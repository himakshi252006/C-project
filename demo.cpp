#include <iostream>
#include <fstream>
using namespace std;
void filewriting()
{
    int i;
    char n[100];
    ofstream fout("names.txt");
    for (i = 1; i <= 5; i++)
    {
        cout << "Enter " << i << " name:";
        cin >> n;
        fout << n << "\n";
    }
    fout.close();
};
void filereading()
{
    int i;
    char n[100];
    ifstream fin("names.txt");
    for (i = 1; i <= 5; i++)
    {
        fin >> n;
        cout << n << "\n";
    }
    fin.close();
};
main()
{
    filewriting();
    filereading();
}
