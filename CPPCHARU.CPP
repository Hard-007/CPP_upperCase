#include <iostream.h>
#include <string.h>
#include <conio.h>

class Converter{
		int k;
		int i;

	protected:
		char str[30];

	public:
		Converter(){
			cout << "Char converter BY Hard.0_0.7" << endl;
		}
		void input(){
			cout << "\nDigite uma string:\n" << endl;
			cin.getline(str, 30);
		}
		void convert();

		void set_k(){
			cout << "\n\nDeseja terminar o programa ? 1.Sim 2.Nao\n" << endl;
			cin >> k;
		}
		int get_k(){
			return k;
		}

};
void Converter::convert(){
	for(i=0; i<strlen(str); i++){
		if((int)str[i] > 96) cout << (char)((int) str[i] - 32);
		else cout << (char)((int)str[i]);
	}
};

void main(){
	Converter *obj;

	do{
		obj->input();
		obj->convert();

		obj->set_k();
	}while(obj->get_k()!=1);

	getch();
	clrscr();
}