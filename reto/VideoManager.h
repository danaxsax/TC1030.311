#ifndef VIDEOMANAGER_H
#define VIDEOMANAGER_H

#include "Video.h"
#include "Movie.h"
#include "Serie.h"
#include <vector>

class VideoManager {
public:
    void addVideo(Video* video);
    void showVideosByRating(float rating) const;
    void showVideosByGenre(const std::string& genre) const;
    void showMoviesByRating(float rating) const;
    void rateVideo(const std::string& title, float rating);
    void displayMenu();

private:
    std::vector<Video*> videos;
};

#endif // VIDEOMANAGER_H
