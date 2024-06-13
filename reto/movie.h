#ifndef MOVIE_H
#define MOVIE_H
#include "Video.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Movie : public Video {
private:
    vector<int> ratings;

public:
    Movie(int _id, std::string _name, int _duration, std::string _genre, float _rentCost, float _saleCost);

    const vector<int>& getRatings() const;

    void addRating(int rating);

    float getAverageRating() override;
    void getData();
};

#endif // MOVIE_H