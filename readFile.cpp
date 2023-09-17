#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include "Video.cpp"

using namespace std;

class readFiles{
  vector<Movie> readFileMovie() {
    ifstream input_file("movies.txt");
    string line;
  
    string name, genre, director;
    int id, length;
    float rating;
    vector <Movie> moviesVector(25);
    
    while (getline(input_file, line)){
      stringstream ss(line);
      
      ss >> id;
      ss.ignore();
      getline(ss, name, ',');
      ss >> length;
      ss.ignore();
      getline(ss, genre, ',');
      ss >> rating;
      ss.ignore();
      getline(ss, director, ',');
  
      Movie* movie = new Movie(id, name, length, genre, rating, director)
      moviesVector.push_back(movie);
    }
    
    input_file.close();
    return moviesVector;
  } 

  vector<Series> readFileSeries() {
    ifstream input_file("series.txt");
    string line;
  
    string name, genre, episodeTitle;
    int id, length, numSeasons, season;
    float rating;
    vector <Series> seriesVector(25);
    
    while (getline(input_file, line)){
      stringstream ss(line);
      
      ss >> id;
      ss.ignore();
      getline(ss, name, ',');
      ss >> length;
      ss.ignore();
      getline(ss, genre, ',');
      ss >> rating;
      ss.ignore();
      ss >> numSeasons;
      ss.ignore();
      getline(ss, episodeTitle, ',');
      ss >> season;
      ss.ignore();
  
      Series* series = new Series(id, name, length, genre, rating, director)
      seriesVector.push_back(series);
    }
    
    input_file.close();
    return seriesVector;
  } 
};
