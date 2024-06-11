#ifndef SERIE_H
#define SERIE_H
#include "video.h"
#include "episode.h"
#include <vector>
using namespace std;

class Serie: public Video{
public:
    Serie(int id, string name, int duration, string genre, int ranked, float rentCost, float saleCost, int score)
        : Video(id, name, duration, genre, ranked, rentCost, saleCost, score) {}

    void addEpisode(const Episode& episode){
        episodes.push_back(episode);
    }

    // Setters
    void display() const {
        cout << "Serie - ";
        display();
        for (const auto& episode : episodes){
            episode.display();
        }
    }

    float getAverageScore() const {
        float sum = 0;
        for (const auto& episode : episodes){
            sum += episode.getScore();
        }
        return episodes.empty() ? 0 : sum / episodes.size();
    }

private:
    vector<Episode> episodes;
};
#endif // SERIE_H
