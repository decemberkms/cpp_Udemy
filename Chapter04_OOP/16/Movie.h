#ifndef _MOVIE_H_
#define _MOVIE_H

#include <string>
#include <iostream>

enum movie_rating{
    G,
    PG,
    PG_13,
    R
};


class Movie {
private:
    std::string title;
    movie_rating rating;
    int watched;
  

public:
//Constructors
    Movie(std::string title_val, movie_rating rating_val, int watched_val);
    Movie(std::string title_val, movie_rating rating_val);    
    Movie();

//Copy Constructor
    // Movie(const Movie &source);

//Destructor
    ~Movie();

//Functions
    int get_watched();
    movie_rating get_rating();
    std::string get_title();

    void increment_watched();

};

#endif