#include "Movies.h"


Movies::Movies(){
    collection = new std::vector<Movie>;
};

Movies::~Movies(){
    delete collection;
};

void Movies::get_collection(){
    std::cout << "Movie list <" << std::endl;
    for (int i = 0; i < (*collection).size(); ++i)
    {
        
        std::cout << "Title: " << (*collection).at(i).get_title() << " ";
        std::cout << "Rating: " << (*collection).at(i).get_rating() << " ";
        std::cout << "Watched: " << (*collection).at(i).get_watched() << " " << std::endl;
    }
    std::cout << ">" << std::endl;
}

void Movies::add_movie(Movie new_movie){
    collection->push_back(new_movie);
}

void Movies::increment_movie_watched(std::string watched_one){

    for (int i = 0; i < (*collection).size(); ++i)
    {   
        if ((*collection).at(i).get_title() == watched_one)
        {
            (*collection).at(i).increment_watched();
        }
    }

}    