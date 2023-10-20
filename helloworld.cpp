#include <iostream>
#include <fstream>
#include <string>

// global moment
std::string fileName;

// function to test opening pokemon file
// take user input to open file
// convert number to string in file open parameter
void func()
{
    while (1)
    {
        std::string myText;

        std::cout << "Which Pokemon file would you like to open (0001 - 1010): ";
        std::cin >> fileName;

        if (fileName == "0") { break; }

        std::ifstream myReadFile(fileName + ".txt");


        // if file does not exist, close program
        if(!myReadFile)
        {
            std::cout << "Pokemon doesn't exist (yet)";
        }

        // read information from file
        while (getline (myReadFile, myText))
        {
            std::cout << myText;
            
        }
        // good practice to close your files
        myReadFile.close();
        std::cout << "\n";
    }
}


int main()
{
    //std::cout << "Hello World!" << "\n";
    
    /*for (int i = 0; i < 10; ++i)
    {
        std::cout << i << "\n";
    }*/

    func();
    return 0;
}