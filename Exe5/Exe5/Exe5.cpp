// Exe5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<winsock2.h>
//Winsock
#pragma comment(lib,"ws2_32.lib")  



int main(int argc, char *argv[])
{	
	int aux = 0;
	WSADATA wsa;
	SOCKET s;
	//inicializando o winsock
	printf("\nInicializando Winsock...");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf("Falhou. Erro Codigo : %d", WSAGetLastError());
		return 1;
	}

	printf("Inicializado.\n");


	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Não foi possível criar socket : %d", WSAGetLastError());
	}

	printf("Socket criado.\n");
	

	scanf("%s", aux);

	return 0;
}
