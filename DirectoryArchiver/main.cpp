#include <iostream>
#include "Directory.h"

int main() {
    std::cout<<Directory().isDirectory("/mnt/D0D83B08D83AEBFA/repos")<<std::endl;
    std::cout<<Directory().isDirectory("/mnt/D0D83B08D83AEBFA/repos/Data-Structures")<<std::endl;
    std::cout<<Directory().isDirectory("/mnt/D0D83B08D83AEBFA/repos/Data-Structures/README.md")<<std::endl;

    return 0;
}
