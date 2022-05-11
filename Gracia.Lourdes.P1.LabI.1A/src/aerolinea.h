/*
 * aerolinea.h
 *
 *  Created on: 11 may. 2022
 *      Author: reyna
 */

#ifndef AEROLINEA_H_
#define AEROLINEA_H_

typedef struct{
    int id;
    char descripcion[20];
}eAerolinea;
#endif /* AEROLINEA_H_ */

int buscarAerolinea(eAerolinea aerolinea[], int tam, int id, int* pIndice);
int validarAerolinea(eAerolinea aerolinea[], int tam, int id);
int cargarDescripcionAerolinea(eAerolinea aerolinea[], int tam, int id, char descripcion[]);
int listarAerolineas(eAerolinea aerolineas[], int tam);
