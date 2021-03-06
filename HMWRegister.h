/*
 * HMWRegister.h
 *
 *  Created on: 26.05.2014
 *      Author: thorsten
 */

#ifndef HMWREGISTER_H_
#define HMWREGISTER_H_

// Konfigurationsdaten als C++-Struktur



// Anzahl Tastereingaenge
#define HMW_CONFIG_NUM_KEYS 8

// Taster
struct hmw_config_key {
	byte input_locked;   		// 0x07    0=LOCKED, 1=UNLOCKED
	byte inverted;          // 0x08
	byte pullup;            // 0x09    0=aus, 1=ein
	byte long_press_time;   // 0x0A    0x40 = 1 Sec
};





struct hmw_config {
	byte logging_time;     // 0x01
	long central_address;  // 0x02 - 0x05
	byte direct_link_deactivate:1;   // 0x06:0
	byte                       :7;   // 0x06:1-7
    hmw_config_key keys[HMW_CONFIG_NUM_KEYS];

};


#endif /* HMWREGISTER_H_ */

