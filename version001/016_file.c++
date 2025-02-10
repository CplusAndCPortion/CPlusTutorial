#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const string lx_filename = "016_filename.txt";

/*
ofstream--Creates and writes to files
ifstream--Reads from files
fstream---A combination of ofstream and ifstream: creates, reads, and writes to files
*/

void create_and_open_file();

void read_file();

int main() {
    create_and_open_file();
    read_file();
    return 0;
}

void create_and_open_file() {
    // Create and open a text file
    ofstream MyFile(lx_filename);

    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough! 0909-2024-12-09";

    // Close the file
    MyFile.close();
}

void read_file() {
    // Create a text string, which is used to output the text file
    string myText;
    // Read from the text file
    ifstream MyReadFile(lx_filename);

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
    // Output the text from the file
    cout << myText;
    }

    // Close the file
    MyReadFile.close();
}
