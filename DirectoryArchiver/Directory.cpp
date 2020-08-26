//
// Created by nikkie on 26.08.20 г..
//

#include "Directory.h"

const std::string &Directory::getName() const {
    return name;
}

void Directory::setName(const std::string &name) {
    Directory::name = name;
}

const std::string &Directory::getParentPath() const {
    return parentPath;
}

void Directory::setParentPath(const std::string &parentPath) {
    Directory::parentPath = parentPath;
}

Directory::Directory(const std::string &name, const std::string &parentPath) : name(name), parentPath(parentPath) {
}
