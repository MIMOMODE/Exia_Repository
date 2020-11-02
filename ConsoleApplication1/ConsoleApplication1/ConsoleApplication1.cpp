#include <iostream>
#include <math.h>
// maj Hmida
using namespace std;


class Distance {
public:
	float Xa, Ya, Xb, Yb, result;
	void euclidienne() {
		result = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
		cout << "La distance euclidienne de (" << Xa << "," << Ya << ") et (" << Xb << "," << Yb << ") Est : " << result << "\n";
	}
	void Tchebychev() {
		result = fmax((abs(Xb - Xa)), (abs(Yb - Ya)));
		cout << "La distance de Tchebychev de (" << Xa << "," << Ya << ") et (" << Xb << "," << Yb << ") Est : " << result << "\n";
	}
	void Manhattan() {
		result = abs(Xb - Xa) + abs(Yb - Ya);
		cout << "La distance de Manhattan de (" << Xa << "," << Ya << ") et (" << Xb << "," << Yb << ") Est : " << result << "\n";
	}
	void all() {
		euclidienne();
		Tchebychev();
		Manhattan();
	}
};

int main() {
	float result;
	Distance d;
	cout << "Coordonnees du premier point : ";
	cin >> d.Xa >> d.Ya;
	cout << "Coordonnees du deuxieme point : ";
	cin >> d.Xb >> d.Yb;

	d.all();

}