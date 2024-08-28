#include <iostream>
#include <string>
#include <vector>
#include <fstream>


void read_image(std::string filename) {
    std::ifstream fs;
    fs.open(filename, std::ios::in | std::ios::binary);
}

int main() {
    std::string file = "/home/zuza/Projects/picture_steganography/test-bit.bmp";
    read_image(file);
    return 0;
}
