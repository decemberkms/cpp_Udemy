#include <iostream>
#include "Movies.h"

using namespace std;

int main()
{

    Movies myMovieList;
    myMovieList.add_movie(Movie("Movie1", G, 0));
    myMovieList.add_movie(Movie("Movie2", PG, 0));
    myMovieList.get_collection();
    myMovieList.add_movie(Movie("Movie3", PG_13, 0));
    myMovieList.add_movie(Movie("Movie4", PG_13, 0));
    myMovieList.add_movie(Movie("Movie5", PG_13, 0));
    myMovieList.add_movie(Movie("Movie6", PG_13, 0));
    myMovieList.get_collection();
    myMovieList.add_movie(Movie("Movie7", PG_13, 0));
    myMovieList.get_collection();
    myMovieList.add_movie(Movie("Movie9", PG_13, 0));

    myMovieList.increment_movie_watched("Movie4");
    myMovieList.increment_movie_watched("Movie2");
    myMovieList.increment_movie_watched("Movie3");
    myMovieList.increment_movie_watched("Movie2");
    myMovieList.increment_movie_watched("Movie2");
    myMovieList.increment_movie_watched("Movie2");
    myMovieList.increment_movie_watched("Movie8");
    myMovieList.get_collection();

    return 0;
}