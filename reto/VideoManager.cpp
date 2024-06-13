#include "VideoManager.h"
#include <iostream>
#include <algorithm>

using namespace std;

void VideoManager::addVideo(Video* video) {
    videos.push_back(video);
}

void VideoManager::showVideosByRating(float rating) const {
    cout << "Videos with rating " << rating << " or higher:\n";
    for (const auto& video : videos) {
        if (video->getRating() >= rating) {
            video->getData();
            cout << endl;
        }
    }
}

void VideoManager::showVideosByGenre(const std::string& genre) const {
    cout << "Videos in the genre " << genre << ":\n";
    for (const auto& video : videos) {
        if (video->getGenre() == genre) {
            video->getData();
            cout << endl;
        }
    }
}

void VideoManager::showMoviesByRating(float rating) const {
    cout << "Movies with rating " << rating << " or higher:\n";
    for (const auto& video : videos) {
        Movie* movie = dynamic_cast<Movie*>(video);
        if (movie && movie->getAverageRating() >= rating) {
            movie->getData();
            cout << endl;
        }
    }
}

void VideoManager::rateVideo(const std::string& title, float rating) {
    auto it = find_if(videos.begin(), videos.end(), [&title](const Video* video) {
        return video->getName() == title;
    });

    if (it != videos.end()) {
        Video* video = *it;
        Movie* movie = dynamic_cast<Movie*>(video);
        Series* series = dynamic_cast<Series*>(video);
        if (movie) {
            movie->addRating(static_cast<int>(rating));
        } else if (series) {
            cout << "Series cannot be rated directly. Please rate individual episodes.\n";
        }
    } else {
        cout << "Video not found.\n";
    }
}

void VideoManager::displayMenu() {
    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. Mostrar videos con cierta calificación\n";
        cout << "2. Mostrar videos de cierto género\n";
        cout << "3. Mostrar películas con cierta calificación\n";
        cout << "4. Calificar un video\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                float rating;
                cout << "Ingrese la calificación mínima: ";
                cin >> rating;
                showVideosByRating(rating);
                break;
            }
            case 2: {
                string genre;
                cout << "Ingrese el género: ";
                cin >> genre;
                showVideosByGenre(genre);
                break;
            }
            case 3: {
                float rating;
                cout << "Ingrese la calificación mínima: ";
                cin >> rating;
                showMoviesByRating(rating);
                break;
            }
            case 4: {
                string title;
                float rating;
                cout << "Ingrese el título del video a calificar: ";
                cin.ignore();
                getline(cin, title);
                cout << "Ingrese la calificación otorgada: ";
                cin >> rating;
                rateVideo(title, rating);
                break;
            }
            case 0:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
                break;
        }
    } while (choice != 0);
}
