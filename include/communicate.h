#ifndef COMMNICATE_H
#define COMMNICATE_H
#include<string>
#define SEND 1
#define LOGOUT 2
using namespace std;

class symbol_table{
	private:
		unsigned int send;
		unsigned int logout;
		unsigned int key;
	public:
		static inline int c = 0;
		~symbol_table();
		symbol_table(){
			send = c + SEND;
			logout = c + LOGOUT;
			key = c++;
		}
		symbol_table(unsigned int send, unsigned int logout):send(send), logout(logout){
		key = send - SEND;
		};
};

#endif
