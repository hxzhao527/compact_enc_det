#include <iostream>
#include <fstream>

#include "compact_enc_det/compact_enc_det.h"

int main(){
    std::ifstream file("data/gb2312.txt");
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    file.close();

    bool is_reliable;
    int bytes_consumed;

    Encoding encoding = CompactEncDet::DetectEncoding(
        content.c_str(), content.length(),
        nullptr, nullptr, nullptr,
        UNKNOWN_ENCODING,
        UNKNOWN_LANGUAGE,
        CompactEncDet::WEB_CORPUS,
        false,
        &bytes_consumed,
        &is_reliable);

    std::cout << "Encoding: " << encoding << " Name: " << EncodingName(encoding) << std::endl;

    return 0;
}