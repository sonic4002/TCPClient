
#include <pthread.h>
#include "UDPSocket.h"
#include "MThread.h"

using namespace std;
namespace npl{


class UDPMessenger: public MThread{
	static const int MSNGR_PORT = 3344;
	UDPSocket* udpSocket;
	bool runing;

public:
	UDPMessenger();

	/**
	 * sends the given message to the given peer specified by IP
	 */
	void sendTo(const string& msg,const string& ip);

	/**
	 * reply to an incoming message, this method will send the given message
	 * the peer from which the last message was received.
	 */
	void reply(const string& msg);

	/**
	 * close the messenger and all related objects (socket)
	 */
	void close();

	/**
	 * This method runs in a separate thread, it reads the incoming messages
	 * from the socket and prints the content on the terminal.
	 * The thread should exist when the socket is closed
	 */
	void run();
};
}
