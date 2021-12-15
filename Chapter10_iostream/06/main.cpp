#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{   


    std::fstream in_file {"score.txt", std::ios::in};
    std::vector<std::string> score_vector;

    if(!in_file){
        std::cerr << "Error opening file" << std::endl;
    }
    else{
        std::string words;
        // in_file >> words;
        // std::cout << words << std::endl;
        while(in_file >> words){
        score_vector.push_back(words);
        }
    }
    in_file.close();
    
    for (auto ele:score_vector)
        cout << ele << endl;


    
    cout <<  std::left 
        << std::setw(20) << "Student"  << "Score" << std::endl;
    cout << "--------------------------" << endl;
    for (int i = 0; i < score_vector.size(); ++i)
    {
        if(i%2 != 0)
        {
            cout << score_vector[i] << endl;
        }
    }

    

    return 0;
}