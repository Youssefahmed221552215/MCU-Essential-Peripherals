/*
 * Utils.h
 *
 *  Created on: ٢٣‏/٠٨‏/٢٠٢٤
 *      Author: pc
 */

#ifndef UTILS_H_
#define UTILS_H_
#define setbit(portX,bit) (portX|=(1<<bit))
#define resetbit(portX,bit) (portX&=~(1<<bit))
#define readbit(portX,bit) ((portX>>bit)&1)
#define togglebit(portX,bit) (portX^=(1<<bit))



#endif /* UTILS_H_ */
