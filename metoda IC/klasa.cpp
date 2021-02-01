#include "stdafx.h"
#include "klasa.h"

void metoda::wczytaj()
{
	string a1;
	string a;
	
	cout << "Podaj nazwe pliku wzorcowego: ";
	cin >> a1;
	ifstream plik(a1);
	if (!plik) cout << "Blad wczytania pliku sprobuj ponownie" << endl;
	while (getline(plik, a)) wzorzec.push_back(a);
	
	cout << "Podaj nazwe pliku z danymi: ";
	cin >> a1;
	ifstream plik1(a1);
	if (!plik1) cout << "Blad wczytania pliku sprobuj ponownie" << endl;
	while (getline(plik1, a)) dane.push_back(a);
	plik1.close();
}
void metoda::out()
{
	string a;
	cout << "podaj nazwe pliku do zapisu: ";
	cin >> a;
	ofstream plik2;
	plik2.open(a);
	for (int k = 0; k < wyj.size(); k++)
	{
		plik2 << wyj[k] << endl;
		cout << wyj[k] << endl;
	}
	plik2.close();
}
void metoda::licz()
{
	string d;
	int c = 0;
	string t;
	double w = 0.0;
	for (int i = 0; i < dane.size(); i++)
	{
		d = dane[i];
		c = c + d.size();
		for (int j = 0; j < d.size(); j++)
		{
			for (int g = 0; g < 27; g++)
			{
				if (d[j] == alfabet[g])
				{
					t = M[1][g];
					w = stod(t);
					w = w + 1;
					t = to_string(w);
					M[1][g] = t;
				}
			}
		}
	}
	for (int k = 0; k < 27; k++)
	{
		w = 0.0;
		t = M[1][k];
		w = stod(t);
		IC = IC + (w*(w-1));
	}
	IC = IC / (c*(c - 1));
}