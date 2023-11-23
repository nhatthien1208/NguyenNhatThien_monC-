#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string input; // To hold file input

    // Open the file for input.
    ifstream dataFile("names2.txt");

    // If the file was successfully opened, continue.
    if (dataFile.is_open())
    {
        // Read an item using $ as a delimiter.
        while (getline(dataFile, input, '$'))
        {
            // Display the last item read.
            cout << input << endl;
        }

        // Close the file.
        dataFile.close();
    }
    else
    {
        cout << "ERROR: Cannot open file.\n";
    }

    return 0;
}