#define PATTERN4
#define BRIGHTNESS 10     // яркость матрицы (0 - 15)
#define MATR_NUM 8        // количество матриц последовательно
#define PERIOD 1000
#define PERIOD_DRAW 80

#include <Adafruit_GFX.h>
#include <TimeLib.h>
#include <Max72xxPanel.h>
#include <DS1307RTC.h>

Max72xxPanel matrix = Max72xxPanel(10, 4, 2);

// Globals
String str_display_time = ""; // Holds the currently displayed time as string
String str_current_time = "";
bool seconds_odd = false;       // True when the seconds are currently odd
long currentMillis, currentMillis_small;
int shifts[4] = {1, 8, 18, 25};
// Local includes
#include "numbers.h"
#include "drawing.h"

// ****************************************************************
// * Setup
// ****************************************************************
void setup()
{
  Serial.begin(9600);

  setSyncProvider(RTC.get);   // получаем время с RTC

  matrix.setIntensity(BRIGHTNESS);
    for (byte i = 0; i < MATR_NUM; i++) {
    // матрицы расположены криво, здесь поворачиваем
    matrix.setRotation(i, 1);
  }

  matrix.fillScreen(LOW);
  matrix.write();

  currentMillis = millis();
  currentMillis_small = millis();

    

}

void loop()
{

    if ((millis() - currentMillis) > PERIOD) {
      currentMillis = millis();
      if (seconds_odd) seconds_odd = false;
        else seconds_odd = true;
    }
    
    str_current_time = "";
    if (hour() < 10) str_current_time.concat("0");
    str_current_time.concat(hour());
    if (minute() < 10) str_current_time.concat("0");
    str_current_time.concat(minute());



    // Time has changed
    if (str_display_time != str_current_time) {
      for (int ii = 0; ii < SIZE_NUM_STATES; ii++) {
        if (str_display_time[ii] != str_current_time[ii]) {
          numstates[ii].num_to_draw = str_current_time[ii] - '0';
          numstates[ii].blockindex = 0;
          numstates[ii].fallindex = 0;
          numstates[ii].x_shift = shifts[ii];
        }
      }
     str_display_time = str_current_time;
    }

    if ((millis() - currentMillis_small) > PERIOD_DRAW) {
    currentMillis_small = millis();
    number_updater();
    }

}
