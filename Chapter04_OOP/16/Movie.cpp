#include "Movie.h"


//Constructors
Movie::Movie()
    :Movie{std::string("None"), movie_rating::G, 0}{

};
Movie::Movie(std::string title_val, movie_rating rating_val)
    :Movie{title_val, rating_val, 0}{

};
Movie::Movie(std::string title_val, movie_rating rating_val, int watched_val)
    :title(title_val), rating(rating_val), watched(watched_val){

};

//Copy Constructor


// Movie::Movie(const Movie &source)    
//     :Movie::Movie {*source.data}{
//     std::cout << "Copy constructor - deep copy for: " << Movie::title << std::endl;
// }

//Destructor
Movie::~Movie(){

};


//Functions
int Movie::get_watched(){
    return watched;
}

movie_rating Movie::get_rating(){
    return rating;

}

std::string Movie::get_title(){
    return title;
}


void Movie::increment_watched(){
    watched++;
}