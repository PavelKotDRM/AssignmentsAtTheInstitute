#pragma once
#include <iostream>
#include <windows.h>
#include <thread>
#include <conio.h>
class DRAIV
{
	int colour = 0x0001;
	HANDLE out;
	COORD curs;
public:
	DRAIV();
	~DRAIV();
};

