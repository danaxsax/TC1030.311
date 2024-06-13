#include <iostream>
#include <vector>
#include "VideoManager.h"
#include "Movie.h"
#include "Serie.h"
#include "Episode.h"

using namespace std;

// Function to input movie details from user
Movie inputMovieDetails() {
    int movieId;
    std::string movieName;
    int movieDuration;
    std::string movieGenre;
    float movieRentCost;
    float movieSaleCost;

    std::cout << "Enter Movie ID: ";
    std::cin >> movieId;
    std::cin.ignore(); // Ignore newline character
    std::cout << "Enter Movie Name: ";
    std::getline(std::cin, movieName);
    std::cout << "Enter Movie Duration (minutes): ";
    std::cin >> movieDuration;
    std::cin.ignore(); // Ignore newline character
    std::cout << "Enter Movie Genre: ";
    std::getline(std::cin, movieGenre);
    std::cout << "Enter Movie Rent Cost: ";
    std::cin >> movieRentCost;
    std::cout << "Enter Movie Sale Cost: ";
    std::cin >> movieSaleCost;

    return Movie(movieId, movieName, movieDuration, movieGenre, movieRentCost, movieSaleCost);
}

// Function to input series details from user
Series inputSeriesDetails() {
    int seriesId;
    std::string seriesName;
    int seriesDuration;
    std::string seriesGenre;
    float seriesRentCost;
    float seriesSaleCost;

    std::cout << "\nEnter Series ID: ";
    std::cin >> seriesId;
    std::cin.ignore(); // Ignore newline character
    std::cout << "Enter Series Name: ";
    std::getline(std::cin, seriesName);
    std::cout << "Enter Series Duration (minutes): ";
    std::cin >> seriesDuration;
    std::cin.ignore(); // Ignore newline character
    cout << "Enter Series Genre: ";
    getline(std::cin, seriesGenre);
    cout << "Enter Series Rent Cost: ";
    cin >> seriesRentCost;
    cout << "Enter Series Sale Cost: ";
    cin >> seriesSaleCost;

    return Series(seriesId, seriesName, seriesDuration, seriesGenre, seriesRentCost, seriesSaleCost);
}

int main() {
    VideoManager manager;

    // Input movies
    int numMovies;
    cout << "Enter number of movies: ";
    cin >> numMovies;

    for (int i = 0; i < numMovies; ++i) {
        cout << "\nEnter details for Movie #" << i + 1 << ":\n";
        Movie movie = inputMovieDetails();

        int numRatings;
        cout << "Enter number of ratings for the movie: ";
        cin >> numRatings;

        for (int j = 0; j < numRatings; ++j) {
            int rating;
            std::cout << "Enter rating #" << j + 1 << " for Movie #" << i + 1 << ": ";
            std::cin >> rating;
            movie.addRating(rating);
        }

        movie.addRating(movie.getAverageRating());
        manager.addVideo(new Movie(movie)); // Store pointer to Movie object in VideoManager
    }

    // Input series
    int numSeries;
    std::cout << "\nEnter number of series: ";
    std::cin >> numSeries;

    for (int i = 0; i < numSeries; ++i) {
        std::cout << "\nEnter details for Series #" << i + 1 << ":\n";
        Series series = inputSeriesDetails();

        int numEpisodes;
        std::cout << "Enter number of episodes for the series: ";
        std::cin >> numEpisodes;

        for (int j = 0; j < numEpisodes; ++j) {
            std::string episodeTitle;
            int episodeSeason;
            int numEpisodeRatings;

            std::cin.ignore(); // Ignore newline character
            std::cout << "Enter Episode #" << j + 1 << " Title: ";
            std::getline(std::cin, episodeTitle);
            std::cout << "Enter Episode #" << j + 1 << " Season: ";
            std::cin >> episodeSeason;
            std::cout << "Enter number of ratings for Episode #" << j + 1 << ": ";
            std::cin >> numEpisodeRatings;

            Episode episode(episodeTitle, episodeSeason);
            for (int k = 0; k < numEpisodeRatings; ++k) {
                int rating;
                std::cout << "Enter rating #" << k + 1 << " for Episode #" << j + 1 << ": ";
                std::cin >> rating;
                episode.addRating(rating);
            }

            series.addEpisode(episode);
        }

        manager.addVideo(new Series(series)); // Store pointer to Series object in VideoManager
    }

    // Display menu for user interaction
    manager.displayMenu();

    // Clean up dynamically allocated memory
    // Since VideoManager owns the videos, we'll add a destructor to VideoManager for cleanup
    // (Implemented below in VideoManager.cpp)

    return 0;
}
