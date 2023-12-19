#include <iostream>
#include "utils.h"
#include "constants.h"


int main() {
    std::string path_input_day01;
    for (std::string s: read_lines(constants::path_input_day01)) {
        std::cout << s << std::endl;
    }
    return 0;
}
