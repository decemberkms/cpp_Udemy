#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{   
    std::ifstream in_file;
    std::string line;
    int num;
    double total;


    in_file.open("text.txt");
    if (!in_file.is_open())     // if (!in_file)
    {
        std::cerr << "Problem opening files" << std::endl;
        std::exit(1);
    }

    while(!in_file.eof()){
        in_file >> line >> num >> total;

        std::cout << std::setw(10) << std::left << line
        << std::setw(10) << num
        << std::setw(10) << total
        << std::endl;

    }





    in_file.close();

    return 0;
}