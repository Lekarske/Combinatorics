					//COMBINATORIA DE CARACTERES 		**COMBINATORIA DE 0 A 3  :(
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

int comb(char variable[], int a, int b)
{
	switch (b){
		case 0:{
			cout << "\n** La unica combinatoria es:\n";
			for (int i=0;i<a;i++)
				cout << variable[i];break;
		}
		case 1:{
			cout << "\n** Y estas son sus combinaciones:\n";
			for (int i=0;i<a+1-1;i++)
				cout << variable[i]<<"  ";break;
		}
		case 2:{
			cout <<"\n** Y estas son sus combinaciones:\n";
			for (int i=0;i<a-1;i++){
				cout <<variable[i]<<variable[i+1]<<" ";
				for (int j=i+1;j<a-1;j++)
					cout <<variable[i]<<variable[j+1]<<" ";
			}break;
		}
		case 3:{
			cout <<"\n** Y estas son sus combinaciones:\n";
			for (int i=0;i<a-2;i++){
				cout <<variable[i]<<variable[i+1]<<variable[i+2]<<" ";
				for (int j=i+1;j<a-2;j++){
					cout <<variable[i]<<variable[j+1]<<variable[j+2]<<" ";
					for (int k=j+1;k<a-1;k++)
						cout <<variable[i]<<variable[j]<<variable[k+1]<<" ";
				}
			}break;
		}
/*		case 4:{
			
			break;
		}
*/		default:
			cout << "\n** Pero la combinatoria no esta disponible :(\n";
	}
}

int main()
{
	int a, b, z;
	string texto;
	char variable[100];
	cout << "Ingrese una variable y el numero de combinaciones:\n";
	cin >> variable>> b;
	texto = variable;
	a = texto.length();
	if (a>b && b>=0){
		z = fact(a)/fact(a-b)/fact(b);
		//cout <<fact(a)<<endl<<fact(a-b)<<endl<<fact(b)<<endl;
		cout << "\n** Tiene " << z << " posible(s) combinatoria(s)"<<endl;
		comb (variable,a,b);
		cout<<endl;
	}
	else if (a==b){
		comb(variable,a,0);
		cout<<endl;
	}
	else
		cout << "\n** DATOS INVALIDOS\n";
	cout << endl;
	system("pause");
	return 0;
}
