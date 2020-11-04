#include <iostream>
#include <math.h>

using namespace std;

class Distance {
public:
	string sC;
	float Xa, Ya, Xb, Yb, result;
	Distance(float a1, float b1, float a2, float b2, string s) {
		this->Xa = a1;
		this->Ya = b1;
		this->Xb = a2;
		this->Yb = b2;
		this->sC = s;
	}
	void check() {
		if (sC == "all") {
			all();
		}
		else if (sC == "Euc") {
			euclidienne();
		}
		else if (sC == "Tcheb") {
			Tchebychev();
		}
		else if (sC == "Man") {
			Manhattan();
		}
		else {
			cout << "Type de distance non reconnu.\n";
		}
	}
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
	string s;
	float n1, n2, n3, n4;
	cout << "Veuillez entrer les valeurs suivi du type de distance : \n";
	cin >> n1 >> n2 >> n3 >> n4;
	Distance* p = new Distance(n1, n2, n3, n4, s = "all");
	p->check();
	delete p;

	return 0;
}
