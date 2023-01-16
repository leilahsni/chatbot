// HASSANI Leila (22102150)

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void renduMonnaie(int ticketPrice){

  	cout << "Nous acceptons les billets de 5, 10 et 20 euros. Insérer le montant du billet avec lequel vous voulez payer : ";
  		
  	int billInput;

  	// tant que l'utilisateur n'entre pas un billet valide, la boucle continue...
  	while (billInput != 5 || billInput != 10 || billInput != 20) {
  		cin >> billInput;

	  	switch(billInput){
	  		// l'utilisateur entre un billet qui n'est pas valide
	  		default:
	  			cout << "Seuls les billets de 5, 10 et 20 euros sont acceptés. Ajoutez un billet : ";
	  		break;
	  		// l'utilisateur entre un billet de 5
	  		case 5:
	  		// ajout d'une condition si le billet n'est pas suffisant
	  			if (5 < ticketPrice){
	  				int left = ticketPrice - 5;
	  				cout << "Il vous manque " << left << " euros." << "\n";

	  				cout << "Ajoutez un billet : ";
	  				cin >> billInput;

	  				switch(billInput){
	  					case 5: 
	  						cout << "Rendu : " << 5 - left << " euros." << "\n";
	  						cout << "Merci pour votre achat !";
	  						break;
	  					case 10: 
	  						cout << "Rendu : " << 10 - left << " euros." << "\n";
	  						cout << "Merci pour votre achat !";
	  						break;
	  					case 20:
	  						cout << "Rendu : " << 20 - left << " euros." << "\n";
	  						cout << "Merci pour votre achat !";
	  						break;
	  						}
	  					}
	  			// sinon, rendre la monnaie directement
	  			else {
	  				cout << "Rendu : " << 5 - ticketPrice << "\n";
	  				cout << "Merci pour votre achat !";
	  			}
	  		break;

	  		// l'utilisateur met un billet de 10
	  		case 10: 
	  			if (10 < ticketPrice){
	  				int left = ticketPrice - 10;
	  				cout << "Il vous manque " << left << " euros." << "\n";

	  				cout << "Ajoutez un billet : ";
	  				cin >> billInput;

	  				switch(billInput){
	  					case 5: 
	  						cout << "Rendu : " << 5 - left << " euros." << "\n";
	  						cout << "Merci pour votre achat !";
	  						break;
	  					case 10: 
	  						cout << "Rendu : " << 10 - left << " euros." << "\n";
	  						cout << "Merci pour votre achat !";
	  						break;
	  					case 20:
	  						cout << "Rendu : " << 20 - left << " euros." << "\n";
	  						cout << "Merci pour votre achat !";
	  						break;
	  				}
	  			}
	  			else {
	  				cout << "Rendu : " << 10 - ticketPrice << " euros." << "\n";
	  				cout << "Merci pour votre achat !";
	  			}
	  		break;

	  		// l'utilisateur met un billet de 20
	  		case 20: 
	  			if (20 < ticketPrice){
	  				int left = ticketPrice - 20;
	  				cout << "Il vous manque " << left << " euros." << "\n";

	  				cout << "Ajoutez un billet : ";
	  				cin >> billInput;

	  				switch(billInput){
	  					case 5: 
	  						cout << "Rendu : " << 5 - left << " euros." << "\n";
	  						cout << "Merci pour votre achat !";
	  						break;
	  					case 10: 
	  						cout << "Rendu : " << 10 - left << " euros." << "\n";
	  						cout << "Merci pour votre achat !";
	  						break;
	  					case 20:
	  						cout << "Rendu : " << 20 - left << " euros." << "\n";
	  						cout << "Merci pour votre achat !";
	  						break;
	  				}
	  			}

	  			else {

	  				cout << "Rendu : " << 20 - ticketPrice << " euros." << "\n";
	  				cout << "Merci pour votre achat !";
	  			}

	  			break;
	  	}
	break;
	}
}

