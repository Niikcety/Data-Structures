#include <iostream>
#include "CircularSingleLinkedList.h"
#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

int isDirectory(const char *path) {
    struct stat statbuf;
    if (stat(path, &statbuf) != 0)
        return 0;
    return S_ISDIR(statbuf.st_mode);
}

static void list_dir(const char *path)
{
    struct dirent *entry;
    DIR *dir = opendir(path);
    if (dir == NULL) {
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n",entry->d_name);
    }

    closedir(dir);
}
std::string getTheSmallestWord(CircularLinkedList &circularLinkedList){
    std::string currentMin = circularLinkedList.head->word;
    Node* ptr = circularLinkedList.head;

    while(ptr->next != circularLinkedList.head){
        if(currentMin > ptr->word){
            currentMin = ptr->word;
        }
        ptr = ptr->next;
    }

    return currentMin;
}

int main() {
    /*CircularLinkedList circularLinkedList;

    std::string a = "ogshko";
*/
/*
    std::cout << a.back() << std::endl;
    std::cout << a[0] << std::endl;
    std::cout << (a[0] == a.back()) << std::endl;
*/
  /*  circularLinkedList.addNode("Street");
    circularLinkedList.addNode("Taxi");
    circularLinkedList.addNode("Ink");
    circularLinkedList.addNode("Dog");
    circularLinkedList.addNode("Smile");
    circularLinkedList.addNode("Eat");
    circularLinkedList.addNode("Tall");
    circularLinkedList.addNode("Pass");
*/
    //std::cout << (tolower(a[0])) << std::endl;

    /*std::cout << getTheSmallestWord(circularLinkedList) << std::endl;
*/
   /* int ctr = 0;
    Node* ptr = circularLinkedList.head;
    while(true){
        if(ptr->next == circularLinkedList.head ){
            ctr = 1;
        }
        if(tolower(ptr->word.back() == tolower(ptr->next->word[0]))){
            std::cout<< ptr->word << std::endl;
        }else{
            if(ctr == 1){
                break;
            }
        }
        ptr = ptr->next;

    }
*/

    //list_dir("/mnt/D0D83B08D83AEBFA/University/Statistika");
    std::cout << isDirectory("/mnt/D0D83B08D83AEBFA/University/Statistika/Theory.pdf");
    return 0;
}
