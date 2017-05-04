#ifndef MOON_H_
#define MOON_H_

class Moon {

private:

	double moonWeight;
	double earthWeight;

public:

	Moon();
	~Moon();
	double getMoonWeight() const;
	double getEarthWeight() const;
	
	void setMoonWeight(double ew);
	void DisplayMoon() const;


};


#endif 