#define _CRT_SECURE_NO_WARNINGS // for visual studio user
#include <stdio.h>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;

void SetConsole();
void DeveloperMode();
void gotoxy(int x, int y);
void DrawBackground();

int consoleTextColor = 11;

//0 - horizontal, 1 - vertical
int consoleSize[2] = {130, 50};

int main(void)
{
	//Game Setup
	SetConsole(); 
	DeveloperMode();
	
	return 0;
}

void SetConsole()
{
	char consoleSizeText[50] = "mode con cols=80 lines=30";
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), consoleTextColor);
	
	sprintf(consoleSizeText, "mode con cols=%d lines=%d", consoleSize[0], consoleSize[1]);
	system(consoleSizeText);
	
	system("title Maze War copy.ver");
}

void DeveloperMode()
{
	puts("----------------------------------------------------------------");
	puts("[if you anything know, input help]");
	puts("----------------------------------------------------------------");
	printf(">");
	
	char input[50];
	scanf("%s", input);
	
	if(strcmp(input, "help") == 0)
	{
		puts("----------------------------------------------------------------");
		puts("color - show color value");
		puts("option - change console option");
		puts("information - show the game information");
		puts("clear - clear console log");
		puts("shutdown - shutdown developer mode");
		DeveloperMode();
	}
	
	else if(strcmp(input, "color") == 0)
	{
		puts("----------------------------------------------------------------");
		for(int i = 0; i < 16; i++)
		{		
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
			printf("Hello World!! -  %d\n", i);
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), consoleTextColor);
		DeveloperMode();
	}
	
	else if(strcmp(input, "option") == 0)
	{
		puts("----------------------------------------------------------------");
		puts("it's now develop yet");
		DeveloperMode();
	}
	
	else if(strcmp(input, "information") == 0)
	{
		puts("----------------------------------------------------------------");
		puts("it's now develop yet");
		DeveloperMode();	
	}
	
	else if(strcmp(input, "option") == 0)
	{
		puts("----------------------------------------------------------------");
		puts("it's now develop yet");
		DeveloperMode();
	}
	
	else if(strcmp(input, "clear") == 0)
	{
		system("cls");
		puts("----------------------------------------------------------------");
		puts("cleaned");
		DeveloperMode();
	}
	
	else if(strcmp(input, "shutdown") == 0)
	{
		puts("----------------------------------------------------------------");
		puts("it's now develop yet");
		DeveloperMode();
	}
	
	else if(strcmp(input, "hello") == 0)
	{
		puts("----------------------------------------------------------------");
		puts("Hi there~");
		DeveloperMode();
	}
	
	else
	{
		puts("----------------------------------------------------------------");
		puts("!!Please enter a valid value!!");
		DeveloperMode();
	}
}

void gotoxy(int x, int y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
