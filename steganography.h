//
// Created by zuza on 8/28/24.
//

#ifndef STEGANOGRAPHY_H
#define STEGANOGRAPHY_H


#include "bmp.h"

namespace steganography {
    void read_image(std::string &filename, std::string message) {
        std::ifstream fs;
        fs.open(filename, std::ios::in | std::ios::binary);

        // add error file not exist

        auto pixel_array_offset = bmp::get_pixel_array_offset(fs);
        auto width              = bmp::get_width(fs);
        auto height             = bmp::get_height(fs);
        auto bits_per_pixel     = bmp::get_bits_per_pixel(fs);

        // add error color depth

        auto pixels = bmp::read_image(pixel_array_offset, width, height, bits_per_pixel, fs);
        fs.close();

        bmp::encode_secret_message(pixels, message);

    }
}

#endif //STEGANOGRAPHY_H
