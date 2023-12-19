#include "utils.h"

using std::string, std::getline, std::vector, std::ifstream;

vector<string> read_lines(string filename) {
    string line;
    vector<string> result;

    ifstream myfile (filename);
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            result.push_back(line);
        }
        myfile.close();
        return result;
    } else std::cout << "Unable to open file";
}