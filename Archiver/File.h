//
// Created by User on 8/26/2020.
//

#ifndef ARCHIVER_FILE_H
#define ARCHIVER_FILE_H


#include "Directory.h"

class File : public Directory {
public:
    File(const std::string &name, const std::string &parentPath, const std::string &info);

    const std::string &getInfo() const;

    const std::string getRepresentation();

    void setInfo(const std::string &info);

private:
    std::string info;
};


#endif //ARCHIVER_FILE_H
