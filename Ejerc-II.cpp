#include <iostream>
using namespace std;

int fact(int n)
{
	if (n<2)
		return n = 1;
	else
		return n*fact(n - 1);
	return n;
}

int comb()
{
	for (int i=0;i<a;i++)
		if (variable[i]==variable[a-1])
			return 0;
		cout <<"Y estas son sus combinaciones: " <<variable[i]<<variable  <<" ";
}

int main()
{
	int a, b, z;
	std::string texto;
	char variable[100];
	std::cout << "Ingrese una variable y el numero de combinaciones:\n";
	cin >> variable>> b;
	texto = variable;
	a = texto.length();
	z = fact(a)/fact(a-b)/fact(b);
	cout << "Tiene un posible de: " << z << " combinaciones"<<endl;
//	cout <<fact(a)<<endl<<fact(a-b)<<endl<<fact(b);

	return 0;
}
