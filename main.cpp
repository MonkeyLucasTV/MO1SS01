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

   while (x>0){


	cout << "Dites votre truc" << '\n';
	cin >> val1 >> operateur >> val2;
     cout << "salut";
    ofstream fichierlog;
		fichierlog.open("journal.log", ios_base::app);
		fichierlog<<val1<<operateur<<val2;
	;
		switch(operateur){

		case '+':
			sum = val1+val2;
			cout << sum << '\n';
			cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR"<< '\n';
			fichierlog<<"="<<sum<<'\n';
			break;
		case '-':
			sum = val1-val2;
			cout << sum<< '\n';
			cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR"<< '\n';
			fichierlog<<"="<<sum<<'\n';
			break;
		case '*':
			sum = val1*val2;
			cout << sum<< '\n';
			cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR"<< '\n';
            fichierlog<<"="<<sum<<'\n';
			break;
		case '/':
			sum = val1/val2;
			cout << sum<< '\n';
			cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR"<< '\n';
            fichierlog<<"="<<sum<<'\n';
			break;
		case '%':
			sum = val1 % val2;
			cout << sum<< '\n';
			cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR"<< '\n';
            fichierlog<<"="<<sum<<'\n';
			break;
		default:
			cout << "mauvais operateur";
            return -1;
		}


	fichierlog.close();




   }
   return 0;
   }
