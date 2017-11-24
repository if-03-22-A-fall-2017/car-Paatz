/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2AHIF
* ---------------------------------------------------------
* Exercise Number: 5
* Title:			car.h
* Author:			Patrick Spisak
* Due Date:		November 24 2017
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum Colro {RED , GREEN , BLUE , ORANGE , SILVER , BLACK};
enum CarType {FIAT_MULTIPLA , JEEP , AIXAM};

struct CarType {
char* type;
Color color;
int current_speed;
};



bool start(Car car);
void accelerate(Car car);
void brake(Car car);
int get_speed(Car car);
float get_filling_level(Car car);
void fill(Car car, float fuel_amount);
void stop(Car car);

#endif
