/*
 * colas.h
 *
 *  Created on: 10/06/2016
 *      Author: DIEGO
 */

#ifndef COLAS_H_
#define COLAS_H_
#include <iostream>
using namespace std;

struct ListaCola{


	struct NodoCola{

		char* letra;
		NodoCola *siguiente;

	};

	NodoCola *top=NULL;
	NodoCola *fin=NULL;
	NodoCola *aux=NULL;

	void PushC(char* c){

		if(top==NULL){

			top = new (NodoCola);
			top->letra= c;
			fin = top;
		}else{

			aux= new (NodoCola);
			aux->letra=c;
			fin->siguiente = aux;
			fin = aux;
		}
		fin->siguiente=NULL;
	}

	void PopC(){

		if(top==NULL){
		cout<<"La estructura esta vacia"<<endl;
		}else{
		aux = top;
		top= top->siguiente;
		delete (aux);
		}
	}

	void MostarC (){
		if(top==NULL){

			cout<<"la estructura esta vacia"<<endl;

		}else{
		aux = top ;
			cout <<" Su Lista es: "<<endl<<endl;
		while (aux != NULL){

			cout<<aux->letra<<endl;
			aux = aux->siguiente;
		}
		}
	}

	void TopC(){

		if(top == NULL){
			cout<<"La lista esta vacia"<<endl;
		}else{
			cout<<"SU TOPE DE COLA ES:"<<endl;

			cout<<top->letra<<endl;
		}

	}

	void TotalListaC(){

		if(top==NULL){

			cout<<"Su lista esta vacia"<<endl;
		}else{
			aux = top;
			int x;
			x = 0;
			while (aux != 0){
				x = x+1;
				aux = aux->siguiente;
			}
			cout <<"el total es:"<<x<<endl;
		}

	}


};




#endif /* COLAS_H_ */
