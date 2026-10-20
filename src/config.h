// config.h – parametrii nodului de achiziție
#ifndef CONFIG_H
#define CONFIG_H
#define SENSOR_PIN A0 // intrarea analogică a senzorului
#define SAMPLE_PERIOD_MS 1000 // compromis: 1 s (consum redus, dinamică suficientă)
Comunicație serială la 19200 baud
#define LED_PIN 13 // LED de stare
#define BUTTON_PIN 2 // buton de pornire/oprire achiziție
#endif