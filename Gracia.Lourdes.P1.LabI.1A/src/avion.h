/*
 * avion.h
 *
 *  Created on: 11 may. 2022
 *      Author: reyna
 */

#ifndef AVION_H_
#define AVION_H_



#endif /* AVION_H_ */

typedef struct{
    int id;
    int idAerolinea;
    int idTipo;
    int capacidad;
    int isEmpty;
}eAvion;

int menu();
int menuModificarAvion();
int inicializarAvion(eAvion vec[], int tam);
int altaAvion(eAvion avion[], int tamav, eAerolinea aerolinea[], int tama, int* proximoIdAvion);
int bajaAvion(eAvion avion[], int tamav,eAerolinea aerolineas[], int tama);
int buscarVueloLibre(eAvion vec[], int tam, int* pIndex);
int modificarAvion(eAvion avion[], int tamav, eAerolinea aerolineas[], int tama);
int listarAviones(eAvion vec[], int tam, eAerolinea aerolinea[], int tama);
int buscarAvion(eAvion vec[], int tam, int id, int* pIndex);
int mostrarAvion(eAvion avion, eAerolinea aerolinea[], int tam);
int ordenarAvionPorAerolineaYCapacidad(eAvion vec[], int tam);
