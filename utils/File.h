#ifndef UNTITLED_FILE_H
#define UNTITLED_FILE_H

#include "FileInterface.h"
#include <netinet/in.h>
#include <inttypes.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fstream>

using namespace std;
namespace npl {

    class File: public FileInterface {
        fstream file;

    public:
        File(char* path);
        virtual ~File();
        //override from FileInterface
        virtual void close();
        virtual int read(char* buffer, int length);
        virtual int write(const string& msg);
    };
}
#endif
