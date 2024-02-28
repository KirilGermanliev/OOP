#include "Time.h"
long long Time::turnToNum() const {
	return(hour * 60 * 60 + minute * 60 + second);
}
Time Time::sum(Time& t) const {
	return{ t.hour + hour, t.minute + minute, t.second + second };
}
Time Time::format(long long num) {
	hour = num / 3600;
	num -= hour * 3600;
	minute = num / 60;
	num -= minute * 60;
	second = num;
	return{ hour, minute, second};
}
void Time::setHour(int h) {
	if (h >= 0) {
		hour = h;
	}
}
void Time::setMinute(int m) {
	if (m >= 0) {
		minute = m;
	}
}
void Time::setSecond(int s) {
	if (s >= 0) {
		second = s;
	}
}
int Time::getHour()const {
	return hour;
}
int Time::getMinute()const {
	return minute;
}
int Time::getSecond()const {
	return second;
}
Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
}
Time::Time(int h, int m, int s) {
	setHour(h);
	setMinute(m);
	setSecond(s);
}