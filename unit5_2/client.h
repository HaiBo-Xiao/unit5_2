#ifndef client_h_
#define client_h_

class client {
	static char SeverName;
	static int ClientNum;
public:
	static void ChangeSeverName(char name);
	static int getClientNum();

};

#endif