int main() {

	cout << "Bienvenue ! Voulez-vous jouer à un jeu ou voir un spectacle ? ";

	string userInput;

	//permet de continuer la boucle tant que la condition est vraie
	bool checkUserInput = true;

	while (checkUserInput) {

	  	cin >> userInput;

	  	// on met l'input de l'utilisateur en minuscule pour éviter les problèmes de casse
		transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

		// l'utilisateur choisit un jeu
		if (userInput == "jeu") {

		  	cout << "Vous voulez jouer à un jeu? Très bien!" << "\n";
		  	cout << "Vous avez le choix entre un manège et un stand de tir. \nTapez l'attraction qui vous intéresse : ";

		  	string gameInput;

		  	bool checkGameInput = true;

		  	while (checkGameInput) {

		  		//on utilise getline ici puisque cin ne permet pas de récupérer une string avec espaces
		  		//ce qui pose problème si l'utilisateur tape 'stand de tir'
		  		//le ws permet de récupérer tous les espaces après 'cin'
		  		//sinon la seule chose que le getline récupère c'est le dernier espace, et il va directement à la boucle else...
		  		getline(cin >> ws, gameInput);

		  		transform(gameInput.begin(), gameInput.end(), gameInput.begin(), ::tolower);

		  		if (gameInput == "manège" || gameInput == "manege") {

		  			cout << "Vous avez choisi le manège ! Très bon choix." << "\n";
		  			cout << "Vous pouvez acheter un à quatre billets individuels, ou un carnet de 5. \nTapez 'billet' pour acheter des billets à l'unité, 'carnet' pour acheter un carnet : ";
		  		
		  			string ticketInput;

		  			bool checkTicketInput = true;

		  			while (checkTicketInput) {

			  			cin >> ticketInput;

			  			transform(ticketInput.begin(), ticketInput.end(), ticketInput.begin(), ::tolower);

			  			if (ticketInput == "billet") {

			  				cout << "Tapez le nombre de billets qui vous intéresse : ";

			  				int noTicketInput;
			  				cin >> noTicketInput;

			  				int ticketPrice = noTicketInput*1.30;

			  				cout << "Le montant de votre achat est de " << ticketPrice << " euros." << "\n";

			  				renduMonnaie(ticketPrice);

			  				break;

			  			}

			  			else if (ticketInput == "carnet") {

			  				cout << "Tapez le nombre de carnets qui vous intéresse : ";

			  				int bookTicketInput;
			  				cin >> bookTicketInput;

			  				int ticketPrice = bookTicketInput*5;

			  				cout << "Le montant de votre achat est de " << ticketPrice << " euros." << "\n";

			  				renduMonnaie(ticketPrice);

			  				break;

			  			}

			  			else {

			  				cout << "Tapez 'billet' ou 'carnet'. : ";

			  			}

		  			}

		  		break;

		  		}	

		  		else if (gameInput == "stand de tir") {

		  			cout << "Le stand de tir est mon jeu préféré également !" << "\n";
		  			cout << "Vous pouvez acheter un à quatre billets individuels, ou un carnet de 5. \nTapez 'billet' pour acheter des billets à l'unité, 'carnet' pour acheter un carnet : ";
		  		
		  			string ticketInput;

		  			bool checkTicketInput = true;

		  			while (checkTicketInput) {

			  			cin >> ticketInput;

			  			transform(ticketInput.begin(), ticketInput.end(), ticketInput.begin(), ::tolower);

			  			if (ticketInput == "billet") {

			  				cout << "Tapez le nombre de billets qui vous intéresse : ";

			  				int noTicketInput;
			  				cin >> noTicketInput;

			  				int ticketPrice = noTicketInput*1.30;

			  				cout << "Le montant de votre achat est de " << ticketPrice << " euros." << "\n";

			  				renduMonnaie(ticketPrice);

			  				break;

			  			}

			  			else if (ticketInput == "carnet") {

			  				cout << "Tapez le nombre de carnets qui vous intéresse : ";

			  				int bookTicketInput;
			  				cin >> bookTicketInput;

			  				int ticketPrice = bookTicketInput*5;

			  				cout << "Le montant de votre achat est de " << ticketPrice << " euros." << "\n";

			  				renduMonnaie(ticketPrice);

			  				break;

			  			}

			  			else {

			  				cout << "Tapez 'billet' ou 'carnet.' : ";

			  			}

			  		}

		  		break;

		  		}

		  		else {

		  			cout << "Tapez 'manège' ou 'stand de tir.' : ";

		  		}

		  	}

		break;

	  	}

	  	// l'utilisateur choisit un spectacle
		else if (userInput == "spectacle") {

	  		cout << "Nous serions ravi de vous accueillir à l'un de nos spectacles ! " << "\n";
	  		cout << "Voulez-vous assister à un spectacle de jour ou un spectacle de nuit ? Tapez 'jour' ou 'nuit' : ";

	  		string showInput;

	  		bool checkShowInput = true;

	  		while (checkShowInput) {

		  		cin >> showInput;

		  		transform(showInput.begin(), showInput.end(), showInput.begin(), ::tolower);

		  		if (showInput == "jour") {

		  			cout << "Vous avez choisi le spectacle de jour ! Très bon choix." << "\n";
		  			cout << "Les billets sont à 2,20 euros. Combien de billets souhaitez-vous réserver ? " ;

		  			int noDayShow;
		  			cin >> noDayShow;

		  			int ticketPrice = noDayShow*2.20;

		  			cout << "Le montant de votre achat revient à " << ticketPrice << " euros." << "\n";

		  			renduMonnaie(ticketPrice);

		  			break;

		  		}

		  		else if (showInput == "nuit") {

		  			cout << "Les spectacles de nuit sont éblouissant ! Bon choix." << "\n";
		  			cout << "Les billets sont à 2,50 euros. Combien de billets souhaitez-vous réserver ? ";

		  			int noEveningShow;
		  			cin >> noEveningShow;

		  			int ticketPrice = noEveningShow*2.50;

		  			cout << "Le montant de votre achat revient à " << ticketPrice << " euros." << "\n";

		  			renduMonnaie(ticketPrice);

		  			break;

				}

				else {

					cout << "Tapez 'jour' ou 'nuit.' : ";

				}

			}

		break;

		}

		else {

			cout << "Je ne comprends pas votre réponse... ";
			cout << "Tapez 'jeu' ou 'spectacle.' : ";

		}

	}

	return 0;

}