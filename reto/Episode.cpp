#include "Episode.h"
#include <iostream>

Episode::Episode(std::string _title, int _season)
    : title(_title), season(_season) {}

std::string Episode::getTitle() const {
    return title;
}

int Episode::getSeason() const {
    return season;
}

void Episode::addRating(int rating) {
    ratings.push_back(rating);
}

float Episode::getAverageRating() const {
    if (ratings.empty()) return 0.0;

    float sum = 0;
    for (int rating : ratings) {
        sum += rating;
    }
    return sum / ratings.size();
}

void Episode::getData() const {
    std::cout << "Episode - Title: " << title << ", Season: " << season << ", Average Rating: " << getAverageRating() << std::endl;
}
