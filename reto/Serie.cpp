#include "Serie.h"
#include <iostream>

Series::Series(int _id, std::string _name, int _duration, std::string _genre, float _rentCost, float _saleCost)
    : Video(_id, _name, _duration, _genre, _rentCost, _saleCost) {}

const std::vector<Episode>& Series::getEpisodes() const {
    return episodes;
}

void Series::addEpisode(const Episode& episode) {
    episodes.push_back(episode);
}

float Series::getAverageRating() {
    if (episodes.empty()) return 0.0;

    float sum = 0;
    for (const Episode& episode : episodes) {
        sum += episode.getAverageRating();
    }
    return sum / episodes.size();
}

void Series::getData() {
    Video::getData();
    std::cout << "Average Rating of the Series: " << getAverageRating() << std::endl;
    std::cout << "Number of Episodes: " << episodes.size() << std::endl;
    std::cout << "Episodes: " << std::endl;
    for (const Episode& episode : episodes) {
        episode.getData();
    }
}
