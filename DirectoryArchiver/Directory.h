//
// Created by nikkie on 26.08.20 г..
//

#ifndef DIRECTORYARCHIVER_DIRECTORY_H
#define DIRECTORYARCHIVER_DIRECTORY_H


#include <string>

class Directory {
public:
    Directory();
    Directory(const std::string &name, const std::string &parentPath);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getParentPath() const;

    void setParentPath(const std::string &parentPath);

    static int isDirectory(const char* directoryPath);
private:
    std::string name;
    std::string parentPath;
};


#endif //DIRECTORYARCHIVER_DIRECTORY_H
