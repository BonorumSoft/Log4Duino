#ifndef Log4Duino_h
#define Log4Duino_h


class Log4Duino
{
private:



public:
Log4Duino();
void add_line(int8_t Loglevel,String l_Message);
String get_line(int16_t line);
void Print_Info(String Time,String l_Message);
void Print_Error(String Time,String l_Message);
String get_Time();
};
#endif