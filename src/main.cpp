#include <Arduino.h>
#include "Log4Duino.h"


extern "C" {
#include <esp_clk.h>
}
Log4Duino log4Duino;

void SleepDeep(uint32_t seconds);

void setup() {
    Serial.begin(115200);
    

SleepDeep(10);
}

void loop() {
    delay(10000);
}

void SleepDeep(uint32_t seconds) {
    esp_sleep_enable_timer_wakeup(seconds * 1000000);
    esp_deep_sleep_start();
}