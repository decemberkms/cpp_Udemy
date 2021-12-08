#ifndef _MOVIES_H
#define _MOVIES_H

#include <vector>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> collection;
public:
//Constructor
    Movies();

//functions
    void get_collection();
    void add_movie(Movie new_movie);
    void increment_movie_watched(std::string watched_one);
    


};



#endif