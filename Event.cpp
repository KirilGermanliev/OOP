#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;
struct Time {
	long long hour;
	long long  minute;
	long long  second;
	long long turnToNum() const {
		return(hour * 60 * 60 + minute * 60 + second);
	}
	Time sum(Time& t) const {
		return{ t.hour + hour, t.minute + minute, t.second + second };
	}
	Time format() {
		minute += second / 60;
		second %= 60;
		hour += minute / 60;
		minute %= 60;
		return{ hour,minute,second };
	}
};

struct Event {
	char title[129];
	char organizer[129];
	Time start_time;
	Time end_time;
	Time get_duration() const {
		if (end_time.turnToNum() >= start_time.turnToNum()) {
			long long diff = end_time.turnToNum() - start_time.turnToNum();
			return{ diff/3600, (diff/60)%60, diff%60 };
		}
		else {
			throw("Invalid start and end time");
		}
	}
};
void addEvent(Event calendar[], int k) {
	cout << "Type title:";
	cin.ignore();
	cin.getline(calendar[k].title, 129);
	cout << "Type organizer:";
	cin.getline(calendar[k].organizer, 129);
	cin >> calendar[k].start_time.hour >> calendar[k].start_time.minute >> calendar[k].start_time.second;
	cin >> calendar[k].end_time.hour >> calendar[k].end_time.minute >> calendar[k].end_time.second;

}
void createTable(Event calendar[], int n, Time& full) {
	for (int i = 0; i < n; i++) {
		addEvent(calendar, i);
	}
	Time duration = { 0,0,0 };
	for (int i = 0; i < n; i++) {
		duration = calendar[i].get_duration().sum(duration);
		cout << duration.hour << ":" << duration.minute << ":" << duration.second << endl;
	}
	cout << duration.hour << ":" << duration.minute << ":" << duration.second << endl;
	full = duration.format();
}
int main() {
	int n;
	cout << "Type number of events:";
	cin >> n;
	cin.ignore();
	assert(n < 101);
	Event timetable[100];
	Time fullDuration;
	createTable(timetable, n, fullDuration);
	cout << fullDuration.hour << ":" << fullDuration.minute << ":" << fullDuration.second << endl;
	return 0;
}
