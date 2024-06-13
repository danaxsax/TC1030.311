#ifndef SERIE_H
#define SERIE_H
#include "Video.h"
#include "Episode.h"
#include <vector>
#include <string>

using namespace std;

class Series : public Video {
public:
    Series(int _id, std::string _name, int _duration, std::string _genre, float _rentCost, float _saleCost);

    const std::vector<Episode>& getEpisodes() const;

    void addEpisode(const Episode& episode);

    float getAverageRating() override;
    void getData() ;

private:
    std::vector<Episode> episodes;
};
#endif // SERIE_H
