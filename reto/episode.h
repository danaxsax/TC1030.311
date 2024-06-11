#ifndef EPISODE_H
#define EPISODE_H

#include <iostream>
#include <string>
using namespace std;

class Episode {
public:
    Episode(const string& title, int season, int score)
        : title(title), season(season), score(score) {}

    void display() const {
        cout << "  Episode: " << title << ", Season: " << season << ", Score: " << score << endl;
    }

    int getScore() const {
        return score;
    }

private:
    string title;
    int season;
    int score;
};

#endif // EPISODE_H
