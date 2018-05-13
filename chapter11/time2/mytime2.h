// mytime2.h -- overloading method
#ifndef MYTIME2_H_
#define MYTIME2_H_

class Time
{
private:
	int hours;
	int minutes;

public:
	Time();
	Time(int h ,int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset();
	Time operator+ (const Time & t) const;
	Time operator-(const Time & t) const;
	Time operator*(double mult) const;
	void Show() const;
};

#endif
