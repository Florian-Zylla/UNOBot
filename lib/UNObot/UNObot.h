/*
  UNObot.h - Library for UNObot V1, V2, V3 by Roboschool .
  Created by Florian Zylla, October 29, 2018.

*/
#ifndef UNObot_h
#define UNObot_h

#include "Arduino.h"

void set_motors(int left_speed, int right_speed);
void read_line_sensors(int values[]);
int get_distance();
bool wait_for_button(int button);
int wait_for_any_button();
void r_led(boolean state);
void y_led(boolean state);
void g_led(boolean state);
void r_led_pwm(int brightness);
void y_led_pwm(int brightness);
void g_led_pwm(int brightness);
void clear();
void print(String data);
void print(int data);
void lcd_goto_xy(int x, int y);
void bar_manually( int height, int column , int row);
void bar(int min, int max , int value, int column, int row);
void buzzer(int frequency, int duration);
void UNObot_init();
int get_hardware_version();
boolean get_software_version();

#endif

