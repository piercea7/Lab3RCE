// LAB3RCE.cpp : Defines the entry point for the console application.
// Key Generator for Lab3 does passwords 1-4 Pass:5 is an adapter address for ethernet but could not figure out how to get it inot key gen


#include "stdafx.h"
#include "windows.h"
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
//#include<WinSock2.h>
//#include<IPHlpApi.h>
void Pass1() {
	char* str1 = "ABCDEF123456";
	int str1len = strlen(str1);
	int i = 0;
	int charAt = 0;
	printf("Pass1: ");
	while (i < str1len) {
		charAt = (int)str1[i];
		charAt = charAt + 5;
		printf("%c", (char)charAt);
		i++;
	}
	printf("\n");
}
void Pass2() {
	char* str2 = "ARCHIEMILLER";
	int str1len = strlen(str2);
	int i = 0;
	int charAt = 0;
	printf("Pass2: ");
	while (i < str1len) {
		charAt = (int)str2[i];
		charAt = charAt - i;
		printf("%c", (char)charAt);
		i++;
	}
	printf("\n");
}
void Pass3() {
	char* str3 = "GO FLYERS!!!";
	int str1len = strlen(str3);
	int i = 0;
	int charAt = 0;
	char xorval = 0;
	printf("Pass3: ");
	while (i < str1len) {
		charAt = (int)str3[i];
		xorval = charAt ^ i;
		printf("%c", (char)charAt);
		i++;
	}
	printf("\n");
}
void Pass4() {
	DWORD disknum;
	GetVolumeInformation(NULL, NULL, NULL, &disknum, NULL, NULL, NULL, NULL);
	printf("Pass4: %d", disknum);
}
void Pass5() {
	/*PIP_ADAPTER_ADDRESSES pAddress = NULL;
	DWORD buf = 376;
	DWORD val = GetAdaptersAddresses(NULL, NULL, NULL, pAddress, &buf);
	printf("%s", pAddress);*/
	//printf("%s", buf);
	//printf("%s", adpt);
}
int main()
{
	Pass1();
	Pass2();
	Pass3();
	Pass4();
	Pass5();// could not get working think it is proper identifier not sure how to use though since 
	while (1);
	return 0;
}


