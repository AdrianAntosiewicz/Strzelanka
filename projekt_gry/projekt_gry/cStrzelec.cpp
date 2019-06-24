#include "cStrzelec.h"

cStrzelec::cStrzelec(double x, double y, float a, float b, int life, double v) : cPrzeciwnik(x, y, a, b, life, v) {
	tekstura.loadFromFile("C:\\Users\\DiDson\\Desktop\\tekstury\\slime2.png");
	sprajt.setTexture(tekstura);
	sprajt.setPosition(x, y);
	sprajt.setOrigin(a / 2, b / 2);
}

void cStrzelec::uptade(int x) {
	if (x == 0) {
		Vy = -Basic_velocity;
		Vx = 0;
	}
	else if (x == 1) {
		Vy = Basic_velocity;
		Vx = 0;
	}
	else if (x == 2) {
		Vx = -Basic_velocity;
		Vy = 0;
	}
	else if (x == 3) {
		Vx = Basic_velocity;
		Vy = 0;
	}
}
