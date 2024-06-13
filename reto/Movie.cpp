#include "Movie.h"
#include <iostream>

Movie::Movie(int _id, std::string _name, int _duration, std::string _genre, float _rentCost, float _saleCost)
    : Video(_id, _name, _duration, _genre, _rentCost, _saleCost) {}

const std::vector<int>& Movie::getRatings() const {
    return ratings;
}

void Movie::addRating(int rating) {
    ratings.push_back(rating);
}

float Movie::getAverageRating() {
    if (ratings.empty()) return 0.0;

    float sum = 0;
    for (int rating : ratings) {
        sum += rating;
    }
    return sum / ratings.size();
}

void Movie::getData() {
    Video::getData();
    std::cout << "Average Rating: " << getAverageRating() << std::endl;
}