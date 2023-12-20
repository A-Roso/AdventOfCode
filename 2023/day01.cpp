#include "day01.h"

using std::string, std::vector;

// this solution was my first try, pretty straigthforward approach
int solve_day01_part01() {
    vector<string> lines = read_lines(constants::path_input_day01);
    int i;
    int sum = 0;

    for (string line: lines) {
        i = 0;
        while (isdigit((int)line[i]) == 0) { // isdigit returns 0 for non-digits, and another number for digits
            i++;
        }
        sum += (line[i] - '0') * 10; // first digit, so we need to multiply by 10; -'0' to get the number the char represents instead of the ASCII-value

        i = (int) line.length();
        while (isdigit((int)line[i]) == 0) {
            i--;
        }
        sum += line[i] - '0'; // second digit; -'0' to get the number the char represents instead of the ASCII-value
    }
    return sum;
}

// second try, based on the solution of a reddit user, but I shortened it more
// https://www.reddit.com/r/adventofcode/comments/1883ibu/comment/kca4gbi/?utm_source=share&utm_medium=web3x&utm_name=web3xcss&utm_term=1&utm_content=share_button
int solve_day01_part01_shorter() {
    vector<string> lines = read_lines(constants::path_input_day01);
    int sum = 0;
    for (string line: lines) {
        sum += 10 * (line[line.find_first_of("0123456789")] - '0');
        sum += line[line.find_last_of("0123456789")] - '0';
    }
    return sum;
}