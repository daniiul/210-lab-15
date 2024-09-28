#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Movie
{
private:
    string movieName;
    string screenWriter;
    string year;

public:
    void setmovieName(string n) { movieName = n;}
    string getmovieName() { return movieName;}
    void setscreenWriter(string w) { screenWriter = w;}
    string getscreenWriter() { return screenWriter;}
    void setYear(string y) { year = y;}
    string getYear() { return year; }

    void print() const
    {
        cout << right << setw(12) << "Movie: " << movieName << endl;
        cout << right << setw(15) << "Year: " << year << endl;
        cout << right << setw(24) << "Screen Writer: " << screenWriter << endl;
        cout << endl;
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

    while(getline(inputFile, temp))
    {
        Movie a;
        a.setmovieName(temp);
        getline(inputFile, temp);
        a.setYear(temp);
        getline(inputFile, temp);
        a.setscreenWriter(temp);

        movies.push_back(a);
    }

    for (auto i : movies)
        i.print();

    return 0;

}
