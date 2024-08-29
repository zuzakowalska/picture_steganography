#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "steganography.h"

int main() {
    std::string file = "/home/zuza/Projects/picture_steganography/test-bit.bmp";
    steganography::read_image(file, "test");
    return 0;
}
