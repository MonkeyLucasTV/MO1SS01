#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;
int main()
{




/*   do{

       cout << "Dites votre truc" << '\n';
		cin >> val1 >> operateur >> val2;


	if (operateur == '+') {
		int sum = val1+val2;
		cout << sum;
		system("Pause");
		return 0;
	}
	else if (operateur == '/') {
		int sum = val1/val2;
		cout << sum;
		system("Pause");
		return 0;
	}
	else if (operateur == '-') {
		int sum = val1-val2;
		cout << sum;
		system("Pause");
		return 0;
	}
	else if (operateur == '*') {
		int sum = val1*val2;
		cout << sum;
		system("Pause");
		return 0;
	}
	else {
		cout << "mauvais operateur";
		return -1;
	}
	system("Pause");
	cin.get();

	  }while (x > 0);

   */


	int choix;
	double sum;
	int val1;
	int val2;
	char operateur;
	int x = 1;
	 while (x==1){

		cout << "Dites votre truc" << '\n';
		cin >> val1 >> operateur >> val2;

		switch(operateur){

		case '+':
			sum = val1+val2;
			cout << sum << '\n';
			cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR"<< '\n';

			break;
		case '-':
			sum = val1-val2;
			cout << sum<< '\n';
			cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR"<< '\n';
			break;
		case '*':
			sum = val1*val2;
			cout << sum<< '\n';
			cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR"<< '\n';
			break;
		case '/':
			sum = val1/val2;
			cout << sum<< '\n';
			cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR"<< '\n';
			break;
		case '%':
			sum = val1 % val2;
			cout << sum<< '\n';
			cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR"<< '\n';
			break;
		default:
			cout << "mauvais operateur";
            return -1;
		}

	  ofstream fichierlog("fichierlog.txt");
	  string operation = to_string(val1) +  to_string(operateur) + to_string(val2);
	  cout << operation;
	  fichierlog(operation);
      fichierlog.close();
  }
   return 0;
}
