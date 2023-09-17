#include <iostream>
#include <string>
#include "Video.cpp"
using namespace std;




main(){
	Movie TheMatrix, TopGun, TheRock, FastFive, Batman, PitchPerfect, Zoolander, LegallyBlonde, MeanGirls, Clueless, TheNotebook, CasaBlanca, PrideAndPrejudice, Titanic, DirtyDancing, YearsAslave, StarIsBorn, Atonement, BeautifulBoy, Dunkirk, Phenomena, TheRing, Scream, TheConjuring, TheExorcist;
    TheMatrix.setInfo(1,"TheMatrix",136,"Action",4.7,"Lana Wachowski");
  	TopGun.setInfo(2,"Top Gun:Maverick",110,"Action",4.8,"Tony Scott");
  	TheRock.setInfo(3,"The Rock",130,"Action",4.3,"Michael Bay");
    FastFive.setInfo(4,"Fast Five",130,"Action",4.7,"Justin Lin");
    Batman.setInfo(5,"Batman",176,"Action",3.9,"Matt Reeves");
    PitchPerfect.setInfo(6,"Pitch Perfect",112,"Comedy",4.7,"Jason Moore");
    Zoolander.setInfo(7,"Zoolander",89,"Comedy",4.5,"Ben Stiller");
    LegallyBlonde.setInfo(8,"Legally Blonde",96,"Comedy",4.9,"Robert Luketic");
    MeanGirls.setInfo(9,"Mean Girls",97,"Comedy",4.9,"Mark Waters");
    Clueless.setInfo(10,"Clueless",98,"Comedy",4.9,"Amy Heckerling");
  	TheNotebook.setInfo(11,"The Notebook",124,"Romance",4.9,"Nick Cassavetes");
    CasaBlanca.setInfo(12,"Casa Blanca",102,"Romance",4.8,"Michael Curtiz");
    PrideAndPrejudice.setInfo(13,"Pride and Prejudice",127,"Romance",4.8,"Joe Wright");
    Titanic.setInfo(14,"Titanic",194,"Romance",4.8,"James Cameron");
    DirtyDancing.setInfo(15,"Dirty Dancing",97,"Romance",4.6,"Emile Ardolino");
    YearsAslave.setInfo(16,"12 Years a Slave",134,"Drama",4.7,"Steve McQueen");
    StarIsBorn.setInfo(17,"A Star Is Born",135,"Drama",4.7,"Bradley Cooper");
    Atonement.setInfo(18,"Atonement",123,"Drama",4.9,"Joe Wright");
    BeautifulBoy.setInfo(19,"Beautiful Boy",120,"Drama",4.8,"Felix Van Groeningen");
    Dunkirk.setInfo(20,"Dunkirk",106,"Drama",4.7,"Christopher Nolan");
    Phenomena.setInfo(21,"Phenomena",116,"Horror",4.3,"Dario Argento");
    TheRing.setInfo(22,"The Ring",115,"Horror",4.8,"Jonathan Liebesman");
    Scream.setInfo(23,"Scream",120,"Horror",4.7,"Tyler Gillet");
    TheConjuring.setInfo(24,"The Conjuring",112,"Horror",4.7,"James Wan");
    TheExorcist.setInfo(25,"The Exorcist",132,"Horror",4.7,"John Boorman");
    
    Movie m[25] = {TheMatrix, TopGun, TheRock, FastFive, Batman, PitchPerfect, Zoolander, LegallyBlonde, MeanGirls, Clueless, TheNotebook, CasaBlanca, PrideAndPrejudice, Titanic, DirtyDancing, YearsAslave, StarIsBorn, Atonement, BeautifulBoy, Dunkirk, Phenomena, TheRing, Scream, TheConjuring, TheExorcist};
    
    Serie TheWalkingDead, TheLastOfUs, RickAndMorty, TheHundred, Outlander, TheOffice, FullHouse, BoyMeetsWorld, ModernFamily, SouthPark, GilmoreGirls, Bridgerton, LoveIsBlind, EmilyParis, GreysAnatomy, Skins, BlackMirror, GameOfThrones, BreakingBad, Euphoria, AttackOnTitan, AmericanHorror, StrangerThings, Slasher, Kingdom;
    TheWalkingDead.setInfo(26,"The Walking Dead",47,"Action",4.8,11,"The Killer Within",3);
    TheLastOfUs.setInfo(27,"The Last of Us",43,"Action",4.5,1,"Endure and Survive",1);
	RickAndMorty.setInfo(28,"Rick and Morty",22,"Action",4.9,6,"Pickle Rick",3);
    TheHundred.setInfo(29,"The hundred",40,"Action",4.7,7,"Spacewalker",2);
    Outlander.setInfo(30,"Outlander",53,"Action",4.8,6,"Dragonfly in Amber",2);
    TheOffice.setInfo(31,"The Office",32,"Comedy",4.9,9,"Casino Night",2);
    FullHouse.setInfo(32,"Full House",25,"Comedy",4.7,8,"The Whole-In-The-Wall Gang",4);
    BoyMeetsWorld.setInfo(33,"Boy Meets World",23,"Comedy",4.5,7,"Heartbreak Cory",5);
    ModernFamily.setInfo(34,"Modern Family",24,"Comedy",4.9,11,"Connection Lost", 6);
    SouthPark.setInfo(35,"South Park",22,"Comedy",4.8,26,"Imaginationland",11);
    GilmoreGirls.setInfo(36,"Gilmore Girls",45,"Romance",4.8,7,"Love and War and Snow",1);
    Bridgerton.setInfo(37,"Bridgerton",50,"Romance",4.7,3,"Swish",1);
    LoveIsBlind.setInfo(38,"Love is Blind",48,"Romance",3.9,4,"The Reunion",3);
    EmilyParis.setInfo(39,"Emily in Paris",30,"Romance",4.2,3,"Cancel Couture",1);
    GreysAnatomy.setInfo(40,"Grey's Anatomy",43,"Romance",4.8,19,"Death and All His Friends",6);
    Skins.setInfo(41,"Skins",46,"Drama",4.8,7,"Cassie",1);
    BlackMirror.setInfo(42,"Black mirror",50,"Drama",4.9,5,"Black Museum",4);
    GameOfThrones.setInfo(43,"Game of Thrones",60,"Drama",4.8,8,"Fire and Blood",1);
    BreakingBad.setInfo(44,"Breaking Bad",50,"Drama",4.9,5,"Crawl Space",4);
    Euphoria.setInfo(45,"Euphoria",50,"Drama",4.9,2,"Stand Still Like the Hummingbird",2);
	AttackOnTitan.setInfo(46,"Attack on Titan",24,"Horror",4.9,4,"Memories of The Future",4);
	AmericanHorror.setInfo(47,"American Horror Story",40,"Horror",4.8,11,"Return to Murder House",8);
    StrangerThings.setInfo(48,"Stranger Things",75,"Horror",4.8,4,"Holly Jolly",1);
    Slasher.setInfo(49,"Slasher",46,"Horror",4.5,5,"The Past is Never Dead",2);
    Kingdom.setInfo(50,"Kingdom",46,"Horror",4.4,2,"Episode 6",2);
    
    Serie s[25] = {TheWalkingDead, TheLastOfUs, RickAndMorty, TheHundred, Outlander, TheOffice, FullHouse, BoyMeetsWorld, ModernFamily, SouthPark, GilmoreGirls, Bridgerton, LoveIsBlind, EmilyParis, GreysAnatomy, Skins, BlackMirror, GameOfThrones, BreakingBad, Euphoria, AttackOnTitan, AmericanHorror, StrangerThings, Slasher, Kingdom};
	
	int p = 1;
	int Action;
	string _Action;
	
	while(p != 0){
		
		cout<<"Press 0 to exit, or any other number to start a new request: "<<endl;
		cin>>p;
		while(Action < 1){
			cout<<endl<<"What do you want me to do today? (Compare, View, Suggest,ViewList)"<<endl;
			cin>>_Action;
			if(_Action == "Compare"){
				Action = 1;
			}
			if(_Action == "View"){
				Action = 2;
			}
			if(_Action == "Suggest"){
				Action = 3;
			}
			if(_Action == "ViewList"){
				Action = 4;
			}
			
			if(Action == 0){
				cout<<"Sorry, I cant do that yet, plz select a valid option :)"<<endl;
			}
			
		
		}
		if(Action == 1){
			int id1,id2;
			cout<<"Please insert an id_1: "<<endl;
			cin>>id1;
			
			while(id1 > 50){
				cout<<"Please insert a valid id: "<<endl;
				cin>>id1;
			}
			
			cout<<"Please insert an id_2: "<<endl;
			cin>>id2;
			
			while(id2 > 50){
				cout<<"Please insert a valid id: "<<endl;
				cin>>id2;
			}
			
			if(id1 <= 25){
				cout<<endl<<endl<<endl;
				m[id1-1].getInfo();
				
				cout<<endl<<endl<<endl;
			}
			
			if(id1 > 25){
				cout<<endl<<endl<<endl;
				s[id1-26].getInfo();
				cout<<endl<<endl<<endl;
			}
			
			if(id2 <= 25){
				m[id2-1].getInfo();
			}
			
			if(id2 > 25){
				s[id2-26].getInfo();
			}
		}
		
		if(Action == 2){
			int id;
			cout<<"Please insert an id: "<<endl;
			cin>>id;
			while(id > 50){
				cout<<"Please insert a valid id: "<<endl;
				cin>>id;
			}
			
			if(id <= 25){
				m[id-1].getInfo();
				cout<<endl;
			}
			
			if(id > 25){
				s[id-26].getInfo();
				cout<<endl;
			}
		}
		
		if(Action == 3){
			int id;
			float _rating;
			string _genre;
			
			cout<<"Please insert an id of a movie you like: "<<endl;
			cin>>id;
			
			while(id > 50){
				cout<<"Please insert a valid id: "<<endl;
				cin>>id;
			}
			
			if(id <= 25){
				_rating = m[id-1].Rating;
				_genre = m[id-1].Genre;
				
			}
			
			if(id > 25){
				_rating = m[id-26].Rating;
				_genre = m[id-26].Genre;
			}
			cout<<endl<<"Recomendations yust for u:"<<endl;
			
			int sum3;
			for(int n = 0; n <= 49 ; n++){
				
				if(n <= 24){
					double abs;
					abs = (_rating - m[n].Rating);
					if(abs <= 0 || _genre == m[n].Genre){
						abs = abs*(-1);
					}
					
					if(abs <= 0.2){
						cout<<endl<<endl<<"Movie: "<<endl;
						m[n].getInfo();
						sum3 = 1;
					}
				}
				
				else{
					double abs;
					
					abs = (_rating - s[n].Rating);
					if(abs <= 0){
						abs = abs*(-1);
					}
					
					if(abs <= 0.2 || _genre == s[n].Genre){
						cout<<endl<<endl<<endl;
						s[n].getInfo();
						sum3 = 1;
					}
				}
				
			}
			
			if(sum3 == 0){
				cout<<"Sorry, There is none :("<<endl;
			}
			
			
			
			cout<<endl<<"Recomendations based on rating:"<<endl;
			
			int sum = 0;
			for(int n = 0; n <= 49 ; n++){
				
				if(n <= 24){
					double abs;
					abs = (_rating - m[n].Rating);
					if(abs <= 0){
						abs = abs*(-1);
					}
					
					if(abs <= 0.2){
						cout<<endl<<endl<<"Movie: "<<endl;
						m[n].getInfo();
						sum = 1;
					}
				}
				
				else{
					double abs;
					
					abs = (_rating - s[n].Rating);
					if(abs <= 0){
						abs = abs*(-1);
					}
					
					if(abs <= 0.2){
						cout<<endl<<endl<<endl;
						s[n].getInfo();
						sum = 1;
					}
				}
			}
			
			if(sum == 0){
				cout<<"Sorry, There is none :("<<endl;
			}
			
			
			cout<<"Recomendations based on Genre:"<<endl;
			
			int sum1 = 0;
			for(int n = 0; n <= 49 ; n++){
				
				if(n <= 24){
					if(_genre == m[n].Genre){
						cout<<endl<<endl<<"Movie: "<<endl;
						m[n].getInfo();
						sum1 = 1;
					}
				}
				
				else{
					if(_genre == s[n].Genre){
						cout<<endl<<endl<<"Series: "<<endl;
						s[n].getInfo();
						sum1 = 1;
					}
				}
			}
			
			
			if(sum1 == 0){
				cout<<"Sorry, There is none :("<<endl;
			}
			
		}
		
		if(Action == 4){
			for(int n = 0; n <= 49 ; n++){
				if(n <= 24){
					m[n].getId();
					m[n].getTitle();
					cout<<endl;
				}
				else{
					s[n-25].getId();
					s[n-25].getTitle();
					cout<<endl;
				}
				
			}
		}
	}
	
	
}
