#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

int main(){
    std::ifstream in_file {"text.txt"};
    std::ofstream out_file {"copy.txt"}; // truncate
    // std::ofstream out_file {"copy.txt", std::ios::app}; // append
    

    if (!in_file){
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    if (!out_file){
        std::cerr << "File create error" << std::endl;
        return 1;
    }

    // char c;
    // while (in_file.get(c))
    //     out_file.put(c);

    std::string line;
    int line_num {1};
    while(std::getline(in_file, line)) {
        if (line.size() > 1){
            out_file << std::setw(7) << std::left <<line_num << " " << line << std::endl;
            ++line_num;
        }
        else {
            cout << "No line: " << line.c_str() << endl;
        }
    }

    in_file.close();
    out_file.close();


    return 0;
}