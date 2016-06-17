//============================================================================
// Name        : PROYECTO-PILAS-Y-COLAS.cpp
// Author      : Diego Ramirez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "pilas.h"
#include "colas.h"
using namespace std;

int main() {

//	ListaCola cl;
//
//	cl.TotalListaC();
//	cl.MostarC();
//	cl.PushC("D");
//	cl.PushC("i");
//	cl.PushC("e");
//	cl.PushC("g");
//	cl.PushC("o");
//	cl.TopC();
//	cl.MostarC();
//	cl.TotalListaC();
//	cl.PopC();
//	cl.PopC();
//	cl.TopC();
//	cl.MostarC();
//	cl.TotalListaC();


	ListaPila pl;

	pl.PushP("o");
	pl.PushP("g");
	pl.PushP("e");
	pl.PushP("i");
	pl.PushP("D");
	pl.mostrarP();
	pl.TopP();
	pl.totallistaP();
	pl.PopP();
	pl.PopP();
	pl.PopP();
	pl.mostrarP();
	pl.TopP();
	pl.totallistaP();

}
