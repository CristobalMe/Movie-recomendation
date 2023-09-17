#include <iostream>
#include <STRING>
using namespace std;


class Video{
	public:
		int Id, Length;
		string Genre, Title;
		float Rating;
		
		Video(){
			Id = 0;
			Length = 0;
			Genre = "Null";
			Title = "Null";
			Rating = 0.0;
		}

		virtual void setInfo(int _Id, string _Title, int _Length, string _Genre, float _Rating){
			Id = _Id;
			Title = _Title;
			Length = _Length;
			Genre = _Genre;
			Rating = _Rating;
		}
		
		
		void getId(){
			cout<<"Id: "<<Id<<endl;
		}
		
		void getTitle(){
			cout<<"Title: "<<Title<<endl;
		}
		
		void getLength(){
			cout<<endl<<"Length: "<<Length<<endl;
		}
		
		void getGenre(){
			cout<<"Genre: "<<Genre<<endl;
		}
		
		void getRating(){
			cout<<"Rating: "<<Rating<<endl;
		}
		
		virtual void getInfo(){
			cout<<"Title: "<<Title<<endl<<"Id: "<<Id<<endl<<"Length: "<<Length<<endl<<"Genre: "<<Genre<<endl<<"Rating: "<<Rating<<endl;
		}
		
};

class Movie : public Video{
	private:
		string Director;
	public:
		Movie(){
			Director = "Null";
		}
		
		void setInfo(int _Id, string _Title, int _Length, string _Genre, float _Rating, string _Director){
			Id = _Id;
			Title = _Title;
			Length = _Length;
			Genre = _Genre;
			Rating = _Rating;
			Director = _Director;
		}
		
		void getInfo(){
			cout<<"Title: "<<Title<<endl<<"Id: "<<Id<<endl<<"Length: "<<Length<<endl<<"Genre: "<<Genre<<endl<<"Rating: "<<Rating<<endl<<"Director: "<<Director<<endl;
		}
		
};

class Serie : public Video{
	public:
		int SeasonsNum, EpisodeNum;
		string EpisodeName;
		
		
		Series(){
			SeasonsNum = 0;
		}
		
		void setInfo(int _Id, string _Title, int _Length, string _Genre, float _Rating, int _SeasonsNum, string _EpisodeName, int _EpisodeNum){
			Id = _Id;
			Title = _Title;
			Length = _Length;
			Genre = _Genre;
			Rating = _Rating;
			SeasonsNum = _SeasonsNum;
			EpisodeName = _EpisodeName;
			EpisodeNum = _EpisodeNum;
		}
		
		virtual void getInfo(){
			cout<<"Title: "<<Title<<endl<<"Id: "<<Id<<endl<<"Length: "<<Length<<endl<<"Genre: "<<Genre<<endl<<"Rating: "<<Rating<<endl<<"SeasonsNum: "<<SeasonsNum<<endl<<"Episode Name: "<< EpisodeName<<endl<<"Episode Number: "<<EpisodeNum<<endl;
		}
		
};

class Episodes : public Serie{
	public:
		int Season;
		string EpisodeTitle;
		
		Episodes(){
			Season = 0;
			EpisodeTitle = "Null";
		}
		
		void getInfo(){
			cout<<"Title: "<<Title<<endl<<"Id: "<<Id<<endl<<"Length: "<<Length<<endl<<"Genre: "<<Genre<<endl<<"Rating: "<<Rating<<endl<<"Season: "<<Season<<endl<<"Episode Title: " << EpisodeTitle<<endl;
		}
};


