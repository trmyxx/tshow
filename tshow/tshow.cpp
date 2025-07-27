#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

int main(int argc, char* argv[])
{
    //analyzing argv[1] (help or smth else)
    if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {
        string path = "help.txt";
        ifstream fin;
        fin.open(path);

        //reading help file
        if (!fin.is_open()) {
            cout << "Something went wrong with help.txt, please check your file integrity\n";
        }
        else {
            string line = "";
            while (!fin.eof()) {
                line = "";
                getline(fin, line);
                cout << line << endl;
            }
        }
        fin.close();
        return 0;
    }

    //saving path from argv
    string path = argv[2];

    ifstream fin;
    fin.open(path);

    //reading file
    if (!fin.is_open()) {
        cout << "Incorrect file name\n";
    }
    else {
        string line = "";
        while (!fin.eof()) {
            line = "";
            getline(fin, line);
            cout << line << endl;
        }
    }
    fin.close();

    return 0;
}
