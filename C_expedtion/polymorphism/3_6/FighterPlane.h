#ifndef FIGHTERPLANE_H
#define FIGHTERPLANE_H

#include "Plane.h"
#include <string>
using namespace std;

class FighterPlane:public Plane
{
	public:
		FighterPlane(string code);
		virtual void takeoff();
		virtual void land();
};
#endif
