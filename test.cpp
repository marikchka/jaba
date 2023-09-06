#include <ctime>

class Date {
 private:
  int day;
  int month;
  int year;
 public: 
  Date ();
  Date(int,int,int);
  Date (const Date&);
  ~Date(){};
  int GetDay(){return day;};
  int GetMonth(){return month;};
  int GetYear(){return year;};
  Date& SetDay(int);
  Date& SetMonth(int);
  Date& SetYear(int);
  void output(){ std::cout<<day<<"."<<month<<"."<<year%100<<".";};
  friend UnitOfAccount;

};

Date::Date(){
  std::time_t date = std::time(nullptr);
  struct tm data =*localtime(&date); 
  day=data.tm_mday;
  month=data.tm_mon+1;
  year=data.tm_year+1900;
  std::cout<<day<<"."<<month<<"."<<year%100<<".";
}

Date::Date(int day, int month, int year)
:day(day),month(month),year(year){}

Date::Date(const Date& other){
  if (other.day>0&&other.month>0&&other.year>0){
    this->day=other.day;
    this->month=other.month;
    this->year=other.year;
  }
}

Date& Date::SetDay(int dd){
  if (dd>0)
   day=dd;
  return *this; 
}

Date& Date::SetMonth(int mm){
  if (mm>0)
   month=mm;
  return *this; 
}

Date& Date::SetYear(int yy){
  if (yy>0)
   year=yy;
  return *this; 
}