#include <iostream>
#include <vector>
#include "movie.h"
#include "serie.h"
using namespace std;

int main() {
    // Ask for the number of movies
    int numMovies;
    cout << "Enter the number of movies: ";
    cin >> numMovies;
    
    // Vector to store movie objects
    vector<Movie> movieVec;

    // Iterate for each movie
    for (int i = 0; i < numMovies; ++i) {
        int movieId, movieDuration, movieRanked, movieScore;
        string movieName, movieGenre;
        float movieRentCost, movieSaleCost;

        cout << "\nEnter movie " << i + 1 << " details:" << endl;
        cout << "Enter movie ID: ";
        cin >> movieId;
        cout << "Enter movie name: ";
        cin.ignore(); // Ignore the newline character left in the buffer
        getline(cin, movieName);
        cout << "Enter movie duration (minutes): ";
        cin >> movieDuration;
        cout << "Enter movie genre: ";
        cin.ignore(); // Ignore the newline character left in the buffer
        getline(cin, movieGenre);
        cout << "Enter movie ranked: ";
        cin >> movieRanked;
        cout << "Enter movie rent cost: ";
        cin >> movieRentCost;
        cout << "Enter movie sale cost: ";
        cin >> movieSaleCost;
        cout << "Enter movie score: ";
        cin >> movieScore;

        // Create a Movie object
        Movie movie(movieId, movieName, movieDuration, movieGenre, movieRanked, movieRentCost, movieSaleCost, movieScore);

        // Add movie to the vector
        movieVec.push_back(movie);
    }

    // Ask for the number of series
    int numSeries;
    cout << "\nEnter the number of series: ";
    cin >> numSeries;
    
    // Vector to store series objects
    vector<Serie> seriesVec;

    // Iterate for each series
    for (int i = 0; i < numSeries; ++i) {
        int seriesId, seriesDuration, seriesRanked, seriesScore;
        string seriesName, seriesGenre, episodeTitle;
        float seriesRentCost, seriesSaleCost;
        int numEpisodes;

        cout << "\nEnter series " << i + 1 << " details:" << endl;
        cout << "Enter series ID: ";
        cin >> seriesId;
        cout << "Enter series name: ";
        cin.ignore(); // Ignore the newline character left in the buffer
        getline(cin, seriesName);
        cout << "Enter series duration (minutes): ";
        cin >> seriesDuration;
        cout << "Enter series genre: ";
        cin.ignore(); // Ignore the newline character left in the buffer
        getline(cin, seriesGenre);
        cout << "Enter series ranked: ";
        cin >> seriesRanked;
        cout << "Enter series rent cost: ";
        cin >> seriesRentCost;
        cout << "Enter series sale cost: ";
        cin >> seriesSaleCost;
        cout << "Enter series score: ";
        cin >> seriesScore;
        cout << "Enter number of episodes: ";
        cin >> numEpisodes;

        // Create a Series object
        Serie series(seriesId, seriesName, seriesDuration, seriesGenre, seriesRanked, seriesRentCost, seriesSaleCost, seriesScore);

        // Add episodes to the series
        for (int j = 0; j < numEpisodes; ++j) {
            cout << "Enter episode title for episode " << j + 1 << ": ";
            cin.ignore(); // Ignore the newline character left in the buffer
            getline(cin, episodeTitle);
            int episodeSeason, episodeScore;
            cout << "Enter season number for episode " << j + 1 << ": ";
            cin >> episodeSeason;
            cout << "Enter score for episode " << j + 1 << ": ";
            cin >> episodeScore;
            Episode episode(episodeTitle, episodeSeason, episodeScore);
            series.addEpisode(episode);
        }

        // Add series to the vector
        seriesVec.push_back(series);
    }

    // Display movie information
    cout << "\nMovie information:" << endl;
    for (const auto& movie : movieVec) {
        movie.display();
    }

    // Display series information
    cout << "\nSeries information:" << endl;
    for (const auto& series : seriesVec) {
        series.display();
    }

    return 0;
}
