#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char const *argv[])
{
    std::ifstream mm_file("mm_example.mm");
    if (!mm_file.is_open()) {
        std::exit(EXIT_FAILURE);
    }

    int n_rows, n_columns, n_non_zero;
    bool header = true;
    std::string line;
    while (std::getline(mm_file, line)) { 
        // Skip comment lines
        if (line[0] == '%') {
            continue;
        }


        std::istringstream iss(line);
        iss >> n_rows >> n_columns >> n_non_zero;
        header = false;
        
        break;
    }

    std::cout << "N_ROWS: " <<  n_rows << ", N_COLUMNS: " << n_columns << ", N_NON_ZERO: " << n_non_zero << std::endl;
}
