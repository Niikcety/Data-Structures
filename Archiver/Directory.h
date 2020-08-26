//
// Created by User on 8/26/2020.
//

#ifndef ARCHIVER_DIRECTORY_H
#define ARCHIVER_DIRECTORY_H

#include <string>

class Directory {
public:
    Directory();
    Directory(const std::string &name, const std::string &parentPath);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getParentPath() const;

    void setParentPath(const std::string &parentPath);

    virtual const std::string getRepresentation();

    static int isDirectory(const char* directoryPath);
private:
    std::string name;
    std::string parentPath;
};


#endif //ARCHIVER_DIRECTORY_H
