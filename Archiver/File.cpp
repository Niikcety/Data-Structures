//
// Created by User on 8/26/2020.
//

#include "File.h"

File::File(const std::string &name, const std::string &parentPath, const std::string &info) : Directory(name,
                                                                                                        parentPath),
                                                                                              info(info) {}

const std::string &File::getInfo() const {
    return info;
}

void File::setInfo(const std::string &info) {
    File::info = info;
}

const std::string File::getRepresentation() {
    return this->getName() + " " + this->getParentPath() + " " + this->getInfo();
}
