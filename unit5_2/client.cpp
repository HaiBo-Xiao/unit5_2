
#include "client.h"

void client::ChangeSeverName(char name) {
	client::SeverName = name;
	client::ClientNum++;

}
int client::getClientNum() {
	return client::ClientNum;
}