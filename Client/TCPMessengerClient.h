//
// Created by omrih on 21-Jun-17.
//

#ifndef UNTITLED_TCPMESSENGERCLIENT_H
#define UNTITLED_TCPMESSENGERCLIENT_H


#include <iostream>
#include <string.h>
#include <pthread.h>
#include "../utils/MThread.h"
#include "../utils/TCPSocket.h"
#include <unistd.h>
#include "../utils/TCPMessengerProtocol.h"


using namespace std;

namespace npl {

    class TCPMessengerClient :public MThread{
        TCPSocket* sock;
        bool stopRun ;
    public:
        TCPMessengerClient();
        void connect(const string& ip);
        void openSession(const string& ipAndPort);
        void send(const string msg);
        void closeSession();
        void disconnect();

//	void sendToServer(int command, const string& data,TCPSocket* sock);
//	void readFromServer(int& command, string& data,TCPSocket* sock);
        void run();

        virtual ~TCPMessengerClient();
    };

}

#endif //UNTITLED_TCPMESSENGERCLIENT_H