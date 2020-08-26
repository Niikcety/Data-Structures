//
// Created by nikkie on 26.08.20 г..
//

#include <sys/stat.h>
#include "Directory.h"

const std::string &Directory::getName() const {
    return name;
}

void Directory::setName(const std::string &name) {
    this->name = name;
}

const std::string &Directory::getParentPath() const {
    return parentPath;
}

void Directory::setParentPath(const std::string &parentPath) {
    this->parentPath = parentPath;
}

Directory::Directory(const std::string &name, const std::string &parentPath) : name(name), parentPath(parentPath) {
}

int Directory::isDirectory(const char* directoryPath) {
    struct stat statbuf;
    if (stat(directoryPath, &statbuf) != 0)
        return 0;
    return S_ISDIR(statbuf.st_mode);
}

Directory::Directory(){
}
