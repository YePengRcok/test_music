#include <iostream>
#include <graphics.h>
#include <stdio.h>
#include <MMSystem.h>
#pragma comment(lib,"winmm.lib")
#define COUNT 148

using namespace std;
int main(void) {
	char jile_name[128];
	IMAGE jile_image[COUNT];
	cout << "���ڼ���..." << endl;

	for(int i = 1; i <= COUNT; i++) {
		sprintf(jile_name, "E:\\�ͻ���.cpp\\�ͻ���.cpp\\images2\\_%04d_ͼ��-%d.jpg" , 148 - i, i);
		loadimage(&jile_image[i - 1], jile_name);
	}


	initgraph(800, 450);
	mciSendString(_T("play E:\\�ͻ���.cpp\\�ͻ���.cpp\\���־���.mp3 repeat"), 0, 0, 0);
	
	while(1) {
		for(int i = 0; i < COUNT; i++) {
			putimage(0, 0, &jile_image[i]);
			Sleep(70);
		}
	}

	system("pause");
	return 0;
}