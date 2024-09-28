#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Movie
{
private:
    string movieName;
    string screenWriter;
    int year;

public:
    void setmovieName(string n) { movieName = n;}
    string getmovieName() { return movieName;}
    void setscreenWriter(string w) { screenWriter = w;}
    string getscreenWriter() { return screenWriter;}

    void print() const
    {
        cout << setw(W15) << "Movie: " << movieName << endl;
        cout << setw(W15) << "Year: " << year << endl;
        cout << setw(W15) << "Screen Writer: " << screenWriter << endl;
    }
};

int main()
{
    vector<Movie> movies;

    ifstream inputFile("input.txt");

    // if file doesn't open should print error and exits
    if(!inputFile.is_open())
    {
        cout << "Error! Can't open File!";
        return 0;
    }

    string temp;
    int i = 0;

    while(getline(cin, temp))
    {

    }


}
