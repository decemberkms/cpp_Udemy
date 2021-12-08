#include "Movies.h"


Movies::Movies(){
};

void Movies::get_collection(){
    std::cout << "Movie list <" << std::endl;
    for (auto movie:collection)
    {
        
        std::cout << movie.get_title() << " " << std::endl;
    }
    std::cout << ">" << std::endl;
}

void Movies::add_movie(Movie new_movie){
    collection.push_back(new_movie);
}

void Movies::increment_movie_watched(std::string watched_one){

    for (auto &movie:collection)
    {   
        if (movie.get_title() == watched_one)
        {
            movie.increment_watched();
        }
    }

}    