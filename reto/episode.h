#ifndef EPISODE_H
#define EPISODE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Episode {
public:
    Episode(std::string _title, int _season);

    std::string getTitle() const;
    int getSeason() const;

    void addRating(int rating);

    float getAverageRating() const;
    void getData() const;

private:
    std::string title;
    int season;
    std::vector<int> ratings; // Correct the type to vector
};

#endif // EPISODE_H
