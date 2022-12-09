#include "Arduino.h"
#include "Log4Duino.h"
#include <SPIFFS.h>


//Init Logger               current_Loglevel

//Update LogLevel           current_Loglevel

void Log4Duino::add_line(int8_t Loglevel,String l_Message){

}

//getline
String Log4Duino::get_line(int16_t line){

}

//instanzieire Filehandler
Log4Duino::Log4Duino(){
if (!SPIFFS.begin()){
        Print_Error(get_Time(),"Message");
    }else{
        Print_Info(get_Time(),"Message");
    }

}

void Log4Duino::Print_Info(String Time,String l_Message){
        Serial.print("\n"+Time+"; "+l_Message);
}
void Log4Duino::Print_Error(String Time,String l_Message){
    Serial.print("\n"+Time+" ERROR: "+l_Message);
}

//getZeit

String Log4Duino::get_Time(){

}

