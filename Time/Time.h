#ifndef TIME_H
#define TIME_H
class Time
{
private:
	int hour;
	int  minute;
	int  second;
public:
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);
	int getHour()const;
	int getMinute()const;
	int getSecond()const;
	Time(int h, int m, int s);
	Time();
	long long turnToNum()const;
	Time sum(Time& t) const;
	Time format(long long num);
};
#endif
