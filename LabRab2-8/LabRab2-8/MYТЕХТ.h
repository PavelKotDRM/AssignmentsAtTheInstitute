#pragma once
#include "DRAIV.h"
class MYÒÅÕÒ
{
	DRAIV redact;
	std::string text = "Class to represent individual threads of execution.\nA thread of execution is a sequence of instructions that can be executed concurrently with other such sequences in multithreading environments, while sharing a same address space. \nAn initialized thread object represents an active thread of execution; Such a thread object is joinable, and has a unique thread id. \nA default - constructed(non - initialized) thread object is not joinable, and its thread id is common for all non - joinable threads. \nA joinable thread becomes not joinable if moved from, or if either join or detach are called on them.";
	//Êîíòåéíåğ òåêñòà
public:
	MYÒÅÕÒ();
	~MYÒÅÕÒ();
	

};

