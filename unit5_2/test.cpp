#include<iostream>
#include"client.h"
using namespace std;

int client::ClientNum = 0;
char client::SeverName = 'a';

int main(){
	client c1;
	c1.ChangeSeverName('a');
	cout << c1.getClientNum << endl;
	client c2;
	c2.ChangeSeverName('b');
	cout << c2.getClientNum << endl;
	return 0;
}