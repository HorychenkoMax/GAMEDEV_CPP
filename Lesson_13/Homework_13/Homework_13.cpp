#include <iostream>
#include "DatabaseParser.h"

const std::string DATABASE_NAME = "Data.txt";

void print(std::vector<std::string> data) {
    for (int i = 0; i < data.size(); i++) {
        std::cout << data[i] << std::endl;
    }
}

int main()
{
    std::vector<std::string> data;
    getData(DATABASE_NAME, data);
    print(data);
}

